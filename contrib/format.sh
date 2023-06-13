#!/usr/bin/env bash

find src \
  \( -name '*.[ch]pp' -or -name '*.[ch]' \) \
  -print0 | \
  nix run nixpkgs#parallel -- -0 clang-format --style=file -i

#   -exec clang-format --style=file -i {} \;
