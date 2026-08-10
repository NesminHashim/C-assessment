#include <stdio.h>

int main()
{
    char str[100];
    int i;
    int length = 0;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    /* Find the length of the string */
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    /* Compare characters from both ends */
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    /* Display the result */
    if (palindrome == 1)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
