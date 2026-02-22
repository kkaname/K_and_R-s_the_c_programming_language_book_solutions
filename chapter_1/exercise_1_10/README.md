# Exercise 1-10: Character Replacement

Solution to Exercise 1-10 from *The C Programming Language* (K&R).

**Question:** Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way. 

It copies its input to its output while making certain characters visible:

- Tab character (`\t`) is replaced with the two-character sequence: \t
- Backspace character (`\b`) is replaced with the two-character sequence: \b
- Backslash (`\`) is replaced with: \\

## How It Works

The program reads input one character at a time using `getchar()`.

For each character:
- If it matches a special character (tab, backspace, backslash),
  it prints the corresponding visible escape sequence.
- Otherwise, it prints the character unchanged.

The program continues until EOF (Ctrl+D on Unix/Linux, Ctrl+Z on Windows).

### Sample Output

```
Hello\tWorld\\
```

## Build & Run

```sh
gcc -o copy_io_replace_esc_char copy_io_replace_esc_charV.c
./copy_io_replace_esc_char
```
