#!/usr/bin/env python3
"""Build docs/functions.csv: every game function with size, difficulty and hints.

Columns: name, address, instructions, bucket, uses_vu0, uses_fpu, calls,
         string_refs, candidate_name, module_hint, status
"""
import csv
import re
import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
ROM = (ROOT / "SLES_534.11.rom").read_bytes()
VRAM = 0x100000

# Modules recovered from __FILE__-style strings in the binary
MODULE_FILES = ("PtclMng.c", "SfxDomanString.c", "SfxDraw.c", "SfxFileIO.c", "SfxMng.c", "SfxFog.c")
IDENT = re.compile(r"^[A-Z][A-Za-z0-9]+(_[A-Za-z0-9]+)+$|^[A-Z][a-z]+[A-Z][A-Za-z0-9]+$")
VU0 = re.compile(r"\b(lqc2|sqc2|qmtc2|qmfc2|ctc2|cfc2|v[a-z]+\.[xyzw]+|vcall|vnop|vsqrt|vdiv|vwaitq)\b")
FPU = re.compile(r"\b(lwc1|swc1|add\.s|sub\.s|mul\.s|div\.s|mtc1|mfc1|cvt\.|c\.\w+\.s|madd\.s)\b")


def cstr(addr):
    o = addr - VRAM
    if not 0 <= o < len(ROM):
        return None
    e = ROM.find(b"\0", o)
    s = ROM[o:e]
    if 3 <= len(s) < 120 and all(32 <= c < 127 for c in s):
        return s.decode()
    return None


def bucket(n):
    if n <= 16:
        return "tiny"
    if n <= 60:
        return "small"
    if n <= 250:
        return "medium"
    return "large"


def main():
    order = (ROOT / "game_order.txt").read_text().split()
    # data symbols are D_XXXXXXXX or named in symbol_addrs.txt
    sym_addr = {n: int(v, 16) for n, v in re.findall(r"^(\w+) = (0x[0-9A-Fa-f]+);(?! // type:func)",
                                                     (ROOT / "symbol_addrs.txt").read_text(), re.M)}
    rows = []
    for name in order:
        text = (ROOT / "asm" / "game" / f"{name}.s").read_text()
        instrs = re.findall(r"^\s+/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/\s+(\S.*)$", text, re.M)
        body = []
        for addr, ins in instrs:
            if ins.startswith(".word"):
                continue
            body.append(ins)
        while body and body[-1].startswith("nop"):
            body.pop()
        addr = int(instrs[0][0], 16) if instrs else 0
        strings = []
        for m in re.finditer(r"%lo\(([A-Za-z_]\w*)\)", text):
            n = m.group(1)
            a = int(n[2:], 16) if re.fullmatch(r"D_[0-9A-F]{8}", n) else sym_addr.get(n)
            if a is None:
                continue
            s = cstr(a)
            if s and s not in strings:
                strings.append(s)
        idents = [s for s in strings if IDENT.match(s)]
        module = next((s for s in strings if s in MODULE_FILES), "")
        calls = len(re.findall(r"\bjal\s", text))
        src = (ROOT / "src" / "game" / f"{name}.c").exists()
        rows.append({
            "name": name,
            "address": f"0x{addr:08X}",
            "instructions": len(body),
            "bucket": bucket(len(body)),
            "uses_vu0": int(bool(VU0.search(text))),
            "uses_fpu": int(bool(FPU.search(text))),
            "calls": calls,
            "string_refs": " | ".join(s.replace("\n", "\\n") for s in strings[:4]),
            "candidate_name": idents[0] if len(idents) == 1 else "",
            "module_hint": module,
            "status": "matched" if src else "",
        })
    out = ROOT / "docs" / "functions.csv"
    out.parent.mkdir(exist_ok=True)
    with out.open("w", newline="") as f:
        w = csv.DictWriter(f, fieldnames=list(rows[0].keys()))
        w.writeheader()
        w.writerows(rows)
    print(f"wrote {out.relative_to(ROOT)} ({len(rows)} functions)")


if __name__ == "__main__":
    main()
