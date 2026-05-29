#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("=== Simple Calculator ===\n\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("\nResult: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nResult: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nResult: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("\nError: Division by zero!\n");
            } else {
                result = num1 / num2;
                printf("\nResult: %.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;
        default:
            printf("\nError: Invalid operator! Please use +, -, *, or /\n");
    }

    return 0;
}
