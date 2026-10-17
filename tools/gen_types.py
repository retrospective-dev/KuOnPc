#!/usr/bin/env python3
"""Generate C type declarations from the prototype's debug info (tools/dwarf1.py).

CodeWarrior recorded every struct, union and enum layout but no typedef names, so each type
is named after the variables, parameters and fields that use it (`lpMdlData` -> `MdlData`),
and identical layouts from different source files are merged.

Writes:
  include/kuon_types.h     all structs/unions/enums, in dependency order
  build/m2c/proto_ctx.h    the same plus a prototype for every retail function mapped to the
                           prototype (build/proto/map.txt), for m2c's --context

usage: tools/gen_types.py   (needs disc/proto/SLUS_210.07 and build/proto/map.txt)
"""
import re
import struct
import sys
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import dwarf1  # noqa: E402

PROTO = ROOT / "disc" / "proto" / "SLUS_210.07"
KINDS = {"structure_type": "struct", "union_type": "union", "enumeration_type": "enum"}
RESERVED = {"s8", "u8", "s16", "u16", "s32", "u32", "s64", "u64", "f32", "u128", "s128"}


def base_name(var):
    """lpMdlData -> MdlData, aMorphRate -> MorphRate, s_Work -> Work."""
    n = re.sub(r"^(lp|lpa|pp|p|a|s_|g_|m_|_)(?=[A-Z_])", "", var or "")
    n = n.strip("_")
    if not n or not re.match(r"[A-Za-z]", n):
        return None
    return n[0].upper() + n[1:]


def target(dies, d):
    """The struct/union/enum DIE a variable's type points at (through pointers/arrays), if any."""
    a = d.attrs
    ref = a.get("user_def_type")
    if ref is None and "mod_u_d_type" in a:
        ref = struct.unpack_from("<I", a["mod_u_d_type"], len(a["mod_u_d_type"]) - 4)[0]
    seen = 0
    while ref is not None and seen < 8:
        t = dies.get(ref)
        if t is None:
            return None
        if t.tag in KINDS:
            return t
        if t.tag in ("pointer_type", "array_type"):
            _, inner = dwarf1.Printer(dies).subscr(t) if t.tag == "array_type" else (None, t)
            src = inner.attrs if inner is not None else {}
            ref = src.get("user_def_type")
            if ref is None and "mod_u_d_type" in src:
                ref = struct.unpack_from("<I", src["mod_u_d_type"], len(src["mod_u_d_type"]) - 4)[0]
            seen += 1
            continue
        return None
    return None


