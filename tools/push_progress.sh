#!/bin/bash
# Verify the build, refresh the README progress numbers, commit new matches and push main.
# usage: tools/push_progress.sh "commit message"
set -e
cd "$(dirname "$0")/.."
out=$(make -j4 2>&1 || true); echo "$out" | grep -q "^OK: build matches retail" || { echo "build does not match; not pushing" >&2; exit 1; }
.venv/bin/python tools/update_readme.py
git add src/game README.md
git diff --cached --quiet && { echo "nothing to commit"; exit 0; }
git commit -q -m "$1"
git push -q origin main
git log --oneline -1
