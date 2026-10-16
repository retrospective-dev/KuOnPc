#!/usr/bin/env bash
# One-time setup. Run from the repo root on Linux or WSL (Ubuntu/Debian).
# Requires your own PAL disc's SLES_534.11 at original/SLES_534.11.
set -euo pipefail
cd "$(dirname "$0")/.."

EXPECTED_SHA1="bd495fc0bb5b905b2459ac2441622d19c33bad42"

if [ ! -f original/SLES_534.11 ]; then
  echo "Put SLES_534.11 from your Kuon PAL disc in original/ first." >&2
  exit 1
fi
actual=$(sha1sum original/SLES_534.11 | cut -d' ' -f1)
if [ "$actual" != "$EXPECTED_SHA1" ]; then
  echo "SLES_534.11 sha1 is $actual, expected $EXPECTED_SHA1 (PAL SLES-53411 v1.01)." >&2
  exit 1
fi

echo "== system packages"
if command -v apt-get >/dev/null; then
  sudo apt-get install -y binutils-mips-linux-gnu python3-pip make
fi

echo "== python packages (local .venv)"
if command -v apt-get >/dev/null; then sudo apt-get install -y python3-venv; fi
python3 -m venv .venv
.venv/bin/pip install -q --upgrade pip setuptools wheel
.venv/bin/pip install -q "splat64[mips]==0.50.1" "spimdisasm==1.42.4"

echo "== wibo (runs the Windows compiler on Linux)"
mkdir -p tools/compilers
if [ ! -x tools/wibo ]; then
  curl -sSL -o tools/wibo https://github.com/decompals/wibo/releases/download/0.7.0/wibo
  chmod +x tools/wibo
fi

echo "== Metrowerks CodeWarrior PS2 compiler (via decomp.me's archive)"
MW=mwcps2-3.0.3-020716
if [ ! -f tools/compilers/$MW/mwccps2.exe ]; then
  mkdir -p tools/compilers/$MW
  curl -sSL https://github.com/decompme/compilers/releases/download/compilers/$MW.tar.gz \
    | tar xz -C tools/compilers/$MW
fi

echo "== extract code image + split into asm/"
make setup
make split

echo "== first build (must report OK)"
make
python3 tools/inventory.py
python3 tools/progress.py
