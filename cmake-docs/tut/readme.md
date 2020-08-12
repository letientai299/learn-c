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
  - [ ] Specify the C++ Standard
  - [ ] Build and Test
- [ ] Adding a Library (Step 2)
- [ ] Adding Usage Requirements for Library (Step 3)
- [ ] Installing and Testing (Step 4)
  - [ ] Install Rules
  - [ ] Testing Support
- [ ] Adding System Introspection (Step 5)
  - [ ] Specify Compile Definition
- [ ] Adding a Custom Command and Generated File (Step 6)
- [ ] Building an Installer (Step 7)
- [ ] Adding Support for a Dashboard (Step 8)
- [ ] Mixing Static and Shared (Step 9)
- [ ] Adding Generator Expressions (Step 10)
- [ ] Adding Export Configuration (Step 11)
- [ ] Packaging Debug and Release (Step 12)
