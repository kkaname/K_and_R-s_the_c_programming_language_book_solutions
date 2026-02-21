# Exercise 1-9: Replace Multiple Blanks with a Single Blank

Solution to Exercise 1-8 from *The C Programming Language* (K&R).

## Problem

Write a program to copy its input to its output, replacing each string of one or more blanks with a single blank.

## How It Works

The program reads input one character at a time using getchar(). It keeps track of the previous character and only prints the current character if it is not part of a consecutive space sequence.
If the current character and the previous character are both spaces, the character is skipped. This ensures that multiple consecutive blanks are replaced by a single blank.

### Sample Output

```
Hello world from C
```

## Build & Run

```sh
gcc -o copy_io copy_io.c
./copy_io
```
Type or pipe text into the program. Press Ctrl+D (EOF) to finish input.
