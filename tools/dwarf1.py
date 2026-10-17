#!/usr/bin/env python3
"""Dump the DWARF v1 debug info of a CodeWarrior PS2 ELF as C-like declarations.

CodeWarrior wrote DWARF v1 (`.debug` section), which modern tools don't read. This prints,
per source file: structs/unions/enums/typedefs with member offsets, global and static
variables with addresses, and functions with address range, parameters and locals
(register or stack slot).

usage: tools/dwarf1.py disc/proto/SLUS_210.07 [-o build/proto/dwarf]   (one .c file per unit)
"""
import argparse
import re
import struct
import subprocess
from pathlib import Path

TAGS = {0x01: "array_type", 0x04: "enumeration_type", 0x05: "formal_parameter", 0x06: "global_subroutine",
        0x07: "global_variable", 0x0A: "label", 0x0B: "lexical_block", 0x0C: "local_variable", 0x0D: "member",
        0x0F: "pointer_type", 0x11: "compile_unit", 0x13: "structure_type", 0x14: "subroutine",
        0x15: "subroutine_type", 0x16: "typedef", 0x17: "union_type", 0x18: "unspecified_parameters",
        0x1D: "inlined_subroutine"}
AT = {0x01: "sibling", 0x02: "location", 0x03: "name", 0x05: "fund_type", 0x06: "mod_fund_type",
      0x07: "user_def_type", 0x08: "mod_u_d_type", 0x0A: "subscr_data", 0x0B: "byte_size",
      0x0C: "bit_offset", 0x0D: "bit_size", 0x0F: "element_list", 0x10: "stmt_list", 0x11: "low_pc",
      0x12: "high_pc", 0x13: "language", 0x1C: "const_value", 0x25: "producer", 0x27: "prototyped"}
FT = {0x1: "char", 0x2: "signed char", 0x3: "unsigned char", 0x4: "short", 0x5: "short",
      0x6: "unsigned short", 0x7: "int", 0x8: "int", 0x9: "unsigned int", 0xA: "long", 0xB: "long",
      0xC: "unsigned long", 0xD: "void*", 0xE: "float", 0xF: "double", 0x10: "long double",
      0x14: "void", 0x15: "bool", 0x8008: "long long", 0x8208: "unsigned long long",
      0x8108: "long long", 0x8408: "u128", 0x8508: "s128", 0x8308: "u128"}
REGS = ["zero", "at", "v0", "v1", "a0", "a1", "a2", "a3", "t0", "t1", "t2", "t3", "t4", "t5", "t6", "t7",
        "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7", "t8", "t9", "k0", "k1", "gp", "sp", "fp", "ra"]


class Die:
    __slots__ = ("off", "tag", "attrs", "children")

    def __init__(self, off, tag, attrs):
        self.off, self.tag, self.attrs, self.children = off, tag, attrs, []

    @property
    def name(self):
        return self.attrs.get("name")


def section(path, name):
    out = subprocess.run(["mips-linux-gnu-readelf", "-S", "-W", path], capture_output=True, text=True).stdout
    m = re.search(rf"\]\s+{re.escape(name)}\s+\S+\s+[0-9a-f]+ ([0-9a-f]+) ([0-9a-f]+)", out)
    off, size = int(m[1], 16), int(m[2], 16)
    return Path(path).read_bytes()[off:off + size]


def parse(data):
    dies, pos = {}, 0
    while pos + 4 <= len(data):
        length = struct.unpack_from("<I", data, pos)[0]
        if length < 8:
            pos += max(length, 4)
            continue
        tag = struct.unpack_from("<H", data, pos + 4)[0]
        p, end, attrs = pos + 6, pos + length, {}
        while p + 2 <= end:
            at = struct.unpack_from("<H", data, p)[0]
            p += 2
            form, key = at & 0xF, AT.get(at >> 4, f"at_{at >> 4:x}")
            if form in (1, 2, 6):
                val = struct.unpack_from("<I", data, p)[0]; p += 4
            elif form == 5:
                val = struct.unpack_from("<H", data, p)[0]; p += 2
            elif form == 7:
                val = struct.unpack_from("<Q", data, p)[0]; p += 8
            elif form == 3:
                n = struct.unpack_from("<H", data, p)[0]; val = data[p + 2:p + 2 + n]; p += 2 + n
            elif form == 4:
                n = struct.unpack_from("<I", data, p)[0]; val = data[p + 4:p + 4 + n]; p += 4 + n
            elif form == 8:
                e = data.index(b"\0", p); val = data[p:e].decode("latin-1"); p = e + 1
            else:
                break
            attrs[key] = val
        dies[pos] = Die(pos, TAGS.get(tag, f"tag_{tag:x}"), attrs)
        pos = end
    # build the tree: a DIE's children follow it directly and end at its sibling
    order = sorted(dies)
    nxt = {o: order[i + 1] if i + 1 < len(order) else len(data) for i, o in enumerate(order)}

    def kids(start, stop):
        out, o = [], start
        while o is not None and o < stop:
            if o not in dies:
                o = next((x for x in order if x > o), None)
                continue
            d = dies[o]
            sib = d.attrs.get("sibling", 0)
            if sib > nxt[o]:
                d.children = kids(nxt[o], sib)
                o = sib
            else:
                o = nxt[o]
            out.append(d)
        return out
    import sys
    sys.setrecursionlimit(100000)
    roots = kids(0, len(data))
    return dies, roots


