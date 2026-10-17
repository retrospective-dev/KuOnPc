# Working on the Kuon decompilation

Read `SPEC.md` first: it has the goal (native PC port), the phases and the hard rules.
This file is the hands-on part: how to build, how to match, and what has been learned.

## Setup and build

```
bash tools/setup.sh            # once: tools, compiler, split, first build
source .venv/bin/activate
make -j4                        # must print: OK: build matches retail SLES_534.11
make progress
```

`original/SLES_534.11` (sha1 `bd495fc0…`) must be present. Never commit `asm/`, `build/`,
ROM/ELF outputs or the compiler (see `.gitignore`).

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

## Compiler facts (CodeWarrior PS2 3.0.x, `-O4`)

- Register moves are `daddu rd, rs, $zero`; m2c reads them as 64-bit, but parameters are `s32`.
- m2c names parameters by register and omits unused ones (`void f(void *arg1)` really takes two
  arguments). `tools/m2c_batch.py` refills the gaps.
- m2c loses the argument setup in the delay slot of a `j` tail call
  (`j func; addiu $a0, $a0, 0x48`). Write those by hand: `func(arg0 + 0x48, ...)`.
- 32-bit float constants stored through integer registers (`lui 0x3F80; sw`) decompile as plain
  integer stores and still match; turn them into float stores in phase 2/3.
- `lq`/`sq` pairs are 128-bit copies (16-byte structs or `u128`); not yet supported by the tools.

## Open matching problems

- `src/wip/func_00150830.c`: `x == 10 || x == 11` returning 1/0. CW emits branch-to-branch
  (`beq` to a `b` with `li v0,1` in the delay slot); none of the obvious forms reproduce it,
  with or without padding.

### Branch-target `nop` padding: solved by emulation

Kuon's CodeWarrior aligns basic-block starts to 8 bytes: a branch target that code also falls
through into gets a `nop` before it when it would sit at 4 mod 8. None of the CodeWarrior PS2
releases we have (2.4-001213, 3.0b52, 3.0.1b74, 3.0.3) do this, so `tools/mwcc_pad.py` emulates
it after compiling: disassemble the object with spimdisasm, insert the nops, reassemble.
The Makefile and `tools/diff.py` run it on every C object (`KUON_NOPAD=1` turns it off in diff.py).

Not padded (measured over all retail labels):
- labels right after a branch/jump delay slot (no fall-through);
- joins of a value-producing `?:`. In the asm: a `b` to the label whose delay slot writes the
  same register as the last instruction before the label (or `$v0`/`$f0` when that arm ends in
  a call). By default only unconditional `b` counts. When the default value is set in a
  conditional branch's delay slot (`c ? x : 0`), put `/* mwcc_pad: any */` in the C file;
  `/* mwcc_pad: off */` turns padding off for a file. `tools/m2c_batch.py` tries all three.
- compiler-internal labels in idioms like unsigned-to-float conversion and signed division by a
  power of two (not handled yet; ~130 labels).
