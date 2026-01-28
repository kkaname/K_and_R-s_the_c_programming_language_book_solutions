#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[]);
void copy(char to[], char from[]);

int main(void) {
    int len, maxlen;
    char line[MAXLINE];
    char maxline[MAXLINE];

    maxlen = 0;
    while ((len = get_line(line)) > 0) {
        if (len > maxlen) {
            maxlen = len;
            copy(maxline, line);
        }
    }


    if (maxlen > 0) {
        printf("Max length: %d\n", maxlen);
        printf("MAX_LINE: %s\n", maxline);
    }

    return 0;
}

int get_line(char line[]) {
    int c, i;

    for (i = 0; ((i < MAXLINE - 1) && (c = getchar()) != EOF && (c != '\n')); i++) {
        line[i] = c;
    }
    line[i] = '\0';

    return i;
}

void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}
