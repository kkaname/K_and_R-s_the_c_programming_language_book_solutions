# Exercise 1-24: Syntax Checker

Solution to Exercise 1-24 from *The C Programming Language* (K&R).

**Question:** Write a program to check a C program for rudimentary syntax errors like unbalanced parentheses, brackets and braces. Don't forget about quotes, both single and double, escape sequences, and comments.

The program reads C source code from standard input and checks for unbalanced parentheses, brackets, braces, quotes, and unclosed block comments. It skips characters inside quotes and comments to avoid false positives. Press `Ctrl+D` (EOF) to see the result.

## Build & Run

### Compile:
```sh
gcc -o check_syntax check_syntax.c
```

### Run:
```sh
./check_syntax
```
