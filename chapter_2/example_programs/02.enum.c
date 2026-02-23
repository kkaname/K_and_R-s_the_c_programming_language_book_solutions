#include <stdio.h>

/*
 * program that demonstrates the use of enum
 */

enum months {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int main(void)  {
    enum months current_month = FEB;
    printf("Current month is %d\n", current_month);

    return 0;
}
