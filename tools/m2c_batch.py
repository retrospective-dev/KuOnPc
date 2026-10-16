#!/usr/bin/env python3
"""Draft unmatched game functions with m2c and keep the ones that byte-match.

For each candidate, m2c (--valid-syntax, CodeWarrior EE target) is run with a few option
sets. Each draft is turned into repo style (raw field accesses become per-function struct
typedefs where possible), written to src/game/, compiled, checked with tools/check_obj.py
and byte-compared with tools/diff.py. Only exact matches are kept, so it is safe to re-run.
The closest draft of each failure goes to build/m2c/best/ and build/m2c/report.txt lists them,
fewest differing instructions first.

Callee signatures come from build/m2c/ctx.h, made by `--gather`: m2c's reading of every
game function's own parameters, plus the definitions already in src/game/. Re-gather after
a big batch so newer matches improve the signatures.

usage: tools/m2c_batch.py [--gather] [--bucket tiny] [--limit N] [--allow-float] [--jobs 4] [func ...]
"""
import argparse
import csv
import re
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
PY = sys.executable

VARIANTS = [[], ["--no-andor"], ["--no-switches"], ["--gotos-only"], ["--void"]]

SIZES = {"s8": 1, "u8": 1, "s16": 2, "u16": 2, "s32": 4, "u32": 4, "f32": 4, "s64": 8, "u64": 8}

CTX = ROOT / "build" / "m2c" / "ctx.h"
SIGS = ROOT / "build" / "m2c" / "sigs.txt"
CTX_TYPES = """typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;
"""
DEF = re.compile(r"^([A-Za-z_][\w \*]*?)\s*\b(func_[0-9A-F]{8})\(([^)]*)\)\s*\{", re.M)

FIELD = re.compile(r"M2C_FIELD\((\w+), ([\w ]+?) \*, (-?0x[0-9A-Fa-f]+|-?\d+)\)")


def num(s):
    return int(s, 0)


TAIL = re.compile(r"^(\s+/\*[^*]*\*/\s+j\s+func_\w+\n)(\s+/\*[^*]*\*/\s+[^\n]*\n)", re.M)


JR = re.compile(r"^(\s+/\*[^*]*\*/\s+)jr(\s+)(\$(?!ra\b)\w+)\n(\s+/\*[^*]*\*/\s+[^\n]*\n)", re.M)


def prep_asm(name):
    """Copy of the function's asm with each tail call's delay slot moved before the `j`.

    m2c ignores the delay slot of a `j` to a function, so arguments set up there were lost.
    The delay slot runs before the callee anyway, so swapping is equivalent. The same goes for
    `jr $reg` tail calls through a function pointer, which m2c would take for a jump table.

    Registers 8-11 are $t0-$t3 in splat's (o32) names but $a4-$a7 in m2c's EE (EABI) names,
    where they carry arguments 5-8, so they are renamed."""
    out = ROOT / "build" / "m2c" / "asm" / f"{name}.s"
    out.parent.mkdir(parents=True, exist_ok=True)
    src = (ROOT / "asm" / "game" / f"{name}.s").read_text()
    src = re.sub(r"\$t([0-3])\b", lambda m: f"$a{int(m[1]) + 4}", src)
    if "jtbl" not in src:
        # without a jump table, `jr $reg` is a tail call through a function pointer
        src = JR.sub(lambda m: m[4] + f"{m[1]}jalr{m[2]}{m[3]}\n    nop\n    jr $ra\n    nop\n", src)
    out.write_text(TAIL.sub(lambda m: m[2] + m[1].rstrip("\n") + "\n" + "    nop\n", src))
    return out


def run_m2c(name, opts, ctx=True):
    ctx = ["--context", str(CTX)] if ctx and CTX.exists() else []
    r = subprocess.run([PY, "-m", "m2c.main", "-t", "mipsee-mwcc-c", "--valid-syntax", *ctx, *opts,
                        str(prep_asm(name))], cwd=ROOT, capture_output=True, text=True)
    if r.returncode != 0:
        return None
    return r.stdout


def fix_params(params):
    """m2c names parameters by register (arg1 = $a1) and leaves out unused ones; put the
    unused ones back so later arguments stay in the right registers. 64-bit moves are just
    how the EE copies registers, so s64/u64 parameters become s32/u32."""
    params = params.strip()
    if params in ("", "void"):
        return "void"
    parts = [p.strip() for p in params.split(",")]
    named = {}
    for p in parts:
        m = re.search(r"\barg(\d+)$", p)
        if not m:
            return params
        named[int(m[1])] = re.sub(r"^([su])64\b", r"\g<1>32", p)
    return ", ".join(named.get(i, f"s32 arg{i}") for i in range(max(named) + 1))


def fix_def(src, name):
    m = re.search(rf"^(.*\b{name}\()([^)]*)(\)\s*\{{)", src, re.M)
    if not m:
        return src
    return src[: m.start()] + m[1] + fix_params(m[2]) + m[3] + src[m.end():]


def load_sigs():
    sigs = {}
    if SIGS.exists():
        for line in SIGS.read_text().splitlines():
            n, proto = line.split(" ", 1)
            sigs[n] = proto
    return sigs


