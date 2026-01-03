# CI Notes for Modern C++ Examples

- Use CMake with `-DCMAKE_CXX_STANDARD=23` on recent toolchains (GCC 12+/Clang 14+/MSVC 19.3+).
- Run compiler with sanitizers in CI for correctness checks: `-fsanitize=address,undefined` (GCC/Clang).
- Use `ccache` and enable `-O2` for performance runs; run a subset of examples with `-Wall -Wextra`.
- For coroutines, ensure the standard library supports coroutines (libc++/libstdc++ recent versions) or use compiler flags.
