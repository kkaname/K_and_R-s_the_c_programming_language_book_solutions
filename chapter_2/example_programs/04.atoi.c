#include <stdio.h>

/*
 * Converts a string of digits to an integer.
 */

int a_to_i(char *int_str) {
    int result = 0;
    for(int i = 0; int_str[i] >= '0' && int_str[i] <= '9'; ++i) {
        result = result * 10 + (int_str[i] - '0');
        ++i;
    }
    return result;
}

int main(void) {
    char int_str[] = "123456";
    printf("integer equivalent is %d\n", a_to_i(int_str));

    return 0;
}