def main():
    dies, roots = dwarf1.parse(dwarf1.section(str(PROTO), ".debug"))
    types = [d for d in dies.values() if d.tag in KINDS and (d.children or d.tag == "enumeration_type")]

    def shallow(t):
        if t.tag == "enumeration_type":
            return ("enum", t.attrs.get("element_list", b""))
        return (t.tag, t.attrs.get("byte_size", 0),
                tuple((m.name, dwarf1.Printer.location(m)) for m in t.children if m.tag == "member"))

    canon, groups = {}, defaultdict(list)
    for t in types:
        k = shallow(t)
        groups[k].append(t.off)
        canon[t.off] = k
    # names from usage
    votes = defaultdict(Counter)
    for d in dies.values():
        if d.tag in ("member", "local_variable", "global_variable", "formal_parameter"):
            t = target(dies, d)
            if t is not None and t.off in canon:
                b = base_name(d.name)
                if b:
                    votes[canon[t.off]][b] += 1
    # type names must not clash with function or global names (symbol_addrs.txt)
    symbols = set(re.findall(r"^(\w+) = 0x", (ROOT / "symbol_addrs.txt").read_text(), re.M))
    names, used = {}, set()

    def free(n):
        """n, or n_t if a function/global already has that name."""
        return n + "_t" if n in symbols else n
    for k in sorted(groups, key=lambda k: -sum(votes[k].values())):
        cands = [free(n) for n, _ in votes[k].most_common() if n not in RESERVED]
        name = next((n for n in cands if n not in used), None)
        if name is None:
            kind = KINDS[dies[groups[k][0]].tag]
            base = cands[0] if cands else free(f"{kind.capitalize()}_{dies[groups[k][0]].attrs.get('byte_size', 0):X}")
            name, i = base, 2
            while name in used:
                name, i = f"{base}{i}", i + 1
        used.add(name)
        names[k] = name

    pr = dwarf1.Printer(dies)
    orig_udt = pr.udt

    def udt(ref, var):
        t = dies.get(ref)
        if t is not None and t.off in canon:
            return f"{names[canon[t.off]]} {var}".strip()
        if t is not None and t.tag in KINDS:
            return f"void {var}".strip()  # declared but not defined in that unit
        return orig_udt(ref, var)
    pr.udt = udt

    # one representative per layout; order so by-value members come first
    reps = {k: dies[v[0]] for k, v in groups.items()}
    deps = {}
    for k, t in reps.items():
        need = set()
        for m in t.children:
            if m.tag != "member":
                continue
            decl = pr.typename(m, "x")
            for n in re.findall(r"\b(\w+) x\b|\b(\w+) x\[", decl):
                for nn in n:
                    if nn:
                        need.add(nn)
        deps[k] = need
    by_name = {names[k]: k for k in reps}
    order, state = [], {}

    def visit(k):
        if state.get(k) == 2:
            return
        if state.get(k) == 1:
            return
        state[k] = 1
        for n in deps[k]:
            if n in by_name:
                visit(by_name[n])
        state[k] = 2
        order.append(k)
    for k in sorted(reps, key=lambda k: names[k]):
        visit(k)

    lines = ["/* Generated by tools/gen_types.py from the Aug 2004 prototype's debug info. */",
             "#ifndef KUON_TYPES_H", "#define KUON_TYPES_H", "",
             "typedef unsigned long long u128_t __attribute__((aligned(16)));", ""]
    # enums can't be forward-declared: define them first
    for k in order:
        t = reps[k]
        if t.tag == "enumeration_type":
            lines.append(pr.enum(t).replace(f"enum {t.name or f'anon_{t.off:x}'}", f"enum {names[k]}"))
            lines.append(f"typedef enum {names[k]} {names[k]};")
    lines.append("")
    for k in order:
        if reps[k].tag != "enumeration_type":
            lines.append(f"typedef {KINDS[reps[k].tag]} {names[k]} {names[k]};")
    lines.append("")
    for k in order:
        t = reps[k]
        if t.tag == "enumeration_type":
            continue
        kind = KINDS[t.tag]
        body = [f"{kind} {names[k]} {{ /* 0x{t.attrs.get('byte_size', 0):X} */"]
        for m in t.children:
            if m.tag != "member":
                continue
            off = dwarf1.Printer.location(m).replace("add", "").strip()
            bits = f" : {m.attrs['bit_size']}" if "bit_size" in m.attrs else ""
            decl = pr.typename(m, m.name or "unk").replace("u128 ", "u128_t ").replace("s128 ", "u128_t ")
            body.append(f"    /* {off:>5} */ {decl}{bits};")
        body.append("};")
        lines.append("\n".join(body))
        lines.append("")
    lines.append("#endif")
    header = "\n".join(lines) + "\n"
    (ROOT / "include" / "kuon_types.h").write_text(header)

    # prototypes for retail functions, under their retail names
    proto_name = {}
    for line in (ROOT / "build" / "proto" / "map.txt").read_text().splitlines():
        r, p, s = line.split()
        proto_name.setdefault(p, []).append(r)
    protos = []
    for d in dies.values():
        if d.tag in ("global_subroutine", "subroutine") and d.name in proto_name:
            params = [c for c in d.children if c.tag == "formal_parameter"]
            ps = ", ".join(re.sub(r"\b[us]128 ", "u128_t ", pr.typename(p, p.name or f"arg{i}"))
                           for i, p in enumerate(params)) or "void"
            for r in proto_name[d.name]:
                protos.append((r, re.sub(r"\b[us]128 ", "u128_t ", f"{pr.typename(d, r + '(' + ps + ')')};")))
    # globals: retail data symbols that start exactly at a prototype global take its type
    gtype = {}
    for d in dies.values():
        if d.tag in ("global_variable", "local_variable") and "location" in d.attrs:
            loc = dwarf1.Printer.location(d)
            if re.fullmatch(r"0x[0-9A-F]{8}", loc):
                gtype[int(loc, 16)] = d
    dmap = ROOT / "build" / "proto" / "data_map.txt"
    externs = []
    if dmap.exists():
        for line in dmap.read_text().splitlines():
            rsym, paddr, pname, _ = line.split()
            g = gtype.get(int(paddr, 16))
            if g is not None and "+" not in pname:
                decl = re.sub(r"\b[us]128 ", "u128_t ", pr.typename(g, rsym))
                externs.append((rsym, f"extern {decl};"))
    ctx = ROOT / "build" / "m2c" / "proto_ctx.h"
    ctx.parent.mkdir(parents=True, exist_ok=True)
    # m2c's C parser takes no preprocessor lines or attributes
    plain = "\n".join(l for l in header.splitlines() if not l.startswith("#"))
    plain = plain.replace(" __attribute__((aligned(16)))", "")
    # `long` is 64-bit on the EE; m2c assumes 32
    plain = re.sub(r"(?<!long )\blong\b(?! long)", "long long", plain)
    ctx.write_text(dwarf1_types_prelude() + plain + "\n" + "\n".join(p for _, p in sorted(set(protos))) + "\n"
                   + "\n".join(e for _, e in externs) + "\n")
    # locals by register (m2c names its temporaries after registers) and struct fields
    import json
    locs = {}
    for d in dies.values():
        if d.tag in ("global_subroutine", "subroutine") and d.name in proto_name:
            regs = {}

            def walk(node):
                for c in node.children:
                    if c.tag == "local_variable":
                        loc = dwarf1.Printer.location(c)
                        if re.fullmatch(r"[a-z]\w?\d?", loc) and loc in dwarf1.REGS:
                            regs.setdefault(loc, re.sub(r"\b[us]128 ", "u128_t ", pr.typename(c, "@")))
                    elif c.tag == "lexical_block":
                        walk(c)
            walk(d)
            for r in proto_name[d.name]:
                locs[r] = regs
    fields = {}
    for k, t in reps.items():
        if t.tag == "enumeration_type":
            continue
        f = {}
        for m in t.children:
            if m.tag == "member" and "bit_size" not in m.attrs:
                off = dwarf1.Printer.location(m).replace("add", "").strip()
                try:
                    f.setdefault(str(int(off, 16)), m.name)
                except ValueError:
                    pass
        fields[names[k]] = f
    (ctx.parent / "proto_locals.json").write_text(json.dumps(locs))
    (ctx.parent / "proto_fields.json").write_text(json.dumps(fields))
    # pieces for tools/m2c_batch.py, which builds a context per function
    (ctx.parent / "proto_types.h").write_text(plain + "\n")
    (ctx.parent / "proto_protos.txt").write_text(
        "".join(f"{n} {p}\n" for n, p in sorted(set(protos))))
    (ctx.parent / "proto_externs.txt").write_text(
        "".join(f"{n} {e}\n" for n, e in externs))
    print(f"{len(order)} types, {len(set(protos))} prototypes, {len(externs)} typed globals")


def dwarf1_types_prelude():
    return ("typedef signed char s8;\ntypedef unsigned char u8;\ntypedef signed short s16;\n"
            "typedef unsigned short u16;\ntypedef signed int s32;\ntypedef unsigned int u32;\n"
            "typedef signed long long s64;\ntypedef unsigned long long u64;\ntypedef float f32;\n")


if __name__ == "__main__":
    main()
