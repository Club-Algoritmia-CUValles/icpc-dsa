#!/bin/bash
# Fixes /usr/local/include/bits/stdc++.h (GNU header) for Apple clang/libc++.
# Its contents are wrapped in `#if _GLIBCXX_HOSTED`, a macro only GCC headers
# define, so clang skips the entire file (cin/cout undeclared in all editors).
# This makes _GLIBCXX_HOSTED defined before the guard, for every toolchain.
set -euo pipefail

F=/usr/local/include/bits/stdc++.h
[ -f "$F" ] || { echo "not found: $F"; exit 1; }

if grep -q "_GLIBCXX_HOSTED" "$F" && ! grep -q "define _GLIBCXX_HOSTED" "$F"; then
  echo "patching $F ..."
  sudo cp "$F" "$F.bak"
  printf '#ifndef _GLIBCXX_HOSTED\n#define _GLIBCXX_HOSTED 1\n#endif\n' | sudo tee "$F.patched" >/dev/null
  sudo cat "$F" | sudo tee -a "$F.patched" >/dev/null
  sudo mv "$F.patched" "$F"
  echo "patched (backup at $F.bak)"
else
  echo "already patched, nothing to do"
fi
