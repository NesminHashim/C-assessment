#include <stdio.h>

int main()
{
    char str[200];
    int i = 0;
    int space = 0;

    printf("Enter a sentence: ");

    /* Read characters including spaces */
    while (i < 199)
    {
        scanf("%c", &str[i]);

        if (str[i] == '\n')
        {
            break;
        }

        i++;
    }

    str[i] = '\0';

    /* Remove extra spaces */
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            printf("%c", str[i]);
            space = 0;
        }
        else
        {
            if (space == 0)
            {
                printf(" ");
                space = 1;
            }
        }
    }

    return 0;
}
