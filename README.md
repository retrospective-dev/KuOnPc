# Kuon decompilation

A matching decompilation of **Kuon** (FromSoftware, 2004, PlayStation 2), targeting the
PAL release **SLES-53411 v1.01**. The long-term goal is a native PC port.

This repo contains **no game code or data**. You need your own disc.

## Status

| | |
|---|---|
| Build | Rebuilds `SLES_534.11` byte-for-byte from source + disassembly |
| Compiler | Metrowerks CodeWarrior PS2 3.0.x, `-O4`, identified and verified |
| Game functions | 433 / 2,909 matched in C (14.9% of functions, 0.7% of code bytes: the trivial ones so far) |

Run `make progress` for current numbers.

### What's in the executable

| Region | Address | Contents |
|---|---|---|
| crt0 + SDK + runtime | `0x100000`-`0x12E4B0` | Sony PS2 SDK 2.8.0 (libgraph, libdma, libpad, libcdvd, libmc, libsdr, libipu, libvu0), Metrowerks MSL C runtime |
| **Game code** | `0x12E4B0`-`0x221410` | ~2,900 FromSoftware functions, ~970 KB |
| VU1 microcode | `0x221410`-`0x229920` | 25 VIF MPG uploads: the custom VU1 renderer |
| Kernel patch | `0x229920`-`0x22AE50` | SDK kernel-mode code |
| Data | `0x22AE50`-`0x25E300` | data / rodata / sdata |
| BSS | `0x25E300`-`0xA6AA00` | ~8 MB |

IOP modules loaded from disc include FromSoftware's own sound drivers (`fssd.irx`,
`fssdivag.irx`, `fssdsyth.irx`, `fsmfstrm.irx`). Movies are PSS. Textures are TM2 and `.tex`.

## Setup (Linux or WSL)

1. Copy `SLES_534.11` from your PAL disc into `original/`
   (sha1 `bd495fc0bb5b905b2459ac2441622d19c33bad42`).
2. `bash tools/setup.sh`

That installs MIPS binutils and splat, downloads `wibo` and the CodeWarrior compiler,
splits the executable, builds it, and checks it matches.

### GitHub Actions

`.github/workflows/build.yml` runs the same steps on every push and pull request
(and on demand from the Actions tab). The job fails if the rebuilt image doesn't match
retail. The bootable `SLES_534.11`, the linker ELF and map, and `docs/functions.csv` are
uploaded as the `kuon-build` artifact, and the progress numbers show up in the run summary.

### Testing the output

`make` writes `build/SLES_534.11`: the rebuilt code inside the retail executable's ELF
headers. While the build matches, it is identical to the file on the disc.

- **PCSX2:** System → Start File, pick `build/SLES_534.11` (or the one from the
  `kuon-build` artifact). The game reads its data from the disc, so keep your Kuon ISO
  loaded: set it under Settings → Game List or System → Start Disc first.
- **Replace it in the ISO:** swap `SLES_534.11` in a copy of your ISO with an ISO editor
  (e.g. ImgBurn / UltraISO) and boot the ISO as usual.

## Working on it

```
source .venv/bin/activate                # once per shell
python3 tools/todo.py --bucket tiny      # easiest unmatched functions
python3 tools/diff.py func_0014A670      # compile + byte-diff one function
make                                     # full rebuild, must print OK
make progress
```

See `CLAUDE.md` for the matching rules learned so far and the agent workflow.

## Layout

```
kuon.yaml            splat config (segments, compiler)
Makefile
include/common.h     shared types
src/game/            matched functions, one per file (linked into the build)
src/wip/             near-misses, not linked
tools/diff.py        per-function compile/link/byte-compare
tools/todo.py        work queue
tools/inventory.py   docs/functions.csv (size, float/VU0 use, string hints)
tools/split_game.py  per-function asm split
tools/gen_ld.py      linker script choosing C over asm per function
```

## Road to a PC port

1. Decompile game logic (integer code first, then FPU, then VU0 macro code).
2. Name things: recover structs for the big globals, module boundaries (`SfxMng.c` etc.).
3. Move data ownership from asm into C (strings, tables, floats).
4. Replace the platform layer: GS/VIF/VU1 rendering → modern renderer,
   libpad → SDL input, CD/IOP file I/O → filesystem, FromSoftware sound IRX → PC audio.
5. Build for x86-64 with a modern compiler once the code no longer depends on PS2 hardware.
