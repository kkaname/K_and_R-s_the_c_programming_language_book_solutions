#include <stdio.h>

/*
 * Example program in the page 49
 * program that returns n bits field of x that begins at position p
 */

unsigned get_bits(unsigned x, int p, int n) {
    return (x >> (p + 1 - n)) && ~(~0 << n);
}

int main(void) {
    int x = 0b10101010;
    int y = get_bits(x, 2, 4);
    printf("Bits from position 2 to 4: %d\n", y);
    return 0;
}
