# Exercise 1-23: Remove Comments

Solution to Exercise 1-23 from *The C Programming Language* (K&R).

**Question:** Write a program to remove all comments from a C program. Don't forget to handle quoted strings and character constants properly. C comments do not nest.

The program reads C source code from standard input and removes both single-line (`//`) and multi-line (`/* */`) comments, outputting the comment-free code. Press `Ctrl+D` (EOF) to see the result.

## Build & Run

### Compile:
```sh
gcc -o remove_comments remove_comments.c
```

### Run:
```sh
./remove_comments
```
