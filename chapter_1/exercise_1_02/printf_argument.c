#include<stdio.h>

/* Exercise 1-2: Experiment to find out what happens when printf's argument string contains \c, 
 * whre c is some character not listed in the escape sequence. */

int main(void) {
    printf("hello, world\c");   /*prints warning: unknown escape sequence '\c' */

    return 0;
}
