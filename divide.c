#include "operators.h"
#include <stdio.h>

// Division operation with zero-check
double divide(double num1, double num2)
{
    if (num2 == 0)
    {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return num1 / num2;
}
