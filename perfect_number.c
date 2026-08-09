#include <stdio.h>

int isPerfect(int number)
{
    int i;
    int sum = 0;

    for (i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    int result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = isPerfect(number);

    if (result == 1)
    {
        printf("%d is a perfect number.\n", number);
    }
    else
    {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}
