# KuOnPC: project spec

Owner: Dwizzi (Streetbrights). Audience: Claude Code agents working in this repo.
Read this together with `CLAUDE.md`, which has the hands-on matching rules.

## 1. Wanted outcome

A **native PC port of Kuon** (FromSoftware, 2004, PS2), built from a full decompilation of the
PAL release (SLES-53411 v1.01). It runs on Windows (Linux is a bonus) without an emulator, plays
the whole game start to finish exactly as the original, and adds modern PC quality-of-life.

The player supplies their own disc. The port ships **no game code, assets or Sony/FromSoftware
files**, only our source and tools.

### Port features (defaults, owner may change)

| Feature | Target |
|---|---|
| Platforms | Windows 10/11 x64 (primary), Linux x64 (secondary) |
| Resolution | Any, including 4K; internal render scale setting |
| Aspect | Native 16:9 / 21:9, with correct FOV and HUD placement; 4:3 option |
| Frame rate | 60 fps minimum, gameplay speed identical to original (PAL logic is 50 Hz: decouple sim from render) |
| Input | XInput/SDL controllers, keyboard + mouse, rebindable |
| Display | Windowed / borderless / fullscreen, V-sync toggle |
| Audio | Original music/SFX/voice, volume sliders |
| Saves | Memory card replaced by save files in the user folder |
| Movies | Original PSS cutscenes play in-game |
| Languages | All languages on the PAL disc (EN/FR/DE) |
| Fidelity | Faithful by default; any enhancement is optional and off-able |

### Non-goals

- No new content, rebalancing or story changes.
- No NTSC/JP support until the PAL port is finished (can be added later as extra build targets).
- Not an emulator or a static recompilation (PS2Recomp etc.). The port is built from real C source.

## 2. Hard rules

1. **Never commit copyrighted material**: the ELF, disc files, `asm/`, ROM/ELF build outputs,
   extracted assets, or the compiler. `.gitignore` enforces this; don't weaken it.
2. **Until phase 4 is done, `make` must print `OK: build matches retail SLES_534.11`** on every
   commit. A matching build is the proof the C is correct. No "close enough" code in `src/game/`.
3. Assets are read at runtime from the user's own disc image or extracted files, never bundled.
4. Every phase ends with its exit criteria below, met and written into the progress log (section 6).

## 3. Phases

### Phase 0: Foundation ✅ done

- splat config, per-function split, matching rebuild, compiler identified
  (CodeWarrior PS2 3.0.x, `-O4`), per-function diff tool, work queue, function inventory.
- 433 / 2,909 game functions matched (the trivial ones).

### Phase 1: Integer game code

Decompile every game function that uses no FPU or VU0 instructions
(`tools/todo.py` default filter, roughly 1,900 functions).

- Work easiest-first: `tiny`, then `small`, `medium`, `large`.
- Near-misses go to `src/wip/` with a note; don't stall on one function.
- Extend `tools/autogen_tiny.py` when a new repeated pattern shows up.
- **Exit:** all non-float functions matched or in `src/wip/` with notes; `make` OK.

### Phase 2: Floating-point and VU0 code

The ~880 FPU functions and 47 VU0 functions.

- Work out how VU0 macro-mode code was written (inline asm macros vs. compiler intrinsics) and
  record the answer in `CLAUDE.md` before doing them in bulk.
- Float constants live in data until phase 3: reference them via `extern`.
- **Exit:** 100% of game functions in C (wip allowed only with a written reason); `make` OK.

### Phase 3: Understanding (names, structs, files, data)

Turn matching C into readable C.

- Recover the big global structs (`D_006B90D0` etc.) and object types (player, enemies, rooms,
  items, cameras, particles). Put them in `include/`.
- Name functions and globals in `symbol_addrs.txt` (use debug strings such as `InitMovie`,
  `MsgFileMng_Alloc`, `SfxMng_InitSystem`; see `docs/functions.csv`).
