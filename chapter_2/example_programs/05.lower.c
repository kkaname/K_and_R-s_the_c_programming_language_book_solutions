#include <stdio.h>

/*
 * Converts uppercase character to lowercase.
 */

int lower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    else {
        return c;
    }
}

int main(void) {
    char c = 'B';
    printf("%c\n", lower(c));

    return 0;
}
