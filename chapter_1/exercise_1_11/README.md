# Exercise 1-11: Word Counter

Solution to Exercise 1-11 from *The C Programming Language* (K&R).

**Question:** How would you test the word count program? What kinds of input are most likely to uncover bugs if there are any? 


A word is defined as a sequence of non-whitespace characters.
Whitespace characters considered:

Space (' ')

Tab ('\t')

Newline ('\n')

## How It Works

The program reads characters one at a time from standard input using getchar().

It maintains a state variable:
IN — currently inside a word
OUT — currently outside a word

When a non-whitespace character is encountered while in the OUT state, the word counter is incremented and the state changes to IN.
When a whitespace character (' ', '\t', '\n') is encountered, the state changes to OUT.
When EOF is reached, the total word count is printed.

## Build and Run:
'''
gcc -o word_count word_count.c
./word_count
'''
Type or pipe text into the program. Press Ctrl+D (EOF) to see the result.

## Example
'''
echo -e "hello   world\nhow are\tyou" | ./word_count
'''
## Expected output:
'''
Number of words: 5
'''
