#!/usr/bin/env python3
"""Set up a decomp-permuter directory for one function.

usage: tools/permute_setup.py func_XXXXXXXX [draft.c]
       then: python3 tools/permuter_src/permuter.py build/permute/func_XXXXXXXX -j4

The draft defaults to src/wip/<func>.c, then build/m2c/best/<func>.c. The compile script
runs MWCC and tools/mwcc_pad.py with the padding rule named in the draft, so scores
match tools/diff.py. Get the permuter with:
    git clone https://github.com/simonlindholm/decomp-permuter tools/permuter_src
"""
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
MWCC = ROOT / "tools" / "compilers" / "mwcps2-3.0.3-020716" / "mwccps2.exe"


def main():
    name = sys.argv[1]
    if len(sys.argv) > 2:
        draft = Path(sys.argv[2])
    else:
        draft = next(p for p in (ROOT / "src" / "wip" / f"{name}.c",
                                 ROOT / "build" / "m2c" / "best" / f"{name}.c") if p.exists())
    text = draft.read_text()
    m = re.search(r"/\* mwcc_pad: ([\w ]+?) \*/", text)
    rule = m[1] if m else "b"
    d = ROOT / "build" / "permute" / name
    d.mkdir(parents=True, exist_ok=True)
    # the permuter parses plain C: expand includes
    pre = subprocess.run(["cpp", "-P", "-nostdinc", f"-I{ROOT / 'include'}", str(draft)],
                         capture_output=True, text=True, check=True).stdout
    (d / "base.c").write_text(pre)
    (d / "pad_rule.c").write_text(f"/* mwcc_pad: {rule} */\n")
    asm = (ROOT / "asm" / "game" / f"{name}.s").read_text()
    (d / "target.s").write_text(asm)
    subprocess.run(["mips-linux-gnu-as", "-EL", "-march=r5900", "-mabi=eabi", "-G0", "-no-pad-sections",
                    "-I", str(ROOT / "include"), "-o", str(d / "target.o"), str(d / "target.s")], check=True)
    sh = d / "compile.sh"
    sh.write_text(f"""#!/bin/bash
# invoked as: compile.sh input.c -o output.o
set -e
{ROOT}/tools/wibo {MWCC} -c -O4 -relax_pointers -nostdinc -I{ROOT}/include "$1" -o "$3"
{sys.executable} {ROOT}/tools/mwcc_pad.py "$3" "$3" {d}/pad_rule.c
""")
    sh.chmod(0o755)
    (d / "settings.toml").write_text(f'func_name = "{name}"\ncompiler_type = "mwcc"\n')
    print(d)


if __name__ == "__main__":
    main()
