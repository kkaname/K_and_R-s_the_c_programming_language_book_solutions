# Exercise 1-12: Word splitter

Solution to Exercise 1-12 from *The C Programming Language* (K&R).

**Question:** Write a program that prints its input one word per line. 

This program reads input from standard input and prints each word on a separate line.

A word is defined as a sequence of characters separated by:
- Space (' ')
- Tab ('\t')
- Newline ('\n')

The program uses a simple state machine approach to detect transitions
between words and whitespace.

## How It Works

Two states are used:

- IN  (1)  : Currently inside a word
- OUT (0)  : Currently outside a word

When whitespace is encountered after being in a word,
a newline is printed to separate words.

## Build and Run:

```sh
gcc -o word_splitter word_splitter.c
./word_splitter
```
Type or pipe text into the program. Press Ctrl+D (EOF) to see the result.

## Example
```
hello world from C
```

## Expected output:
```
hello
world 
from 
C
```
