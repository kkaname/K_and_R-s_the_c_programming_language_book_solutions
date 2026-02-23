#include <stdio.h>

/*
 * program to find the maximum of two numbers using conditional expression
 */

int main(void) {
    int a = 10;
    int b = 29;
    int max = a > b? a : b;
    printf("max = %d\n", max);

    return 0;
}
