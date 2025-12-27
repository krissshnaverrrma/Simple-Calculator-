#include <stdio.h>
#include <stdlib.h>
#include "../include/calculator.h"
void display_menu()
{
    printf("\n============================\n");
    printf("  C SIMPLE CALCULATOR\n");
    printf("============================\n");
    printf("  + : Addition | - : Subtraction\n");
    printf("  * : Multiply | / : Division\n");
    printf("--- Unary Functions (One Argument) ---\n");
    printf("  S : Sine (sin)   | C : Cosine (cos)\n");
    printf("  L : Log (log10)  | R : Square Root (sqrt)\n");
    printf("  Q : Quit\n");
    printf("----------------------------\n");
    printf("Enter your Choice: ");
}
int main()
{
    char operator;
    float num1, num2, result;
    while (1)
    {
        display_menu();
        if (scanf(" %c", &operator) != 1)
        {
            break;
        }
        if (operator >= 'a' && operator <= 'z')
        {
            operator = operator - 32;
        }
        if (operator == 'Q')
        {
            printf("\nExiting Calculator. Goodbye!\n");
            break;
        }
        if (operator == 'S' || operator == 'C' || operator == 'L' || operator == 'R')
        {
            printf("Enter the Number: ");
            while (getchar() != '\n')
                ;
            scanf("%f", &num1);
            switch (operator)
            {
            case 'S':
                result = sine_val(num1);
                printf("Result: sin(%.2f) = %.4f\n", num1, result);
                break;
            case 'C':
                result = cosine_val(num1);
                printf("Result: cos(%.2f) = %.4f\n", num1, result);
                break;
            case 'L':
                result = log10_val(num1);
                if (num1 > 0)
                {
                    printf("Result: log10(%.2f) = %.4f\n", num1, result);
                }
                break;
            case 'R':
                result = square_root(num1);
                if (num1 >= 0)
                {
                    printf("Result: sqrt(%.2f) = %.4f\n", num1, result);
                }
                break;
            }
        }
        else if (operator == '+' || operator == '-' || operator == '*' || operator == '/')
        {
            printf("Enter First Number: ");
            while (getchar() != '\n')
                ;
            scanf("%f", &num1);
            printf("Enter Second Number: ");
            while (getchar() != '\n')
                ;
            scanf("%f", &num2);
            switch (operator)
            {
            case '+':
                result = add(num1, num2);
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case '-':
                result = subtract(num1, num2);
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case '*':
                result = multiply(num1, num2);
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case '/':
                result = divide(num1, num2);
                if (num2 != 0)
                {
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;
            }
        }
        else
        {
            printf("\n*** Invalid Operator! Please try again. ***\n");
        }
    }
    return 0;

}
