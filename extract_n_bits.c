#include <stdio.h>

int main()
{
    int number;
    int position;
    int n;
    int result = 0;
    int i;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the starting bit position: ");
    scanf("%d", &position);

    printf("Enter the number of bits to extract: ");
    scanf("%d", &n);

    /* Extract n bits */
    for (i = 0; i < n; i++)
    {
        if (number & (1 << (position + i)))
        {
            result = result | (1 << i);
        }
    }

    printf("Extracted value: %d\n", result);

    return 0;
}
