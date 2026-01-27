#include <stdio.h>

// program located at the page 16

int main(void) {
    int c;

    c = getchar();
    while(c != EOF) {
        putchar(c);
        c = getchar();
    }

    return 0;
}
