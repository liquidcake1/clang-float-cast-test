I think this is https://github.com/llvm/llvm-project/issues/157797

The issue there points out that the standard says the conversion is undefined behaviour. I guess that's technically fair but it doesn't mean it has to be nonsensical. Standard link from above ticket: https://timsong-cpp.github.io/cppwp/n4950/conv.fpint#1.sentence-3

```
$ CC=clang-19 sh script.sh 
clang-19
Debian clang version 19.1.7 (3+b1)
Target: x86_64-pc-linux-gnu
Thread model: posix
InstalledDir: /usr/lib/llvm-19/bin

In WASM:
As float 49416559919104
Float cast to i32 0
Float cast to i64 49416559919104n
Float cast to i32 cast to i64 0n
Float cast to i64 cast to i32 -1333788672

In x86_64:
As float 4.94166e+13
Float cast to i32 2961178624
Float cast to i64 49416559919104
Float cast to i32 cast to i64 2961178624
Float cast to i64 cast to i32 2961178624
```

```
$ CC=clang-21 sh script.sh 
clang-21
Debian clang version 21.1.8 (3+b1)
Target: x86_64-pc-linux-gnu
Thread model: posix
InstalledDir: /usr/lib/llvm-21/bin

In WASM:
As float 49416559919104
Float cast to i32 -1
Float cast to i64 49416559919104n
Float cast to i32 cast to i64 4294967295n
Float cast to i64 cast to i32 -1333788672

In x86_64:
As float 4.94166e+13
Float cast to i32 2961178624
Float cast to i64 49416559919104
Float cast to i32 cast to i64 2961178624
Float cast to i64 cast to i32 2961178624
```
