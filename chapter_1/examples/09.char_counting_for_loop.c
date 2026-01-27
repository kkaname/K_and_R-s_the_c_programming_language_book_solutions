#include <stdio.h>

// program located at the page 18

int main (void) {
    double count;

    for (count = 0; getchar() != EOF; ++count)
        ;

    printf("%.0f\n", count);

    return 0;
}
