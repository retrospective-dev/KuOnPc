# Working on the Kuon decompilation

**Starting a fresh session:** `bash tools/setup.sh`, then `bash tools/get_proto.sh`, then carry on
with the matching workflow below (`tools/m2c_batch.py --allow-float`, `tools/typefix.py`,
`tools/permute_batch.py`, and `tools/push_progress.sh "message"` to verify, update the README and push).

Read `SPEC.md` first: it has the goal (native PC port), the phases and the hard rules.
This file is the hands-on part: how to build, how to match, and what has been learned.

## Commits

All commits are credited to `retrospective-dev <retro.spectiveshared@gmail.com>`, with no
co-author or session-link trailers. `tools/setup.sh` turns on `tools/githooks/`, which enforces
both; in a checkout where setup hasn't run, use `git config core.hooksPath tools/githooks`.

## Setup and build

```
bash tools/setup.sh            # once: tools, compiler, split, first build
source .venv/bin/activate
make -j4                        # must print: OK: build matches retail SLES_534.11
make progress
```

`original/SLES_534.11` (sha1 `bd495fc0…`) must be present. Never commit `asm/`, `build/`,
ROM/ELF outputs or the compiler (see `.gitignore`).

## The August 2004 prototype

The US prototype dated 2 August 2004 (`SLUS_210.07`, from the "Kuon (Aug 2, 2004 prototype)"
disc image) is an unstripped debug build from the same compiler front end. Put the executable
in `disc/proto/SLUS_210.07` (git-ignored; never commit it). `tools/get_proto.sh` downloads it from
archive.org and runs every step below. By hand:

```
python3 tools/proto_match.py    # build/proto/map.txt: retail func_ -> original function name
python3 tools/proto_data.py     # build/proto/data_map.txt: retail D_ -> original global (+offset)
python3 tools/dwarf1.py disc/proto/SLUS_210.07    # build/proto/dwarf/<file>.c.txt: per-file dump
python3 tools/gen_types.py      # include/kuon_types.h + m2c context (types, prototypes, globals, locals)
```

What it gives: 2,725 of 2,909 retail functions named, their original source files (209, under
`C:\cs4\Seimei\`), 2,503 typed signatures, 560 distinct struct/union/enum layouts with field
names, typed globals and each function's locals with their registers. CodeWarrior recorded no
typedef names, so `gen_types.py` names each struct after the variables that use it.

`tools/m2c_batch.py` uses all of this automatically when `build/m2c/proto_*.h|txt|json` exist.
When decompiling by hand, read the function's entry in `build/proto/dwarf/` first: it has the
real parameter and local names and types.

## Names

Functions and globals carry their original names from the prototype (`SetAniData`,
`MdlMng`...), applied with `tools/apply_names.py`; the names live in `symbol_addrs.txt`, so `make split`
names the asm after them. Functions the prototype doesn't cover keep splat's `func_XXXXXXXX` and
data `D_XXXXXXXX`. Static functions whose name is used in more than one file have the address appended
(`_SendPacketByDma_001C4D90`). Struct types whose usage-derived name equals a function or global name
get a `_t` suffix (`MdlMng_t` is the type of the global `MdlMng`). `build/proto/renames.txt` lists every
old -> new name.

## Matching workflow

1. `python3 tools/todo.py --bucket tiny` lists the easiest unmatched integer functions.
2. Try the automatic tools first:
   - `python3 tools/autogen_tiny.py`: templates for 2-4 instruction getters/setters.
   - `python3 tools/m2c_batch.py --bucket small`: drafts each function with m2c, keeps exact
     matches only. `--gather` rebuilds the callee signature context (`build/m2c/ctx.h`); do it
     after a big batch, since new matches give better signatures.
3. By hand: write `src/game/<func>.c`, then `python3 tools/diff.py <func>` (side-by-side, exit 0 on
   match). Draft with `python3 -m m2c.main -t mipsee-mwcc-c --valid-syntax --context build/m2c/ctx.h asm/game/<func>.s`.
4. Near-misses go to `src/wip/<func>.c` with a comment saying what differs. Don't stall.
5. `make` must print OK before committing.

## File conventions

- One function per file in `src/game/`, named after the function. `#include "common.h"` first.
- Unknown structs: a per-function `typedef struct { ... } Unk_<addr>;` with offset comments and
  `unkXX` fields, padding as `u8 unkXX[size]`.
- `include/m2c_macros.h` (`M2C_FIELD(ptr, type *, offset)`) is allowed in phase 1 for accesses the
  batch tool couldn't turn into structs (nested pointers). Phase 3 replaces them.
- **No data in C yet.** Data is owned by `asm/data/*.s`; reference it with `extern` and the splat
  name (`D_00XXXXXX`). `tools/check_obj.py` fails the build if an object emits data, so string
  literals, float constants and `switch` jump tables can't be written in C yet.
- Callees are declared with a prototype at the top of the file, named `func_00XXXXXX`.

## Compiler facts (CodeWarrior PS2 3.0b52, `-O4,p`)

- Register moves are `daddu rd, rs, $zero`; m2c reads them as 64-bit, but parameters are `s32`.
- m2c names parameters by register and omits unused ones (`void f(void *arg1)` really takes two
  arguments). `tools/m2c_batch.py` refills the gaps.
- m2c loses the argument setup in the delay slot of a `j` tail call
  (`j func; addiu $a0, $a0, 0x48`). Write those by hand: `func(arg0 + 0x48, ...)`.
- 32-bit float constants stored through integer registers (`lui 0x3F80; sw`) decompile as plain
  integer stores and still match; turn them into float stores in phase 2/3.
- `lq`/`sq` pairs are 128-bit copies (16-byte structs or `u128`); not yet supported by the tools.

## Open matching problems

- `src/wip/`: functions matched under the old 3.0.3 + emulation setup that don't match with
  3.0b52 `-O4,p`; redo them (the batch tools retry them automatically).

### Compiler identified: CodeWarrior PS2 3.0b52, `-O4,p`

The build uses `mwcps2-3.0b52-030722` with `-O4,p` (optimise for speed). That combination
reproduces the original compiler's branch-target padding (8-byte-aligned block starts) and its
delay-slot filling natively. For a long time the project used 3.0.3 with `-O4` plus an emulation
pass for both; the flags came from the Mulberry project (github.com/weirdbeardgame/Mulberry),
which decompiles the US prototype with the same compiler.
