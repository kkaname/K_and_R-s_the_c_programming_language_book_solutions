# Exercise 1-5: Reverse-Order Temperature Table

Solution to Exercise 1-5 from *The C Programming Language* (K&R).

The exercise asks to modify the temperature conversion program to print the table in reverse order, from 300 degrees down to 0.

## How It Works

The program prints a Celsius-to-Fahrenheit table in descending order (300 → 0, step 20) using the formula:

```
F = (9/5) × C + 32
```

The reversal is achieved by initializing the loop variable to the upper bound and decrementing each iteration.

### Sample Output

```
Celsius		Fahrenheit
--------------------------
300		 572.00
280		 536.00
260		 500.00
...
 20		  68.00
  0		  32.00
```

## Build & Run

```sh
gcc -o reverse_order_temp reverse_order_temp.c
./reverse_order_temp
```
