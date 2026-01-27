#include <stdio.h>

/*
 * Example program from page 25
 * program to calculate power of a number
 */

int power(int base, int exponent);

int main(void) {
    int base, exponent;
    base = 5;
    exponent = 3;
    int result = power(base, exponent);
    printf("Result: %d\n", result);

    return 0;
}

int power(int base, int exponent) {
    int result = 1;
    while(exponent != 0) {
        result *= base;
        --exponent;
    }
    return result;
}
