#include <stdio.h>

/*
 * program that removes the occurance of the character c from the string s
 */

void squeeze(char s[], int c) {
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int main(void) {
    char s[] = "Cool chris can cook.";
    int c = 'c';
    squeeze(s, c);
    printf("After funct: %s\n", s);
    return 0;
}
