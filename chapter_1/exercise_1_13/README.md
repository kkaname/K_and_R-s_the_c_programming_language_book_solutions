# Exercise 1-13: Word Length Histogram

Solution to Exercise 1-13 from *The C Programming Language* (K&R).

**Question:** Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. 

This program reads input from standard input and prints a histogram
of word lengths.

Two histograms are displayed:
1. Horizontal histogram
2. Vertical histogram

A word is defined as a sequence of characters separated by:
- Space (' ')
- Tab ('\t')
- Newline ('\n')

## How It Works

- Each word length is counted.
- The frequency of each word length is stored in an integer array.
- The maximum word length and maximum frequency are tracked
  to properly format the vertical histogram.

## Build and Run:

```sh
gcc -o word_length_histogram word_length_histogram.c
./word_length_histogram
```
Type or pipe text into the program. Press Ctrl+D (EOF) to see the result.

## Example
```
hello world from C programming
```

## Expected output:
```
Horizontal Histogram:
---------------------
1: #
2:
3: 
4: #
5: ##
6: 
7:
8:
9:
10: 
11: #

Vertical Histogram:
-------------------


                  #
  #           #   #                       #
-------------------------------------------
  1   2   3   4   5   6   7   8   9   10 11
```
