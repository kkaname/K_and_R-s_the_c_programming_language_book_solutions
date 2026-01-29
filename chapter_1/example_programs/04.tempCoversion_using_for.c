#include <stdio.h>

// program located at page 13

/*
 * print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300
 * using for loop
 */

int main() {
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
        printf("%3d %6.2f\n", fahr, (5.0/9.0) * (fahr - 32));
    }

    return 0;
}
