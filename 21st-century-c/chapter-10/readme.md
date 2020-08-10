- C won't zero out local variable, so we must define their value before first
  read.

  ```c
  int main() {
  int n = 5, arr[n];
  for (int i = 0; i < n; ++i) { printf("%d ", arr[i]); }
  }
  ```

- Sparse array literal:

  ```c
  int list[4] = {[2]=2,3}; // {0, 0, 2, 3}
  ```

- `struct` vs `typedef struct`: https://stackoverflow.com/a/1675446

- [C has four different name spaces for identifiers](https://stackoverflow.com/a/3793976):
  - Label names (the goto type).
  - Tags (names of structures, unions and enumerations).
  - Members of structures and unions (these have a separate namespace per structure/union).
  - All other identifiers (function names, object names, type(def) names, enumeration constants, etc).
