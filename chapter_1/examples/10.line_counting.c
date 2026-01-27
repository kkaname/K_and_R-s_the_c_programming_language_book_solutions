#include <stdio.h>

// program located at the page 19

int main(void) {
    int c, nl;
    nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
    }

    return 0;
}
