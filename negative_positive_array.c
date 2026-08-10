#include <stdio.h>

int main()
{
    int arr[100];
    int result[100];
    int n;
    int i;
    int k = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* First store all negative numbers */
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            result[k] = arr[i];
            k++;
        }
    }

    /* Then store all positive numbers and zero */
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            result[k] = arr[i];
            k++;
        }
    }

    /* Display the rearranged array */
    printf("Rearranged array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    printf("\n");

    return 0;
}
