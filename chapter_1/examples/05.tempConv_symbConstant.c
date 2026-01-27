#include <stdio.h>

// program located at page 15

/*
 * print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300
 * using for loop
 */

 #define LOWER 0
 #define UPPER 300
 #define STEP 20

int main(void) {
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d %6.2f\n", fahr, (5.0/9.0) * (fahr - 32));
    }

    return 0;
}
