# Exercise 1-6: Verify getchar() != EOF

Solution to Exercise 1-6 from *The C Programming Language* (K&R).

**Question:** Verify that the expression getchar() != EOF is 0 or 1.

The exercise asks to verify that the expression `getchar() != EOF` evaluates to `0` or `1`.

## How It Works

The program reads a single character from standard input and prints the result of the comparison `getchar() != EOF`:

- Entering any character → prints `1` (true)
- Signaling EOF (Ctrl+D on Linux) → prints `0` (false)

### Sample Usage

```
$ ./verify_expression
a
The expression getchar() != EOF gives: 1
```

```
$ ./verify_expression
<Ctrl+D>
The expression getchar() != EOF gives: 0
```

## Build & Run

```sh
gcc -o verify_expression verify_expression.c
./verify_expression
```
