<p align="center">
  <img src="https://i0.wp.com/www.kowabana.net/wp-content/uploads/2020/06/kuonrelease.jpg?fit=800%2C450&ssl=1" alt="Kuon" width="720">
</p>

<h1 align="center">KuOnPC</h1>

<p align="center">
  <b>A matching decompilation of FromSoftware's <i>Kuon</i> (2004, PlayStation 2), on the road to a native PC port.</b>
</p>

<p align="center">
  <a href="https://github.com/retrospective-dev/KuOnPc/actions/workflows/build.yml"><img src="https://github.com/retrospective-dev/KuOnPc/actions/workflows/build.yml/badge.svg?branch=main" alt="Build"></a>
  <img src="https://img.shields.io/badge/functions-845%20%2F%202%2C909-blue" alt="Functions matched">
  <img src="https://img.shields.io/badge/code-3.2%25-orange" alt="Code matched">
  <img src="https://img.shields.io/badge/target-PAL%20SLES--53411%20v1.01-lightgrey" alt="Target">
  <img src="https://img.shields.io/badge/phase-1%20of%207-yellow" alt="Phase">
</p>

---

## About

*Kuon* is FromSoftware's 2004 survival horror game set in Heian-era Japan, released only on the
PlayStation 2. This project rebuilds its executable from C source, byte for byte, as the
foundation for a native **Windows and Linux** version that runs without an emulator.

> [!IMPORTANT]
> This repository contains **no game code, assets or Sony/FromSoftware files**. You need your own
> copy of the PAL disc (SLES-53411) to build anything.

## Progress

Every matched function is compiled from C and checked against the retail executable on every
commit. If a single byte differs, the build fails.

| | Matched | |
|---|---|---|
| **All game functions** | 845 / 2,909 | `█████▊░░░░░░░░░░░░░░` 29.0% |
| **Game code (by size)** | 31 KB / 995 KB | `▋░░░░░░░░░░░░░░░░░░░` 3.2% |
| Integer functions (phase 1) | 845 / 2,024 | `████████▍░░░░░░░░░░░` 41.7% |
| Float / VU0 functions (phase 2) | 0 / 885 | `░░░░░░░░░░░░░░░░░░░░` 0.0% |

The small functions went first, so the share of code lags behind the function count. Run
`make progress` for live numbers.

## Roadmap

The full plan is in [`SPEC.md`](SPEC.md).

- [x] **Phase 0: Foundation.** Split, matching rebuild, compiler identified, tooling.
- [ ] **Phase 1: Integer game code.** Every function without floating point in C. *In progress.*
- [ ] **Phase 2: Floating-point and VU0 code.** The maths-heavy remainder.
- [ ] **Phase 3: Understanding.** Names, structs, source files, data moved into C.
- [ ] **Phase 4: Full matching decompilation.** SDK identified; tag `decomp-1.0`.
- [ ] **Phase 5: The port.** Renderer, input, audio, file I/O and saves on PC (SDL3).
- [ ] **Phase 6: PC features.** Widescreen, 60 fps, any resolution, rebinding, settings.
- [ ] **Phase 7: Release.** Asset extractor and player docs: ISO to playing in five minutes.

### Planned PC features

| | |
|---|---|
| **Display** | Any resolution up to 4K, 16:9 / 21:9 with correct FOV and HUD, 4:3 option, windowed / borderless / fullscreen |
| **Frame rate** | 60 fps or more with the original 50 Hz game speed |
| **Input** | XInput / SDL controllers, keyboard and mouse, rebindable |
| **Audio** | Original music, sound and voice, with volume sliders |
| **Saves** | Memory card replaced by save files in your user folder |
| **Languages** | English, French and German from the PAL disc |
| **Movies** | Original cutscenes, in game |

Everything defaults to the original experience; enhancements can be turned off.

## Building

Linux or WSL (Ubuntu/Debian).

1. Copy `SLES_534.11` from your PAL disc into `original/`
   (sha1 `bd495fc0bb5b905b2459ac2441622d19c33bad42`).
2. Run `bash tools/setup.sh`.

That installs MIPS binutils, splat and m2c, downloads `wibo` and the CodeWarrior compiler,
splits the executable, builds it and checks the result. Then:

```sh
source .venv/bin/activate   # once per shell
make -j4                    # must print: OK: build matches retail SLES_534.11
make progress
```

### GitHub Actions

[`build.yml`](.github/workflows/build.yml) builds and verifies every push and pull request, and
can be started by hand from the Actions tab. It publishes only the linker map and the function
list, never executables. CI uses `original/SLES_534.11` if present, otherwise it downloads the file
from the URL in the `KUON_ELF_URL` repository secret.

## Contributing

```sh
python3 tools/todo.py --bucket small     # easiest unmatched functions
python3 tools/diff.py func_0014A670      # compile one function and diff it against retail
python3 tools/m2c_batch.py --bucket tiny # draft functions automatically, keep exact matches
```

Matching rules, compiler quirks and the workflow are in [`CONTRIBUTING.md`](CONTRIBUTING.md). Design
decisions are logged in [`docs/decisions.md`](docs/decisions.md).

### Tooling

| Tool | What it does |
|---|---|
| `tools/diff.py` | Compiles one function, links it at its retail address and diffs the bytes |
| `tools/m2c_batch.py` | Drafts unmatched functions with m2c, cleans them up for CodeWarrior, keeps exact matches |
| `tools/typefix.py` | Searches integer types in near-miss drafts |
| `tools/permute_batch.py` | Runs [decomp-permuter](https://github.com/simonlindholm/decomp-permuter) on near misses |
| `tools/mwcc_pad.py` | Reproduces the original compiler's branch-target alignment (see `CONTRIBUTING.md`) |
| `tools/todo.py` | Work queue, easiest first |

## Technical notes

| | |
|---|---|
| **Target** | PAL `SLES_534.11` v1.01, Kuon (SLES-53411) |
| **Compiler** | Metrowerks CodeWarrior for PS2, front end "MW MIPS C Compiler 2.4.1.01", `-O4`. The exact build isn't available, so its branch-target padding is emulated |
| **SDK** | Sony PS2 SDK 2.8.0 |

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

### Layout

```
kuon.yaml            splat config (segments, compiler)
Makefile
include/             shared headers (common.h, m2c_macros.h)
src/game/            matched functions, one per file (linked into the build)
src/wip/             near misses, not linked
tools/               build, diff and matching tools
docs/                decisions log, function inventory (generated)
SPEC.md              project plan
CONTRIBUTING.md            matching rules and workflow
```

## Legal

*Kuon* is © FromSoftware. This is an unofficial fan project, not affiliated with or endorsed by
FromSoftware or Sony Interactive Entertainment. It distributes no copyrighted game code or assets;
building it requires your own legally obtained copy of the game. The header image is FromSoftware's
key art, shown by link.
