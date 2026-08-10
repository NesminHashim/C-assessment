#include <stdio.h>

int main()
{
    char str[100];
    char temp;
    int i;
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    /* Find the length of the string */
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    /* Reverse the string */
    for (i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
