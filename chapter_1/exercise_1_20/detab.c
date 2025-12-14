#include <stdio.h>

/* Exercise 1.20: Write a program detab that replaces tabs in the input with the proper number of blanks
 * to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
 * Should n be a variable or a symbolic parameter. */

#define TAB_WIDTH 8

int main(void) {
    int c, current_col, tab_stop;
    unsigned int no_spaces;

    tab_stop = 1;
    current_col = 0;
    while((c = getchar()) != EOF) {
        if (c == '\t') {
            no_spaces = TAB_WIDTH - (current_col % TAB_WIDTH);
            while(no_spaces){
                putchar(' ');
                --no_spaces;
                ++current_col;
            }

        }
        else {
            putchar(c);
            ++current_col;
            if (c == '\n'){
                ++current_col;
            }
        }
    }
    
    return 0;
}
