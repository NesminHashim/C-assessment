#include <stdio.h>

int main()
{
    char str[200];
    int i;
    int alphabet[26] = {0};
    int pangram = 1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    /* Check each character */
    for (i = 0; str[i] != '\0'; i++)
    {
        /* Check for uppercase letters */
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            alphabet[str[i] - 'A'] = 1;
        }

        /* Check for lowercase letters */
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            alphabet[str[i] - 'a'] = 1;
        }
    }

    /* Check if all 26 letters are present */
    for (i = 0; i < 26; i++)
    {
        if (alphabet[i] == 0)
        {
            pangram = 0;
            break;
        }
    }

    /* Display the result */
    if (pangram == 1)
    {
        printf("The string is a pangram.\n");
    }
    else
    {
        printf("The string is not a pangram.\n");
    }

    return 0;
}