class Printer:
    def __init__(self, dies):
        self.dies = dies

    def typename(self, d, var=""):
        """C declaration of `var` with the type described by DIE d's type attributes."""
        a = d.attrs
        if "fund_type" in a:
            ft = a["fund_type"]
            return f"{FT.get(ft, f'ft_{ft:x}')} {var}".strip()
        if "user_def_type" in a:
            return f"{self.udt(a['user_def_type'], var)}".strip()
        if "mod_fund_type" in a:
            b = a["mod_fund_type"]
            mods, ft = b[:-2], struct.unpack_from("<H", b, len(b) - 2)[0]
            return self.apply_mods(mods, FT.get(ft, f"ft_{ft:x}"), var)
        if "mod_u_d_type" in a:
            b = a["mod_u_d_type"]
            mods, ref = b[:-4], struct.unpack_from("<I", b, len(b) - 4)[0]
            return self.apply_mods(mods, None, var, ref)
        return f"void {var}".strip()

    def apply_mods(self, mods, base, var, ref=None):
        decl = var
        for m in mods:
            if m == 1:
                decl = f"*{decl}"
            elif m == 3:
                decl = f"const {decl}"
            elif m == 4:
                decl = f"volatile {decl}"
        if ref is not None:
            return self.udt(ref, decl)
        return f"{base} {decl}".strip()

    def udt(self, ref, var):
        t = self.dies.get(ref)
        if t is None:
            return f"/*?{ref:x}*/ int {var}"
        if t.tag in ("structure_type", "union_type", "enumeration_type"):
            kw = {"structure_type": "struct", "union_type": "union", "enumeration_type": "enum"}[t.tag]
            return f"{kw} {t.name or f'anon_{ref:x}'} {var}".strip()
        if t.tag == "typedef":
            return f"{t.name} {var}".strip()
        if t.tag == "pointer_type":
            return self.typename(t, f"*{var}")
        if t.tag == "array_type":
            dims, inner = self.subscr(t)
            v = f"({var})" if var.startswith("*") else var
            return self.typename(inner, v + "".join(f"[{n}]" for n in dims)) if inner else f"int {v}"
        if t.tag == "subroutine_type":
            return self.typename(t, f"(*{var})()" if not var.startswith("*") else f"({var})()")
        return f"/*{t.tag}*/ int {var}"

    def subscr(self, t):
        b, p, dims, inner = t.attrs.get("subscr_data", b""), 0, [], None
        while p < len(b):
            fmt = b[p]; p += 1
            if fmt == 0:  # FMT_FT_C_C: index type, low, high
                p += 2
                lo, hi = struct.unpack_from("<ii", b, p); p += 8
                dims.append(hi - lo + 1)
            elif fmt == 8:  # FMT_ET: element type follows as an attribute
                at = struct.unpack_from("<H", b, p)[0]; p += 2
                key, form = AT.get(at >> 4), at & 0xF
                if form == 5:
                    val = struct.unpack_from("<H", b, p)[0]; p += 2
                elif form in (1, 2, 6):
                    val = struct.unpack_from("<I", b, p)[0]; p += 4
                elif form == 3:
                    n = struct.unpack_from("<H", b, p)[0]; val = b[p + 2:p + 2 + n]; p += 2 + n
                else:
                    break
                inner = Die(0, "x", {key: val})
            else:
                break
        return dims, inner

    @staticmethod
    def location(d):
        b = d.attrs.get("location")
        if not b:
            return ""
        p, stack, out = 0, [], []
        while p < len(b):
            op = b[p]; p += 1
            if op in (1, 2, 3, 4):
                v = struct.unpack_from("<i" if op == 4 else "<I", b, p)[0]; p += 4
                if op == 1:
                    out.append(REGS[v] if v < 32 else f"f{v - 32}")
                elif op == 2:
                    out.append(f"{REGS[v] if v < 32 else v}+")
                elif op == 3:
                    out.append(f"0x{v:08X}")
                else:
                    out.append(f"{v:#x}" if v >= 0 else f"-{-v:#x}")
            elif op == 7:
                out.append("add")
            else:
                out.append(f"op{op}")
        s = " ".join(out)
        return s.replace("+ ", "+").replace(" add", "")

    def struct(self, d):
        kw = {"structure_type": "struct", "union_type": "union"}[d.tag]
        lines = [f"{kw} {d.name or f'anon_{d.off:x}'} {{ /* size 0x{d.attrs.get('byte_size', 0):X} */"]
        for m in d.children:
            if m.tag != "member":
                continue
            loc = self.location(m)
            off = loc.replace("add", "").strip()
            bits = f" : {m.attrs['bit_size']}" if "bit_size" in m.attrs else ""
            lines.append(f"    /* {off:>6} */ {self.typename(m, m.name or 'unk')}{bits};")
        lines.append("};")
        return "\n".join(lines)

    def enum(self, d):
        b, p, items = d.attrs.get("element_list", b""), 0, []
        while p + 4 <= len(b):
            v = struct.unpack_from("<i", b, p)[0]; p += 4
            e = b.index(b"\0", p); items.append((b[p:e].decode("latin-1"), v)); p = e + 1
        items.reverse()
        return f"enum {d.name or f'anon_{d.off:x}'} {{ " + ", ".join(f"{n} = {v}" for n, v in items) + " };"

    def function(self, d):
        params, locals_ = [], []

        def walk(node, depth):
            for c in node.children:
                if c.tag == "formal_parameter":
                    params.append(c)
                elif c.tag == "local_variable":
                    locals_.append((depth, c))
                elif c.tag == "lexical_block":
                    walk(c, depth + 1)
        walk(d, 0)
        ret = self.typename(d, "")
        ps = ", ".join(f"{self.typename(p, p.name or 'arg')} /* {self.location(p)} */" for p in params) or "void"
        static = "static " if d.tag == "subroutine" else ""
        lo, hi = d.attrs.get("low_pc", 0), d.attrs.get("high_pc", 0)
        lines = [f"// 0x{lo:08X}-0x{hi:08X}", f"{static}{ret} {d.name}({ps}) {{"]
        for depth, v in locals_:
            lines.append(f"{'    ' * (depth + 1)}{self.typename(v, v.name or 'var')}; // {self.location(v)}")
        lines.append("}")
        return "\n".join(lines)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("elf")
    ap.add_argument("-o", "--out", default="build/proto/dwarf")
    a = ap.parse_args()
    dies, roots = parse(section(a.elf, ".debug"))
    pr = Printer(dies)
    out = Path(a.out)
    out.mkdir(parents=True, exist_ok=True)
    n, files, seen = 0, {}, {}
    for cu in roots:
        if cu.tag != "compile_unit":
            continue
        parts = []
        for d in cu.children:
            try:
                if d.tag in ("structure_type", "union_type") and d.children:
                    parts.append(pr.struct(d))
                elif d.tag == "enumeration_type":
                    parts.append(pr.enum(d))
                elif d.tag == "typedef":
                    parts.append(f"typedef {pr.typename(d, d.name)};")
                elif d.tag in ("global_variable", "local_variable"):
                    st = "static " if d.tag == "local_variable" else ""
                    parts.append(f"{st}{pr.typename(d, d.name)}; // {pr.location(d)}")
                elif d.tag in ("global_subroutine", "subroutine") and "low_pc" in d.attrs:
                    parts.append(pr.function(d))
            except Exception as e:  # keep going on odd entries
                parts.append(f"/* {d.tag} {d.name}: {e} */")
        name = re.split(r"[\\/]", cu.name or f"cu_{cu.off:x}")[-1]
        files.setdefault(name, [f"// {cu.name}"])
        # CodeWarrior writes one unit per function; types repeat between them
        for part in parts:
            if part not in seen.setdefault(name, set()):
                seen[name].add(part)
                files[name].append(part)
        n += 1
    for name, parts in files.items():
        (out / f"{name}.txt").write_text("\n\n".join(parts) + "\n")
    print(f"{n} compile units, {len(files)} source files written to {out}/")


if __name__ == "__main__":
    main()
