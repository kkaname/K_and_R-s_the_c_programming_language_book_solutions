#include<stdio.h>

/* Exercise 1-4: Write a program to print the corresponding celsius to fahrenheit table. */

int main(void) {
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Celsius\t\tFahrenheit\n");
    printf("--------------------------\n");

    celcius = lower;
    while(celcius <= upper) {
        fahr = (9.0 / 5.0) * celcius - 32.0f;
        printf("%3.0f\t\t%6.2f\n", celcius, fahr);
        celcius += step;
    }

    return 0;
}
