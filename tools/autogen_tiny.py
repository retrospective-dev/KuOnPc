#!/usr/bin/env python3
"""Auto-decompile trivial functions (getters/setters/constant returns/forwarders).

Each candidate is matched against instruction templates, written to src/game/,
verified with tools/diff.py, and deleted again if it doesn't byte-match.
Only exact matches survive, so this is safe to re-run.

usage: tools/autogen_tiny.py [--dry-run]
"""
import argparse
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent

LOAD_T = {"lw": "s32", "lh": "s16", "lhu": "u16", "lb": "s8", "lbu": "u8"}
STORE_T = {"sw": "s32", "sh": "s16", "sb": "s8"}


def num(s):
    return int(s, 16) if "0x" in s.lower() else int(s)


def field_struct(tname, off, ctype):
    if off == 0:
        return f"typedef struct {{\n    /* 0x0 */ {ctype} unk0;\n}} {tname};\n"
    return (f"typedef struct {{\n    /* 0x00 */ u8 unk0[0x{off:X}];\n"
            f"    /* 0x{off:02X} */ {ctype} unk{off:X};\n}} {tname};\n")


def fld(off):
    return f"unk{off:X}" if off else "unk0"


def gen(name, ins):
    """Return C source for a known pattern, or None."""
    I = [re.sub(r"\s+", " ", i) for i in ins]
    T = f"Unk_{name[5:]}"

    def m(p, s):
        return re.fullmatch(p, s)

    # --- 2-instruction patterns: "jr $ra ; <delay>" ---
    if len(I) == 2 and I[0] == "jr $ra":
        d = I[1]
        if x := m(r"(lw|lh|lhu|lb|lbu) \$v0, %gp_rel\((D_\w+)\)\(\$gp\)", d):
            t = LOAD_T[x[1]]
            return f"extern {t} {x[2]};\n\n{t} {name}(void) {{\n    return {x[2]};\n}}\n"
        if x := m(r"(sw|sh|sb) \$a0, %gp_rel\((D_\w+)\)\(\$gp\)", d):
            t = STORE_T[x[1]]
            return f"extern {t} {x[2]};\n\nvoid {name}(s32 arg0) {{\n    {x[2]} = arg0;\n}}\n"
        if x := m(r"(sw|sh|sb) \$zero, %gp_rel\((D_\w+)\)\(\$gp\)", d):
            t = STORE_T[x[1]]
            return f"extern {t} {x[2]};\n\nvoid {name}(void) {{\n    {x[2]} = 0;\n}}\n"
        if x := m(r"addiu \$v0, \$zero, (-?0x[0-9A-F]+|-?\d+)", d):
            return f"s32 {name}(void) {{\n    return {x[1]};\n}}\n"
        if d == "daddu $v0, $zero, $zero":
            return f"s32 {name}(void) {{\n    return 0;\n}}\n"
        if x := m(r"addiu \$v0, \$gp, %gp_rel\((D_\w+)\)", d):
            return f"extern s32 {x[1]};\n\ns32* {name}(void) {{\n    return &{x[1]};\n}}\n"
        if x := m(r"(sw|sh|sb) \$zero, (0x[0-9A-F]+|\d+)\(\$a0\)", d):
            off = num(x[2]); t = STORE_T[x[1]]
            return field_struct(T, off, t) + f"\nvoid {name}({T}* arg0) {{\n    arg0->{fld(off)} = 0;\n}}\n"
        if x := m(r"(sw|sh|sb) \$a1, (0x[0-9A-F]+|\d+)\(\$a0\)", d):
            off = num(x[2]); t = STORE_T[x[1]]
            return field_struct(T, off, t) + f"\nvoid {name}({T}* arg0, s32 arg1) {{\n    arg0->{fld(off)} = arg1;\n}}\n"
        if x := m(r"(lw|lh|lhu|lb|lbu) \$v0, (0x[0-9A-F]+|\d+)\(\$a0\)", d):
            off = num(x[2]); t = LOAD_T[x[1]]
            return field_struct(T, off, t) + f"\n{t} {name}({T}* arg0) {{\n    return arg0->{fld(off)};\n}}\n"

    # --- "j F ; <delay>" forwarders ---
    if len(I) == 2 and (j := m(r"j (func_\w+)", I[0])):
        f = j[1]
        if x := m(r"lw \$a0, %gp_rel\((D_\w+)\)\(\$gp\)", I[1]):
            return f"extern s32 {x[1]};\nvoid {f}(s32);\n\nvoid {name}(void) {{\n    {f}({x[1]});\n}}\n"
        if x := m(r"addiu \$a0, \$zero, (-?0x[0-9A-F]+|-?\d+)", I[1]):
            return f"void {f}(s32);\n\nvoid {name}(void) {{\n    {f}({x[1]});\n}}\n"
        if I[1] == "daddu $a0, $zero, $zero":
            return f"void {f}(s32);\n\nvoid {name}(void) {{\n    {f}(0);\n}}\n"

    # --- 3-instruction patterns ---
    if len(I) == 3:
        if (x := m(r"lui \$v0, %hi\((D_\w+)\)", I[0])) and I[1] == "jr $ra" and \
                m(rf"addiu \$v0, \$v0, %lo\({x[1]}\)", I[2]):
            return f"extern u8 {x[1]}[];\n\nvoid* {name}(void) {{\n    return {x[1]};\n}}\n"
        if (x := m(r"lui \$at, %hi\((D_\w+)\)", I[0])) and I[1] == "jr $ra":
            if y := m(rf"(lw|lh|lhu|lb|lbu) \$v0, %lo\({x[1]}\)\(\$at\)", I[2]):
                t = LOAD_T[y[1]]
                return f"extern {t} {x[1]}[];\n\n{t} {name}(void) {{\n    return {x[1]}[0];\n}}\n"
            if y := m(rf"(sw|sh|sb) \$a0, %lo\({x[1]}\)\(\$at\)", I[2]):
                t = STORE_T[y[1]]
                return f"extern {t} {x[1]}[];\n\nvoid {name}(s32 arg0) {{\n    {x[1]}[0] = arg0;\n}}\n"
            if y := m(rf"(sw|sh|sb) \$zero, %lo\({x[1]}\)\(\$at\)", I[2]):
                t = STORE_T[y[1]]
                return f"extern {t} {x[1]}[];\n\nvoid {name}(void) {{\n    {x[1]}[0] = 0;\n}}\n"
        if (x := m(r"lw \$v0, %gp_rel\((D_\w+)\)\(\$gp\)", I[0])) and I[1] == "jr $ra":
            if y := m(r"(lw|lh|lhu|lb|lbu) \$v0, (0x[0-9A-F]+|\d+)\(\$v0\)", I[2]):
                off = num(y[2]); t = LOAD_T[y[1]]
                return field_struct(T, off, t) + \
                    f"\nextern {T}* {x[1]};\n\n{t} {name}(void) {{\n    return {x[1]}->{fld(off)};\n}}\n"
            if y := m(r"addiu \$v0, \$v0, (-?0x[0-9A-F]+|-?\d+)", I[2]):
                return f"extern s32 {x[1]};\n\ns32 {name}(void) {{\n    return {x[1]} + {y[1]};\n}}\n"
        if (x := m(r"addiu \$v1, \$zero, (-?0x[0-9A-F]+|-?\d+)", I[0])) and I[1] == "jr $ra":
            if y := m(r"(sw|sh|sb) \$v1, %gp_rel\((D_\w+)\)\(\$gp\)", I[2]):
                t = STORE_T[y[1]]
                return f"extern {t} {y[2]};\n\nvoid {name}(void) {{\n    {y[2]} = {x[1]};\n}}\n"

    # --- 4-instruction: store function pointer into a1 field ---
    if len(I) == 4 and (x := m(r"lui \$v1, %hi\((func_\w+)\)", I[0])) and \
            m(rf"addiu \$v1, \$v1, %lo\({x[1]}\)", I[1]) and I[2] == "jr $ra" and \
            (y := m(r"sw \$v1, (0x[0-9A-F]+|\d+)\(\$a1\)", I[3])):
        off = num(y[1])
        return field_struct(T, off, "void*") + \
            f"\nvoid {x[1]}(void);\n\nvoid {name}(s32 arg0, {T}* arg1) {{\n    arg1->{fld(off)} = {x[1]};\n}}\n"
    if len(I) == 4 and (x := m(r"lw \$v1, %gp_rel\((D_\w+)\)\(\$gp\)", I[0])) and I[1] == "jr $ra" and False:
        pass
    if len(I) == 3 and (x := m(r"lw \$v1, %gp_rel\((D_\w+)\)\(\$gp\)", I[0])) and I[1] == "jr $ra":
        if y := m(r"(sw|sh|sb) \$(zero|a0), (0x[0-9A-F]+|\d+)\(\$v1\)", I[2]):
            off = num(y[3]); t = STORE_T[y[1]]
            val = "0" if y[2] == "zero" else "arg0"
            sig = "void" if y[2] == "zero" else "s32 arg0"
            return field_struct(T, off, t) + \
                f"\nextern {T}* {x[1]};\n\nvoid {name}({sig}) {{\n    {x[1]}->{fld(off)} = {val};\n}}\n"
    return None


