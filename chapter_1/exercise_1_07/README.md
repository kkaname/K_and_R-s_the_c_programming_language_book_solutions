# Exercise 1-7: Print the Value of EOF

Solution to Exercise 1-7 from *The C Programming Language* (K&R).

The exercise asks to write a program that prints the value of `EOF`.

## How It Works

`EOF` is a macro defined in `<stdio.h>` that represents the end-of-file indicator. The program simply prints its integer value using `printf` with `%d`. On most systems, this value is `-1`.

### Sample Output

```
The value of EOF is -1
```

## Build & Run

```sh
gcc -o value_EOF value_EOF.c
./value_EOF
```
