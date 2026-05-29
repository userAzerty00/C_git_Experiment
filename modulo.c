#include "operators.h"
#include <stdio.h>

// Modulo operation with zero-check
double modulo_op(double num1, double num2)
{
    if ((int)num2 == 0)
    {
        printf("Error: Modulo by zero!\n");
        return 0;
    }
    return (int)num1 % (int)num2;
}
