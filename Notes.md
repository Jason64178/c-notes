## Basics: how the compiler works?
- Main function doesn't need to return 0 (default return 0)
- header file have already been compiled, only need to compile the code we wrote, they generate a `.obj` file for each `.cpp` file
- link combine the `.obj` file to a `.exe` file
- compile:
    1. each `.cpp` file corresponding translation unit, translateion unit -> `.obj` file. Not necessary that each `.cpp` file has one translation unit.
    2. Preprocessing: deal with the `#include`, `#define`, `#if` `#endif`, `pragma once` etc. 
    2.1. `#include` read the include file, and paste to your file
    2.1. `#define` in preprocessing, just copy and paste
    2.2. `#if` and `#endif` evaluate whether to skip etc.
    3. `.obj` file: binary file, cpu will execute this
    4. compiler optimization: optimize when translate to machine code
## Basics: how the link works?