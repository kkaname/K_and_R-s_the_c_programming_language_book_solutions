#include <stdio.h>

int main(void) {
    int num_blank, num_tab, num_newline, c;

    num_blank = num_tab = num_newline = 0;

    while((c = getchar()) != EOF) {
        if(c == '\n') {
            ++num_newline;
        }

        if(c == '\t') {
            ++num_tab;
        }

        if(c == ' ') {
            ++num_blank;
        }
    }

    printf("\nnumber of blank lines:%d\nnumber of tabs:%d\nnumber of newlines:%d\n", num_blank, num_tab, num_newline);

    return 0;
}
