#include <stdio.h>

/* Exercise 5.3: Write a pointer version of the function strcat that
 * was shown in the chapter 2: strcat(s, t) copits the string t to the end of s.
 */

#define MAXLEN 1000

void str_cat(char *str1, char *str2) {
    int i, j;
    for (i = 0; str1[i] != '\0'; i++)
        ;
    str1[i++] = ' ';

    for (j = 0; str2[j] != '\0' && i + j < MAXLEN; j++) {
        str1[i++] = str2[j];
    }
    return;
}

int main(void) {
    char str1[MAXLEN] = "Hello world!";
    char str2[MAXLEN] = "My name is Kaname.";
    str_cat(str1, str2);

    printf("%s\n", str1);

    return 0;
}
