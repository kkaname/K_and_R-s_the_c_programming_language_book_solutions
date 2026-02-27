# Exercise 1-22: Fold Long Lines

Solution to Exercise 1-22 from *The C Programming Language* (K&R).

**Question:** Write a program to "fold" long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column, break after the specified column.

The program folds long input lines at a configurable breakpoint (default 40 columns). Lines are broken with a hyphen and newline when no whitespace is found near the break column. Press `Ctrl+D` (EOF) to finish input.

## Build & Run

### Compile:
```sh
gcc -o fold_lines fold_lines.c
```

### Run:
```sh
./fold_lines
```
