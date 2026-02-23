#include <stdio.h>

/*
 * program that return the length of a string
 */

//can't use the name strlen() cause its a standard function name in string.h
int str_len(char *s) {
    int i;
    i = 0;
    while (s[i] != '\0') {
        ++i;
    }
    return i;
}

int main(void) {
    char s[] = "Hello, World!";
    int len = str_len(s);
    printf("Length of string: %d\n", len);

    return 0;
}
