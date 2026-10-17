# Decisions

## 2026-10-16: CI build on GitHub Actions

`.github/workflows/build.yml` splits, builds and checks the sha1 on every push and PR. It uploads
only the linker map and `docs/functions.csv`; no executables, since they're Sony/FromSoftware code
(spec hard rule 1). The job needs the retail executable: it uses `original/SLES_534.11` if it's in
the checkout, otherwise it downloads it from the `KUON_ELF_URL` secret.

Open: `original/SLES_534.11` is currently committed, which breaks hard rule 1. Removing it needs the
owner to set up `KUON_ELF_URL` first, and purging it from history means rewriting history.

## 2026-10-16: m2c batch drafting for phase 1

Instead of hand-writing every small function, `tools/m2c_batch.py` runs m2c (CodeWarrior EE target)
on each unmatched function with a few option sets, rewrites field accesses into per-function
structs, and keeps only exact byte matches. A signature context built from m2c's reading of every
function gives callees the right argument counts. Functions it can't do stay on the hand list.
Matches that still use `M2C_FIELD` are cleaned up in phase 3.

## 2026-10-17: IOP modules from the disc

The owner supplied the disc's IOP modules (15 `.IRX` files and `IOPRP280.IMG`). They live in
`disc/irx/` (git-ignored, never committed). FromSoftware's own are `FSSD.IRX`, `FSSDIVAG.IRX`,
`FSSDSYTH.IRX` and `FSMFSTRM.IRX` (sound driver, voice/ADPCM, synth, streaming); the rest are
Sony's (`LIBSD`, `MCMAN`/`MCSERV`, `PADMAN`, `SIO2MAN`, `CDVDSTM`, `MODHSYN`/`MODMIDI`/`MODSEIN`,
`SDRDRV`). All are stripped (empty symbol tables), so they give no names. They're the reference
for reimplementing the sound system in phase 5.

## 2026-10-17: Compiler switched to 3.0b52 with -O4,p

The Mulberry project builds the US prototype with `mwcps2-3.0b52-030722 -O4,p`. Tested here: that
combination reproduces the retail branch-target padding and delay-slot filling natively, and
matches the three test cases the emulation struggled with. 836 of 867 existing matches still match;
the other 31 moved to `src/wip/` for redoing. `tools/mwcc_pad.py` and the `/* mwcc_pad: */`
directives are gone. Earlier tests had tried each compiler with `-O4` and each flag with 3.0.3,
but never 3.0b52 with `,p`.
