#include <stdio.h>

int main(void) {
    int c;
    int last_c = 0;

    while ((c = getchar()) != EOF) {
        if (!(c == ' ' && last_c == ' ')) {
            putchar(c);
        }

        last_c = c;    // save current character to detect consecutive spaces
    }

    return 0;
}
