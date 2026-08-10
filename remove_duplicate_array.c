#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int i, j;
    int k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Check for duplicate elements */
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                /* Shift elements to the left */
                for (k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    /* Display the array without duplicates */
    printf("Array after removing duplicates:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
