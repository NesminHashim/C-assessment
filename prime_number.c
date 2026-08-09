#include <stdio.h>

int main()
{
    int number;
    int i;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 2)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
    {
        printf("The number is prime.\n");
    }
    else
    {
        printf("The number is not prime.\n");
    }

    return 0;
}
