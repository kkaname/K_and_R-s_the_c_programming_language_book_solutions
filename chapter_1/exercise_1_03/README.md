# Exercise 1-3: Fahrenheit–Celsius Table with Heading

Solution to Exercise 1-3 from *The C Programming Language* (K&R).

The exercise asks to modify the Fahrenheit-to-Celsius conversion program to print a heading above the table.

## How It Works

The program prints a two-column table converting Fahrenheit (0–300, step 20) to Celsius using the formula:

```
C = (5/9) × (F − 32)
```

A header row and separator line are printed before the table for readability.

### Sample Output

```
Fahrenheit	Celsius
-----------------------
  0		-17.78
 20		 -6.67
 40		  4.44
...
300		148.89
```

## Build & Run

```sh
gcc -o fahrenheit_celsius fahrenheit_celcius.c
./fahrenheit_celsius
```
