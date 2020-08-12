# CMake Tutorial notes

- Link: https://cmake.org/cmake/help/latest/guide/tutorial/index.html
- Versio: 3.18.1

## Content

- [ ] A Basic Starting Point (Step 1)
  - [x] Adding a Version Number and Configured Header File
    - Full version include `[<major>[.<minor>[.<patch>[.<tweak>]]]]`, all of
      them can be defined and generated similar to `MAJOR` and `MINOR` in this
      example.
    - Prefix before `_VERSION_MINOR` and `_VERSION_MARJOR` must be exact
      project name. Thus, the project name should not contains `@` (it's use by
      cmake to specify its variable).
  - [x] Specify the C++ Standard
  - [x] Build and Test
- [x] Adding a Library (Step 2)
- [x] Adding Usage Requirements for Library (Step 3)
- [x] Installing and Testing (Step 4)
  - [x] Install Rules
  - [x] Testing Support
    - A bit of automation test, but sadly, it's integration instead of unit
      test.
- [x] Adding System Introspection (Step 5)
  - This doesn't feel elegant since we the `tut_config.h` file (which is
    generated from `tut_config.h.in` and cmake) is not a dpendencies for both
    top level cmake project and the library (`math_funcs`).
  - [x] Specify Compile Definition
    - OK, this improves a bit over my above feeling. Now the `tut_config.h` is
      no longer needed for `math_funcs`.
- [x] Adding a Custom Command and Generated File (Step 6)
- [ ] Building an Installer (Step 7)
- [ ] Adding Support for a Dashboard (Step 8)
- [ ] Mixing Static and Shared (Step 9)
- [ ] Adding Generator Expressions (Step 10)
- [ ] Adding Export Configuration (Step 11)
- [ ] Packaging Debug and Release (Step 12)
