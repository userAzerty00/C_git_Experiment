# Simple Calculator

A basic command-line calculator written in C that performs simple arithmetic operations.

## Features
- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/) with zero-check

## Building

Using Makefile:
```bash
make              # Compile the program
make run          # Compile and run
make clean        # Remove compiled binary
```

Or directly with gcc:
```bash
gcc -Wall -Wextra -o calculator calculator.c
```

## Usage

Run the program:
```bash
./calculator
```

Follow the prompts:
1. Enter the first number
2. Enter an operator (+, -, *, /)
3. Enter the second number

The program will display the result.

## Example

```
=== Simple Calculator ===

Enter first number: 10
Enter operator (+, -, *, /): +
Enter second number: 5

Result: 10.00 + 5.00 = 15.00
```