def add_protos(src, name, sigs):
    """Declare callees that m2c took from the context (it doesn't print those)."""
    # functions used by address come out as `extern T func_X;`: declare them as functions
    src = re.sub(r"^extern [\w \*]+? (func_[0-9A-F]{8});\n",
                 lambda m: (sigs.get(m[1], f"void {m[1]}();")) + "\n", src, flags=re.M)
    head, sep, body = src.partition(f"{name}(")
    declared = set(re.findall(r"\b(func_[0-9A-F]{8})\(", head))
    used = sorted(set(re.findall(r"\b(func_[0-9A-F]{8})\b", body)) - declared - {name})
    protos = []
    for f in used:
        if f not in sigs:
            return None
        protos.append(sigs[f])
    if not protos:
        return src
    return "\n".join(protos) + "\n" + src


def gather(jobs):
    """Write build/m2c/sigs.txt and ctx.h: one prototype per game function."""
    sigs = {}
    for p in (ROOT / "src" / "game").glob("*.c"):
        for ret, n, params in DEF.findall(p.read_text()):
            if n == p.stem and "Unk" not in ret and "Unk" not in params:
                sigs[n] = f"{' '.join(ret.split())} {n}({params.strip() or 'void'});"
    order = (ROOT / "game_order.txt").read_text().split()
    todo = [n for n in order if n not in sigs]

    def one(n):
        m = re.search(rf"^(.*?)\s*\b{n}\(([^)]*)\)\s*\{{", run_m2c(n, [], ctx=False) or "", re.M)
        if not m:
            return n, f"void {n}();"
        ret = m[1].replace("M2C_UNK", "s32").strip()
        params = fix_params(m[2].replace("M2C_UNK", "s32"))
        if "s128" in ret + params:
            return n, f"void {n}();"
        return n, f"{ret} {n}({params});"

    with ThreadPoolExecutor(jobs) as ex:
        for n, proto in ex.map(one, todo):
            sigs[n] = proto
    # SDK/runtime prototypes known so far live in common.h
    for ret, n, params in re.findall(r"^(\w[\w \*]*?)\s*\b(func_[0-9A-F]{8})\(([^)]*)\);",
                                     (ROOT / "include" / "common.h").read_text(), re.M):
        sigs[n] = f"{ret.strip()} {n}({params});"
        order.append(n)
    CTX.parent.mkdir(parents=True, exist_ok=True)
    SIGS.write_text("".join(f"{n} {sigs[n]}\n" for n in order if n in sigs))
    CTX.write_text(CTX_TYPES + "".join(sigs[n] + "\n" for n in order if n in sigs))
    print(f"gathered {len(sigs)} signatures")


def fix_globals(src, name):
    """Globals the retail code reaches with %hi/%lo (not $gp) are bigger than the small-data
    threshold (8 bytes); MWCC would use $gp for a scalar extern, so declare them as arrays
    and use element 0."""
    asm = (ROOT / "asm" / "game" / f"{name}.s").read_text()
    far = set(re.findall(r"%hi\((D_[0-9A-F]{8})\)", asm))
    for g in far:
        decl = re.search(rf"^extern ([\w \*]+?) ?\b{g};$", src, re.M)
        if not decl:
            continue
        head, body = src[: decl.start()], src[decl.end():]
        body = re.sub(rf"\b{g}\b(?!\[)", f"{g}[0]", body)
        src = head + f"extern {decl[1].strip()} {g}[];" + body
    return src


def clean(src):
    """Generic fixes so m2c output compiles with MWCC; None if it can't be used."""
    if re.search(r"M2C_(ERROR|BITWISE|STRUCT_COPY|LWL|LWR|SWL|SWR|CARRY|OVERFLOW|ACCESS|UNALIGNED|MEMBER)", src):
        return None
    src = src.replace("M2C_UNK", "s32")
    # m2c's own warnings are comments; drop trailing per-line comments it adds on prototypes
    src = re.sub(r"\s*/\* extern \*/", "", src)
    src = re.sub(r"\s*/\* irregular \*/", "", src)
    return src


def structify(name, src):
    """Turn M2C_FIELD(ident, T *, off) into typed struct accesses. None if not possible."""
    fields = {}
    for ident, t, off in FIELD.findall(src):
        t = t.strip()
        size = 4 if t.endswith("*") else SIZES.get(t)
        if size is None:
            return None
        o = num(off)
        if o < 0 or o % size:
            return None
        f = fields.setdefault(ident, {})
        if f.get(o, t) != t:
            return None
        f[o] = t
    if not fields:
        return src
    out = src
    defs = []
    for ident, f in fields.items():
        # identifier must be declared as `void *ident` somewhere (param, local or extern)
        decl = re.compile(rf"\bvoid \*{ident}\b")
        if not decl.search(out):
            return None
        sname = f"Unk_{name[5:]}" if len(fields) == 1 else f"Unk_{name[5:]}_{ident}"
        lines, pos = [], 0
        width = 3 if max(f) >= 0x100 else 2
        for o in sorted(f):
            t = f[o]
            if o < pos:
                return None
            if o > pos:
                lines.append(f"    /* 0x{pos:0{width}X} */ u8 unk{pos:X}[0x{o - pos:X}];")
            lines.append(f"    /* 0x{o:0{width}X} */ {t} unk{o:X};")
            pos = o + (4 if t.endswith("*") else SIZES[t])
        defs.append("typedef struct {\n" + "\n".join(lines) + f"\n}} {sname};\n")
        out = decl.sub(f"{sname} *{ident}", out)
        out = re.sub(rf"M2C_FIELD\({ident}, [\w ]+? \*, (-?0x[0-9A-Fa-f]+|-?\d+)\)",
                     lambda m: f"{ident}->unk{num(m[1]):X}", out)
    if "M2C_FIELD" in out:
        return None
    return "\n".join(defs) + "\n" + out


