#!/usr/bin/env bash
# Fetch the Aug 2004 US prototype's executable and regenerate everything derived from it:
# function/data name maps, the per-file debug dumps, include/kuon_types.h and the m2c context.
# The prototype is never committed (disc/ is git-ignored). Needs ~6 GB free while extracting.
set -euo pipefail
cd "$(dirname "$0")/.."
PY=.venv/bin/python
mkdir -p disc/proto
if [ ! -f disc/proto/SLUS_210.07 ]; then
  echo "== downloading the prototype disc image (815 MB)"
  curl -sSfL -o disc/proto/proto.7z \
    "https://archive.org/download/KuonAug22004prototype/Kuon%20(Aug%202%2C%202004%20prototype).7z"
  (cd disc/proto && 7z x -y proto.7z >/dev/null && rm proto.7z \
    && 7z x -y "PS2 - Kuon Alpha Preview.bin" SLUS_210.07 >/dev/null \
    && rm -f "PS2 - Kuon Alpha Preview.bin" "PS2 - Kuon Alpha Preview.cue")
fi
echo "7124b436f61ebbe5944e4b50b7d4c04475711c11  disc/proto/SLUS_210.07" | sha1sum -c
$PY tools/proto_match.py
$PY tools/proto_data.py
$PY tools/dwarf1.py disc/proto/SLUS_210.07
$PY tools/gen_types.py
