# Exercise 1-13: Character Frequency Histogram

Solution to Exercise 1-14 from *The C Programming Language* (K&R).

**Question:** Write a program to print a histogram of the frequencies of different characters in its input.

This program reads input from standard input and prints a horizontal
histogram showing the frequency of:

- Lowercase letters ('a'–'z')
- Digits ('0'–'9')
- All other characters (grouped as "others")

Each character category is displayed alongside a bar composed of '#'
symbols representing its frequency.

## How It Works

- A frequency array is defined with:
  - 26 slots for lowercase letters
  - 10 slots for digits
  - 1 slot for all other characters

- Each input character is categorized and counted.
- After EOF is reached, a histogram is printed.

## Build and Run:

```sh
gcc char_freq_histogram.c -o char_freq_histogram
Usage
./char_freq_histogram
```
Type or pipe text into the program. Press Ctrl+D (EOF) to see the result.

## Example
```
hello world from C
```

## Expected output:
```
Word Frequency Histogram:
-------------------------
d: #
e: #
f: #
h: #
l: ###
m: #
o: ###
r: ##
w: #
C: #
others:####
```
