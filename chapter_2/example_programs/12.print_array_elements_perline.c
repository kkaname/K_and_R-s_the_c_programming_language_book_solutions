#include <stdio.h>

/*
 * program to print 10 array elements per line
 */

int main(void) {
    int arr[50];
    for (int i = 0; i < 50; i++) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 50; i++) {
        printf("%3d%c", arr[i], (i % 10 == 9)? '\n' : ' ');
    }
    return 0;
}
