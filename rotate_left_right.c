#include <stdio.h>

int main()
{
    int arr[100];
    int temp[100];
    int n, rotate;
    int direction;
    int i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &rotate);

    printf("Enter direction (1 for left, 2 for right): ");
    scanf("%d", &direction);

    /* Handle rotation values larger than array size */
    rotate = rotate % n;

    if (direction == 1)
    {
        /* Left rotation */
        for (i = 0; i < n; i++)
        {
            temp[i] = arr[(i + rotate) % n];
        }
    }
    else if (direction == 2)
    {
        /* Right rotation */
        for (i = 0; i < n; i++)
        {
            temp[(i + rotate) % n] = arr[i];
        }
    }
    else
    {
        printf("Invalid direction.\n");
        return 0;
    }

    /* Copy the rotated array back to arr */
    for (i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    /* Display the rotated array */
    printf("Rotated array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
