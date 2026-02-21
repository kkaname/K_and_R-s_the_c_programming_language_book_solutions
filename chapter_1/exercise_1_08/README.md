# Exercise 1-8: Count Blanks, Tabs, and Newlines

**Source:** *The C Programming Language* (K&R), Chapter 1

## Problem

Write a program to count blanks, tabs, and newlines from standard input.

## Usage

### Compile

```sh
gcc -o count_b_t_n count_b_t_n.c
```

### Run

```sh
./count_b_t_n
```

Type or pipe text into the program. Press `Ctrl+D` (EOF) to see the results.

### Example

```sh
echo -e "hello world\thow\nare you" | ./count_b_t_n
```

Expected output:

```
number of blanks: 2
number of tabs: 1
number of newlines: 2
```

## How It Works

The program reads characters one at a time from standard input using `getchar()`. Each character is checked against blank (` `), tab (`\t`), and newline (`\n`), incrementing the respective counter. When EOF is reached, the totals are printed.
