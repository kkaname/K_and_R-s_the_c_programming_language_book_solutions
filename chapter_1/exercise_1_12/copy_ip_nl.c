#include <stdio.h>

/* Exercise 1.12: Write a program that prints its input one word per line. */

#define IN 1
#define OUT 0

int main(void) {
    int c, state;

    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                putchar('\n');
            }
        }
        else {
            state = IN;
            putchar(c);
        }
    }

    return 0;
}
