#include <stdio.h>

double num1 = 0.0;
double num2 = 0.0;
double result = 0.0;
char operator;

/* printf("Sum: %.2f\n", first + second);
 printf("Difference: %.2f\n", first - second);
 printf("Product: %.2f\n", first * second);
 printf("Quotient: %.2f\n", first / second); */

double berakna()
{
    printf("First number: ");
    scanf("%lf", &num1);

    printf("Operator ( +, - , * , / ): ");
    scanf(" %c", &operator);

    printf("Second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
        break;

    case '-':
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
        break;

    case '*':
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
        break;

    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;

    default:
        printf("Error: '%c' is not a valid math operator.\n", operator);
    }
    return result;
}

int main(void)
{
    berakna();
    return 0;
}