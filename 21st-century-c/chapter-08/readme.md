- Side effect inside a macro should be kept to minimum:

  ```c
  #define max(a, b)   ((a) > (b) ? (a) : (b))
  ```

  `max(x, y++)` will cause trouble.

- Rules for macro:

  - Use parentheses
  - Avoid double usage of variables (see above example)
  - Use curly braces for multi line macro.

- Don't init (define) global variable/function in header, that will cause
  duplicated symbol error during linking. Each `*.c` file will become `*.o`
  file that contains exactly one content of its headers. `ifndef` or
  `pragma once` is just prevent the header content to be duplicated in **single file**.

- Can't use `sizeof` to find lenght of array param in function, either:

  - Pass the size.
  - Use `NULL` marker.

- On using `const`:

  - `const` notation reading rules: https://stackoverflow.com/a/1143272.
    TLDR: read it backward. But I'm not gonna remember these thing now, it's
    too crazy. Should have test when working with them.
  - Elements of `const` pointer to struct are not const.

- C99 add `restrict` to [hint the compiler](https://en.wikipedia.org/wiki/Restrict)
  that for the lifetime of the pointer, only the pointer itself or a value
  directly derived from it (such as pointer - 1. will be used to access the
  object to which it points. This aids optimization, but it's not ensured by
  compiler
