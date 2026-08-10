#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    /* Check each character */
    for (i = 0; str[i] != '\0'; i++)
    {
        /* Check if the character is uppercase */
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("Lowercase string: %s\n", str);

    return 0;
}
