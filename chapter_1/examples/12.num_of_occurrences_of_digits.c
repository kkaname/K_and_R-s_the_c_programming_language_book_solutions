#include <stdio.h>

/*
 * Example problem from page 22
 * program to count digits, white space, others
 */

int main(void) {
    int ndigits[10];
    int c, i, nwhite, nother;

    nwhite = nother = 0;
    for (i = 0; i < 10; i++) {
        ndigits[i] = 0;
    }

    while((c = getchar()) != EOF) {
        if (c >= '0' && c <= 9) {
            ndigits[c - '0']++;
        }
        else if (c == ' ') {
            nwhite++;
        }
        else {
            nother++;
        }
    }
    printf("digits: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", ndigits[i]);
    }
    printf("\nwhite space: %d\nother: %d\n", nwhite, nother);

    return 0;
}
