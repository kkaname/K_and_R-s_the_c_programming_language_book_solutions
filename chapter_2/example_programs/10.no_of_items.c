#include <stdio.h>

/*
 * Example program in the page 52
 * program to display number of items
 */

int main(void) {
    int n;
    printf("Enter the number of items: ");
    scanf("%d", &n);
    printf("you have %d items%s.\n", n, (n == 1l)? "" : "s");
    return 0;
}
