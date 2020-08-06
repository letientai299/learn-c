- `make` runs each line in a subshell, use `&&` or `\` to concat lines.
- `$$x` to let the shell do the expansion.
- `fc`, fix commands, can be helpful to convert recent shell history to a
  scripts.
- `test` and `[ ... ]` are somewhat equivalent, `[ ]` is like a syntax sugar
  for `test`.
