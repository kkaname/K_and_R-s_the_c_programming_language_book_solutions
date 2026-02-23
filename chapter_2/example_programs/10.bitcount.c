#include <stdio.h>

/*
 * Program that counts the number of bits set in an unsigned integer
 */

int bitcount(unsigned int x) {
    int count = 0;
    while(x) {
        if (x & 1) {
            count++;
        }
        x >>= 1;
    }
    return count;
}

int main(void) {
    int num = 30;
    int bit_count = bitcount(num);
    printf("Number of bits set in %d is %d\n", num, bit_count);
    return 0;
}