- Group functions back into source files (`SfxMng.c`, `PtclMng.c` are known) and move data
  (strings, tables, float constants) out of `asm/data/` into C.
- Document subsystems in `docs/` (one page each: file I/O, rendering, sound, scripting/events,
  UI/menus, save system).
- **Exit:** no `func_`/`D_` names in core gameplay code; data owned by C; `make` OK.

### Phase 4: Full matching decompilation

- SDK and MSL runtime (`asm/sdk.s`): identify every library function (match against Sony SDK
  2.8.0 / MSL signatures), name them, and list them in `docs/sdk_functions.md`. Hand-decompiling them
  isn't required; they get replaced in phase 5.
- **Exit:** the game builds from C + SDK stubs/asm, still byte-identical. **Tag `decomp-1.0`.**

### Phase 5: Platform layer (the port)

Add a `pc/` build that compiles the same game C with a modern compiler (Clang/MSVC, x64),
with PS2 hardware replaced by a platform layer. The matching PS2 build must keep working.

| PS2 piece | PC replacement |
|---|---|
| GS / GIF / VIF / DMA, VU1 microcode (25 programs at `0x221410`) | Renderer on SDL3 + Vulkan or D3D11 (pick one, document why). Re-implement each VU1 program's maths in C/shaders |
| VU0 macro code | Plain C/SIMD maths |
| libpad | SDL3 gamepad + keyboard/mouse |
| libcdvd / IOP file I/O | Host filesystem reading the user's ISO or extracted files |
| FromSoftware sound IRX (`fssd*.irx`, `fsmfstrm.irx`), libsd | Re-implemented mixer reading the original sound formats, output via SDL3 audio |
| libmc (memory card) | Save files in the user folder (same data layout) |
| libipu / PSS movies | Software MPEG-2 decode (e.g. pl_mpeg / FFmpeg) |
| 32-bit PS2 pointers / alignment | 64-bit-clean structs, fixed-size types |

- Keep platform code behind a small interface (`pc/platform/*.h`) so game code changes stay minimal.
- **Exit:** boots to the title screen, loads a new game, and is playable through the first chapter
  on Windows.

### Phase 6: Port features and polish

Everything in the table in section 1: widescreen/FOV/HUD, 60 fps with original game speed,
resolution scaling, input rebinding, settings menu, all three languages.

- **Exit:** full playthrough of every ending with no blockers; settings persist.

### Phase 7: Release

- Asset extractor/launcher: user points it at their PAL ISO, it verifies the hash and extracts
  what the port needs.
- README for players, build instructions, licence for our code, clear "own your copy" notice.
- **Exit:** a fresh Windows machine goes from ISO to playing in under 5 minutes using the docs.

## 4. Acceptance tests (run before calling a phase done)

- `make` → `OK: build matches retail SLES_534.11` (phases 0-4, and the PS2 target forever after).
- `make progress` numbers recorded in the progress log.
- Port phases: a scripted smoke test (boot → title → new game → first save) plus a manual
  playthrough checklist in `docs/playtest.md`.

## 5. How agents should work

- One function, or one small topic, per commit. Commit message says what matched.
- Before a big change (new tool, layout change, renderer choice), write the plan in
  `docs/decisions.md` and keep going unless it's irreversible.
- When you learn a new compiler or matching rule, add it to `CLAUDE.md` straight away.
- Prefer improving tools (autogen patterns, diff, permuter setup) over hand-grinding the same
  shape 50 times.
- Stop and ask the owner before anything that can't be undone or that changes this spec's goals.

## 6. Progress log

| Date | Phase | Functions matched | Notes |
|---|---|---|---|
| 2026-10-16 | 0 | 433 / 2,909 | Matching build, compiler pinned (CW 3.0.x -O4), tools in place |

## 7. Open questions for the owner

- Renderer API: Vulkan (cross-platform) or D3D11 (Windows-first)? Default: Vulkan via SDL3.
- Enhancements beyond the table (texture packs, shadows, higher-poly models): wanted later or never?
- Public repo once phase 4 is done, or private until release?
