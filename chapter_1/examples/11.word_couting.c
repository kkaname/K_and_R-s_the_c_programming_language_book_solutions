#include <stdio.h>

// program located at the page 20

#define IN 1
#define OUT 0

int main(void) {
    int c, word_count, state;
    word_count = 0;
    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }
        else if (state == OUT) {
            ++word_count;
            state = IN;
        }
    }
    printf("\nNumber of words: %d\n", word_count);

    return 0;
}
