#include <stdio.h>

int main()
{
    int num1, num2;
    int position;
    int n;
    int i;
    int bit1, bit2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the starting bit position: ");
    scanf("%d", &position);

    printf("Enter the number of bits to swap: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        /* Get the bit from the first number */
        bit1 = (num1 >> (position + i)) & 1;

        /* Get the bit from the second number */
        bit2 = (num2 >> (position + i)) & 1;

        /* If the bits are different, toggle both bits */
        if (bit1 != bit2)
        {
            num1 = num1 ^ (1 << (position + i));
            num2 = num2 ^ (1 << (position + i));
        }
    }

    printf("First number after swapping: %d\n", num1);
    printf("Second number after swapping: %d\n", num2);

    return 0;
}
