#!/usr/bin/env python3
"""Fail if a decompiled C object emits its own data.

Data is still owned by asm/data/*.s, so a C file must reference existing D_xxxxxxxx
symbols via `extern` instead of defining literals/tables (strings, float constants,
switch jump tables). If MWCC emits non-empty .data/.rodata/.sdata etc., the linker
would drop it and the build would silently misbehave, so stop here instead.
"""
import subprocess
import sys

BAD = (".data", ".rodata", ".sdata", ".sdata2", ".sbss", ".bss", ".lit4", ".lit8")

obj = sys.argv[1]
out = subprocess.run(["readelf", "-S", "-W", obj], capture_output=True, text=True).stdout
problems = []
for line in out.splitlines():
    parts = line.replace("[ ", "[").split()
    if len(parts) > 6 and parts[1] in BAD and int(parts[5], 16) > 0:
        problems.append(f"{parts[1]} (0x{parts[5]} bytes)")
if problems:
    print(f"{obj}: emits data sections: {', '.join(problems)}", file=sys.stderr)
    print("  -> reference the existing D_ symbol with `extern` instead.", file=sys.stderr)
    sys.exit(1)
