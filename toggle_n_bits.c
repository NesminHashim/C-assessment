#include <stdio.h>

int main()
{
    int number;
    int position;
    int n;
    int i;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the starting bit position: ");
    scanf("%d", &position);

    printf("Enter the number of bits to toggle: ");
    scanf("%d", &n);

    /* Toggle n bits starting from the given position */
    for (i = 0; i < n; i++)
    {
        number = number ^ (1 << (position + i));
    }

    printf("Number after toggling: %d\n", number);

    return 0;
}
