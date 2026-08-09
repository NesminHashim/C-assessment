#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Error: Cannot divide by zero.\n");
        return 0;
    }

    return a / b;
}

float calculate(float a, float b, char operator)
{
    switch (operator)
    {
        case '+':
            return add(a, b);

        case '-':
            return subtract(a, b);

        case '*':
            return multiply(a, b);

        case '/':
            return divide(a, b);

        default:
            printf("Invalid operator.\n");
            return 0;
    }
}

int main()
{
    float num1;
    float num2;
    float result;
    char operator;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    result = calculate(num1, num2, operator);

    printf("Result = %.2f\n", result);

    return 0;
}
