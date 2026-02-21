# Exercise 1-4: Celsius–Fahrenheit Table

Solution to Exercise 1-4 from *The C Programming Language* (K&R).

The exercise asks to write a program that prints a Celsius-to-Fahrenheit conversion table (the reverse of the earlier Fahrenheit-to-Celsius program).

## How It Works

The program prints a two-column table converting Celsius (0–300, step 20) to Fahrenheit using the formula:

```
F = (9/5) × C + 32
```

A header row and separator line are printed before the table for readability.

### Sample Output

```
Celsius		Fahrenheit
--------------------------
  0		  32.00
 20		  68.00
 40		 104.00
...
300		 572.00
```

## Build & Run

```sh
gcc -o celcius_fahrenheit celcius_fahrenheit.c
./celcius_fahrenheit
```
