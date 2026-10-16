#!/usr/bin/env python3
"""Write build/SLES_534.11: the rebuilt code image wrapped in the retail ELF headers.

The linker's ELF has a different header layout from the retail one, so the bootable
executable is made by replacing the retail file's loadable segment with build/SLES_534.11.rom.
"""
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


def main() -> int:
    orig = (ROOT / "original" / "SLES_534.11").read_bytes()
    rom = (ROOT / "build" / "SLES_534.11.rom").read_bytes()
    # first program header: p_offset, p_filesz
    phoff = struct.unpack_from("<I", orig, 0x1C)[0]
    offset, filesz = struct.unpack_from("<I", orig, phoff + 4)[0], struct.unpack_from("<I", orig, phoff + 16)[0]
    if len(rom) != filesz:
        print(f"rebuilt image is {len(rom):#x} bytes, retail segment is {filesz:#x}", file=sys.stderr)
        return 1
    out = orig[:offset] + rom + orig[offset + filesz:]
    (ROOT / "build" / "SLES_534.11").write_bytes(out)
    print("wrote build/SLES_534.11")
    return 0


if __name__ == "__main__":
    sys.exit(main())
