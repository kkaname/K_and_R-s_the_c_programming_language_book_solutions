#include <stdio.h>

/*
 * Program that prints "Hello, World!" using string concatenation
 */

int main(void) {
    printf("Hello, " "World!\n");
    // this is equivalent to printf("Hello, "World!\n"); --> which prints
    // Hello, World!
    return 0;
}
