/*
 * Simple Calculator Program
 * Performs basic arithmetic operations: +, -, *, /, %, ^ (power)
 * Each operator is implemented in its own file for better organization
 */

#include <stdio.h>
#include <stdlib.h>
#include "operators.h"

// Main function - entry point of the program
int main()
{
    // Variable declarations
    double num1, num2, result; // num1, num2: operands; result: operation result
    char operator;             // Stores the operator chosen by user

    printf("=== Simple Calculator ===\n\n");

    // Get first number from user
    printf("Enter first number: ");
    scanf("%lf", &num1);

    // Get operator from user
    printf("Enter operator (+, -, *, /, %%, ^): ");
    scanf(" %c", &operator);

    // Get second number from user
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform operation based on operator
    switch (operator)
    {
    case '+':
        // Addition operation
        result = add(num1, num2);
        printf("\nResult: %.2f + %.2f = %.2f\n", num1, num2, result);
        break;
    case '-':
        // Subtraction operation
        result = subtract(num1, num2);
        printf("\nResult: %.2f - %.2f = %.2f\n", num1, num2, result);
        break;
    case '*':
        // Multiplication operation
        result = multiply(num1, num2);
        printf("\nResult: %.2f * %.2f = %.2f\n", num1, num2, result);
        break;
    case '/':
        // Division operation with zero-check
        result = divide(num1, num2);
        if (num2 != 0)
        {
            printf("\nResult: %.2f / %.2f = %.2f\n", num1, num2, result);
        }
        break;
    case '%':
        // Modulo operation with zero-check
        result = modulo_op(num1, num2);
        if ((int)num2 != 0)
        {
            printf("\nResult: %d %% %d = %d\n", (int)num1, (int)num2, (int)result);
        }
        break;
    case '^':
        // Power operation (exponential)
        result = power(num1, num2);
        printf("\nResult: %.2f ^ %.2f = %.2f\n", num1, num2, result);
        break;
    default:
        // Invalid operator
        printf("\nError: Invalid operator! Please use +, -, *, /, %%, or ^\n");
    }

    return 0; // Exit program successfully
}
