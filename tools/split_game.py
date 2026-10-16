#!/usr/bin/env python3
"""Split asm/game.s (splat output) into one .s file per function under asm/game/.

Every FromSoftware function is 16-byte aligned (CodeWarrior emits each function in
its own .text section, align 16), so each function becomes its own object and the
linker reproduces the original layout. A function that does NOT start on a 16-byte
boundary is kept in the same file as the function before it.

Writes:
  asm/game/<func>.s   one per function (incl. its trailing alignment padding)
  game_order.txt      link order, one function name per line
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SRC = ROOT / "asm" / "game.s"
OUT = ROOT / "asm" / "game"
ORDER = ROOT / "game_order.txt"

HEADER = """.include "macro.inc"

.set noat
.set noreorder

.section .text, "ax"

"""


def main() -> int:
    text = SRC.read_text()
    lines = text.splitlines(keepends=True)

    # find the start line of each "nonmatching" block (splat emits one per function)
    starts = []
    for i, line in enumerate(lines):
        if line.startswith("nonmatching "):
            name = line.split()[1].rstrip(",")
            # address of first instruction following the glabel
            addr = None
            for j in range(i, min(i + 6, len(lines))):
                m = re.search(r"/\* [0-9A-F]+ ([0-9A-F]{8}) ", lines[j])
                if m:
                    addr = int(m.group(1), 16)
                    break
            # include a preceding "/* Handwritten function */" comment line
            k = i - 1 if i > 0 and "Handwritten" in lines[i - 1] else i
            starts.append((k, name, addr))

    if not starts:
        print("no functions found", file=sys.stderr)
        return 1

    # group: a function not 16-aligned joins the previous group
    groups = []
    for idx, (k, name, addr) in enumerate(starts):
        end = starts[idx + 1][0] if idx + 1 < len(starts) else len(lines)
        body = lines[k:end]
        if groups and (addr is None or addr % 16 != 0):
            groups[-1][1].extend(body)
        else:
            groups.append([name, list(body)])

    OUT.mkdir(parents=True, exist_ok=True)
    for old in OUT.glob("*.s"):
        old.unlink()
    for name, body in groups:
        (OUT / f"{name}.s").write_text(HEADER + "".join(body))
    ORDER.write_text("".join(f"{n}\n" for n, _ in groups))
    print(f"split {len(starts)} functions into {len(groups)} files")
    return 0


if __name__ == "__main__":
    sys.exit(main())
