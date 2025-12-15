#include <stdio.h>
#include <limits.h>

/* Exercise 2.8: Write a function rightrot(x, n) that returns the value
 * of the integer x rotated to the right by n bit positions.
 */

void to_binary(unsigned short n){
	int i = 0, binary[32];
	printf("0b");

	if(n == 0){
		printf("0\n");
		return;
	}


	while(i < sizeof(unsigned short) * CHAR_BIT) {
		binary[i++] = n%2;
		n = n/2;
	}
	for(int j = i-1; j >= 0; j--){
		printf("%d", binary[j]);
	}
	printf("\n");
 }

unsigned short rightrot(unsigned short x, int n) {
    unsigned w = sizeof(unsigned short) * CHAR_BIT;
    n %= w;

    return (x >> n) | (x << (w - n));
}

int main(void) {
    unsigned short x;
    x = 55;

    printf("x = %d -->", x);
    to_binary(x);

    to_binary(rightrot(x, 3));

    return 0;
}
