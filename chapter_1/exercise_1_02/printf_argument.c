#include <stdio.h>

/* Exercise 1-2: Experiment to find out what happens when printf's argument string contains \c,
 * where c is some character not listed as part of the escape sequence. */

int main(void) {
    printf("hello, world\c");   /*prints-> warning: unknown escape sequence '\c' */

    return 0;
}
