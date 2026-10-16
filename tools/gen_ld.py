#!/usr/bin/env python3
"""Generate build/kuon.ld from splat's SLES_534.11.ld.

The single `build/asm/game.o(.text*)` line is replaced with one entry per game
function, in original order. If src/game/<func>.c exists its MWCC object is used,
otherwise the split assembly in asm/game/<func>.s.
"""
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


def main() -> int:
    base = (ROOT / "SLES_534.11.ld").read_text()
    order = (ROOT / "game_order.txt").read_text().split()
    entries = []
    n_c = 0
    for name in order:
        if (ROOT / "src" / "game" / f"{name}.c").exists():
            obj = f"build/src/game/{name}.o"
            n_c += 1
        else:
            obj = f"build/asm/game/{name}.o"
        entries.append(f"        . = ALIGN(16);\n        {obj}(.text*);\n")
    needle = "        build/asm/game.o(.text*);\n"
    if needle not in base:
        print("game.o text line not found in linker script", file=sys.stderr)
        return 1
    out = base.replace(needle, "".join(entries))
    # game.o no longer exists as a single object
    out = "\n".join(l for l in out.splitlines() if "build/asm/game.o" not in l) + "\n"
    (ROOT / "build").mkdir(exist_ok=True)
    (ROOT / "build" / "kuon.ld").write_text(out)
    print(f"linker script: {len(order)} game functions, {n_c} from C")
    return 0


if __name__ == "__main__":
    sys.exit(main())
