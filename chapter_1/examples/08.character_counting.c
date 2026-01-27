#include <stdio.h>

// program located at the page 19

int main(void) {
    long count;
    count = 0;

    while (getchar() != EOF) {
        ++count;
    }
    printf("%ld\n", count);

    return 0;
}
