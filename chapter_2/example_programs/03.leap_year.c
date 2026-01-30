#include <stdio.h>

/*
 * Example program in the page 41
 * program that checks if a year is a leap year
 */

int main(void) {
    int year = 2024;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    }
    else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
