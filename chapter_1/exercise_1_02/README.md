# Exercise 1-2: printf Escape Sequences

Solution to Exercise 1-2 from *The C Programming Language* (K&R).

The exercise asks what happens when `printf`'s argument string contains `\c`, where `c` is a character that is **not** a recognized escape sequence (e.g. `\n`, `\t`, `\\`).

The program uses `\c` inside a `printf` call. When compiled, GCC emits a warning:

```
warning: unknown escape sequence '\c'
```

The behavior of unrecognized escape sequences is undefined by the C standard — most compilers will either warn and ignore the backslash, or treat it as the literal character.

## Build & Run

```sh
gcc -o printf_argument printf_argument.c
./printf_argument
```
