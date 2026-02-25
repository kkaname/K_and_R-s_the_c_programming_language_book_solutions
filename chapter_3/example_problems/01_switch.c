#include <stdio.h>

/*
 * Example program under section 3.4
 * Program to demonstrate switch statement using in counting the occurrences of each digit white space, and all other characters.
 */

int main(void) {
    int c;
    int nwhite, nother, ndigit[10];

    nwhite = nother = 0;

    for (int i = 0; i < 10; i++) {
        ndigit[i] = 0;
    }

    while((c = getchar()) != EOF) {
        switch (c) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                ++ndigit[c - '0'];
                break;
            case ' ':case '\t': case '\n':
                ++nwhite;
                break;
            default:
                ++nother;
                break;
        }
    }

    printf("\nNumber of other characters: %d and number of white spaces: %d.\n", nother, nwhite);
    printf("number of digits: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", ndigit[i]);
    }
    printf("\n");

    return 0;
}
