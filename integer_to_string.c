#include <stdio.h>

int main()
{
    int number;
    int i = 0;
    int digit;
    int negative = 0;
    char str[20];

    printf("Enter an integer: ");
    scanf("%d", &number);

    /* Check if number is negative */
    if (number < 0)
    {
        negative = 1;
        number = -number;
    }

    /* Convert digits into characters */
    while (number > 0)
    {
        digit = number % 10;
        str[i] = digit + '0';
        i++;
        number = number / 10;
    }

    str[i] = '\0';

    /* Print negative sign first */
    if (negative == 1)
    {
        printf("The string is: -");
    }
    else
    {
        printf("The string is: ");
    }

    /* Print digits in reverse order */
    for (i = i - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
