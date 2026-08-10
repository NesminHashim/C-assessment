#include <stdio.h>

int main()
{
    int num1, num2;
    int position;
    int n;
    int i;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the starting bit position: ");
    scanf("%d", &position);

    printf("Enter the number of bits to replace: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        /* Clear the bit in num1 */
        num1 = num1 & ~(1 << (position + i));

        /* Check the corresponding bit in num2 */
        if (num2 & (1 << i))
        {
            /* Set the bit in num1 */
            num1 = num1 | (1 << (position + i));
        }
    }

    printf("Number after replacing bits: %d\n", num1);

    return 0;
}