def render(name, src):
    """Yield candidate C files for one m2c draft (struct form first, then raw macro form)."""
    s = structify(name, src)
    if s is not None:
        yield '#include "common.h"\n\n' + s.strip() + "\n"
    if "M2C_FIELD" in src:
        yield '#include "common.h"\n#include "m2c_macros.h"\n\n' + src.strip() + "\n"


def check(name, text):
    """Test a draft under build/m2c/try/; only an exact match is written to src/game/."""
    trial = ROOT / "build" / "m2c" / "try" / f"{name}.c"
    trial.parent.mkdir(parents=True, exist_ok=True)
    trial.write_text(text)
    r = subprocess.run([PY, "tools/diff.py", "-q", "--file", str(trial), name], cwd=ROOT,
                       capture_output=True, text=True)
    if r.returncode == 0:
        c = subprocess.run([PY, "tools/check_obj.py", f"build/diff/{name}.o"], cwd=ROOT,
                           capture_output=True, text=True)
        if c.returncode == 0:
            (ROOT / "src" / "game" / f"{name}.c").write_text(text)
            return 0
        return "emits data"
    m = re.search(r"(\d+) of (\d+) differ", r.stdout)
    return int(m[1]) if m else "compile error"


def attempt(name, sigs):
    """Return (name, how) on a match, else (name, None, best) where best is the closest draft
    as (differing instructions or failure reason, text). The closest draft is kept in
    build/m2c/best/ for hand work."""
    seen = set()
    best = ("no usable m2c output", None)
    for opts in VARIANTS:
        raw = run_m2c(name, opts)
        if raw is None:
            continue
        src = clean(raw)
        if src is None:
            continue
        src = add_protos(fix_globals(fix_def(src, name), name), name, sigs)
        if src is None:
            continue
        for text in render(name, src):
            if text in seen:
                continue
            seen.add(text)
            res = check(name, text)
            if res == 0:
                return name, " ".join(opts) or "default", None
            if isinstance(res, int) and (not isinstance(best[0], int) or res < best[0]):
                best = (res, text)
            elif not isinstance(best[0], int):
                best = (res, text)
    if best[1]:
        out = ROOT / "build" / "m2c" / "best" / f"{name}.c"
        out.parent.mkdir(parents=True, exist_ok=True)
        out.write_text(best[1])
    return name, None, best[0]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("funcs", nargs="*")
    ap.add_argument("--gather", action="store_true", help="rebuild the signature context first")
    ap.add_argument("--bucket")
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--allow-float", action="store_true")
    ap.add_argument("--jobs", type=int, default=4)
    a = ap.parse_args()
    if a.gather or not CTX.exists():
        gather(a.jobs)
    sigs = load_sigs()
    done = {p.stem for p in (ROOT / "src" / "game").glob("*.c")}
    if a.funcs:
        todo = [f for f in a.funcs if f not in done]
    else:
        rows = list(csv.DictReader((ROOT / "docs" / "functions.csv").open()))
        rows = [r for r in rows if r["name"] not in done]
        if a.bucket:
            rows = [r for r in rows if r["bucket"] == a.bucket]
        if not a.allow_float:
            rows = [r for r in rows if r["uses_fpu"] == "0" and r["uses_vu0"] == "0"]
        rows.sort(key=lambda r: int(r["instructions"]))
        todo = [r["name"] for r in rows]
    if a.limit:
        todo = todo[: a.limit]
    # build the shared symbol script once before going parallel
    subprocess.run([PY, "tools/diff.py", "-q", "func_0012E740"], cwd=ROOT, capture_output=True)
    matched = 0
    report = []
    with ThreadPoolExecutor(a.jobs) as ex:
        for name, how, best in ex.map(lambda n: attempt(n, sigs), todo):
            if how:
                matched += 1
                print(f"MATCH {name} ({how})", flush=True)
            else:
                report.append((name, best))
    # near-miss list: fewest differing instructions first
    report.sort(key=lambda r: (not isinstance(r[1], int), r[1] if isinstance(r[1], int) else 0, r[0]))
    (ROOT / "build" / "m2c" / "report.txt").write_text("".join(f"{n} {b}\n" for n, b in report))
    print(f"m2c batch: {matched} / {len(todo)} matched; near misses in build/m2c/report.txt")


if __name__ == "__main__":
    main()