def body(name):
    s = (ROOT / "asm" / "game" / f"{name}.s").read_text()
    b = s.split(f"glabel {name}", 1)[1].split("endlabel", 1)[0]
    ins = [x.strip() for x in re.findall(r"\*/\s+(\S[^\n]*)", b)]
    while ins and ins[-1] == "nop":
        ins.pop()
    # keep delay-slot nops that follow a jump
    return ins


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--dry-run", action="store_true")
    a = ap.parse_args()
    order = (ROOT / "game_order.txt").read_text().split()
    done = {p.stem for p in (ROOT / "src" / "game").glob("*.c")}
    tried = matched = 0
    for name in order:
        if name in done:
            continue
        ins = body(name)
        if len(ins) > 4:
            continue
        src = gen(name, ins)
        if src is None:
            continue
        tried += 1
        if a.dry_run:
            print(f"--- {name}\n{src}")
            continue
        path = ROOT / "src" / "game" / f"{name}.c"
        path.write_text('#include "common.h"\n\n' + src)
        r = subprocess.run([sys.executable, "tools/diff.py", "-q", name], cwd=ROOT, capture_output=True, text=True)
        if r.returncode == 0:
            matched += 1
        else:
            path.unlink()
            print(f"no match: {name}: {' ; '.join(ins)}")
    print(f"templates applied: {tried}, matched: {matched}")


if __name__ == "__main__":
    main()
