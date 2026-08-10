#include <stdio.h>

int main()
{
    char str[200];
    int i;
    int space = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

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
