#include <stdio.h>

void convertToBase(int number, int base)
{
    int remainder;
    int i = 0;
    int j;
    char result[100];

    while (number > 0)
    {
        remainder = number % base;

        if (remainder < 10)
        {
            result[i] = remainder + '0';
        }
        else
        {
            result[i] = remainder - 10 + 'A';
        }

        number = number / base;
        i++;
    }

    printf("Converted value: ");

    for (j = i - 1; j >= 0; j--)
    {
        printf("%c", result[j]);
    }

    printf("\n");
}

int main()
{
    int number;
    int base;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    printf("Enter the target base (2-16): ");
    scanf("%d", &base);

    if (base < 2 || base > 16)
    {
        printf("Invalid base. Please enter a base between 2 and 16.\n");
    }
    else
    {
        convertToBase(number, base);
    }

    return 0;
}
