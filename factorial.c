#include <stdio.h>

int main()
{
    int number;
    int factorial = 1;
    int i;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        for (i = 1; i <= number; i++)
        {
            factorial = factorial * i;
        }

        printf("The factorial of %d is %d.\n", number, factorial);
    }

    return 0;
}
