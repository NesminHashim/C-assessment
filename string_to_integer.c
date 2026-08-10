#include <stdio.h>

int main()
{
    char str[20];
    int i;
    int number = 0;

    printf("Enter a number: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        number = number * 10 + (str[i] - '0');
    }

    printf("The integer value is: %d\n", number);

    return 0;
}
