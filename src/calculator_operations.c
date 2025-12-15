#include <stdio.h>
#include <math.h>
#include "../include/calculator.h"
float add(float num1, float num2)
{
    return num1 + num2;
}
float subtract(float num1, float num2)
{
    return num1 - num2;
}
float multiply(float num1, float num2)
{
    return num1 * num2;
}
float divide(float num1, float num2)
{
    if (num2 == 0)
    {
        printf("\n*** ERROR: Division by Zero is not Allowed. ***\n");
        return 0;
    }
    return num1 / num2;
}
float sine_val(float num)
{
    return sin(num);
}
float cosine_val(float num)
{
    return cos(num);
}
float log10_val(float num)
{
    if (num <= 0)
    {
        printf("\n*** ERROR: Logarithm Input must be Greater than Zero. ***\n");
        return 0;
    }
    return log10(num);
}
float square_root(float num)
{
    if (num < 0)
    {
        printf("\n*** ERROR: Cannot Calculate Square Root of a Negative Number. ***\n");
        return 0;
    }
    return sqrt(num);
}