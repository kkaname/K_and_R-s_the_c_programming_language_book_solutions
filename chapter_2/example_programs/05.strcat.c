#include <stdio.h>

/*
 * Example program in the page 48
 * program that concatenates the string t to the end of string s
 */

//strcat name cannot be used as it is a reserved function name in C
void str_cat(char s[], char t[]) {
    int i, j;
    i = j = 0;
    while (s[i] != '\0') i++;   //to find the end of string s
    while ((s[i++] = t[j++]) != '\0');
}

int main(void) {
    char s[] = "Hello, ";
    char t[] = "World";
    str_cat(s, t);
    printf("%s\n", s);
    return 0;
}
