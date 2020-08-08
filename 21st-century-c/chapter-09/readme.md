- Using `asprintf` can cause mem-leak if we don't `free` the allocated
  strings.
- It's hard to deal with string in C, especially with Unicode strings.
