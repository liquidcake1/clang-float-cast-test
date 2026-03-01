#!/bin/sh
echo "$CC"
"$CC" --version
"$CC" -nostdlib -std=c++23 --target=wasm32 -DWASM=1 -Wl,--export-all -Wl,--no-entry test.cpp -o test.wasm
"$CC" -o test -lstdc++ main.cpp

echo
echo "In WASM:"
node test.js

echo
echo "In x86_64:"
./test
