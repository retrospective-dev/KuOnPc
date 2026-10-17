#!/usr/bin/env python3
"""Give retail functions and globals their original names from the Aug 2004 prototype.

Reads build/proto/map.txt and build/proto/data_map.txt (tools/proto_match.py, proto_data.py)
and:
  - writes the names into symbol_addrs.txt (so `make split` names the asm after them),
  - renames src/game/ and src/wip/ files and every reference inside them.

A function is named only when its code is at least --min-sim similar to the prototype's.
Names used more than once (static functions in different files, or two retail functions
mapped to one prototype function) get the address appended. Globals are named only when
the retail symbol starts exactly at a prototype global. Run `make split` afterwards.

usage: tools/apply_names.py [--min-sim 0.75] [--dry-run]
"""
import argparse
import re
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
C_WORDS = {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else",
           "enum", "extern", "float", "for", "goto", "if", "int", "long", "register", "return", "short",
           "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void",
           "volatile", "while", "main"}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--min-sim", type=float, default=0.75)
    ap.add_argument("--dry-run", action="store_true")
    a = ap.parse_args()

    funcs = {}
    for line in (ROOT / "build" / "proto" / "map.txt").read_text().splitlines():
        r, p, s = line.split()
        if r.startswith("func_") and float(s) >= a.min_sim and p not in C_WORDS:
            funcs[r] = p
    data = {}
    for line in (ROOT / "build" / "proto" / "data_map.txt").read_text().splitlines():
        r, _, p, _ = line.split()
        # compiler-generated names (@123 for literals) aren't C identifiers
        if r.startswith("D_") and re.fullmatch(r"[A-Za-z_]\w*", p) and p not in C_WORDS:
            data[r] = p
    # unique names: a repeated name gets its address appended
    counts = Counter(list(funcs.values()) + list(data.values()))
    names = {}
    for old, new in list(funcs.items()) + list(data.items()):
        names[old] = new if counts[new] == 1 else f"{new}_{old.split('_', 1)[1]}"

    # symbol_addrs.txt: keep hand-written entries, replace the generated block
    sa = ROOT / "symbol_addrs.txt"
    marker = "// --- original names from the Aug 2004 prototype (tools/apply_names.py) ---"
    keep = sa.read_text().split(marker)[0].rstrip() + "\n"
    lines = [marker]
    for old, new in sorted(names.items(), key=lambda kv: int(kv[0].split("_", 1)[1], 16)):
        addr = int(old.split("_", 1)[1], 16)
        kind = " // type:func" if old.startswith("func_") else ""
        lines.append(f"{new} = 0x{addr:08X};{kind}")
    pat = re.compile(r"\b(?:func|D)_[0-9A-F]{8}\b")

    def rename(text):
        return pat.sub(lambda m: names.get(m[0], m[0]), text)

    moves = []
    for d in ("game", "wip"):
        for p in sorted((ROOT / "src" / d).glob("*.c")):
            new_text = rename(p.read_text())
            new_path = p.with_name(names.get(p.stem, p.stem) + ".c")
            moves.append((p, new_path, new_text))
    print(f"{sum(1 for k in names if k.startswith('func_'))} functions, "
          f"{sum(1 for k in names if k.startswith('D_'))} globals named; {len(moves)} C files updated")
    if a.dry_run:
        return
    sa.write_text(keep + "\n" + "\n".join(lines) + "\n")
    for old, new, text in moves:
        if old != new:
            old.unlink()
        new.write_text(text)
    # the full old -> new table, for other tools and for anyone with old names in hand
    (ROOT / "build" / "proto" / "renames.txt").write_text(
        "".join(f"{o} {n}\n" for o, n in sorted(names.items())))


if __name__ == "__main__":
    main()
