#include <stdio.h>

/*
 * Program that generates pseudo-random numbers using a linear congruential generator
 */

// global state(seed) for the generator
unsigned long int next = 1;

// returns pseudo-random number
int rand(void) {
    next = next * 1103515245 + 12345;
    return (unsigned int)(next / 65536) % 32768;
}

// this sets the seed for rand()
void srand(unsigned int seed) {
    next = seed;
}

int main(void) {
    srand(1);  /* fixed seed for reproducibility */
    // different seeds give different sequences of pseudo-random numbers

    for (int i = 1; i <= 10; i++) {
        printf("  rand() call %2d = %d\n", i, rand());
    }
    printf("\n");
}
