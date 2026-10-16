#!/usr/bin/env python3
"""Report decompilation progress for game code (functions with a src/game/*.c file)."""
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


def size(name):
    text = (ROOT / "asm" / "game" / f"{name}.s").read_text()
    n = len(re.findall(r"^\s+/\* [0-9A-F]+ [0-9A-F]{8} [0-9A-F]{8} \*/\s+(?!\.word)(?!nop)", text, re.M))
    return max(n, 1) * 4


def main():
    order = (ROOT / "game_order.txt").read_text().split()
    done = {p.stem for p in (ROOT / "src" / "game").glob("*.c")}
    total_b = done_b = 0
    for name in order:
        b = size(name)
        total_b += b
        if name in done:
            done_b += b
    nf = len(order)
    nd = len([n for n in order if n in done])
    print(f"Game functions: {nd}/{nf} ({100 * nd / nf:.2f}%)")
    print(f"Game code:      {done_b}/{total_b} bytes ({100 * done_b / total_b:.3f}%)")


if __name__ == "__main__":
    main()
