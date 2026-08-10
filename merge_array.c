#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], arr3[200];
    int n1, n2;
    int i = 0, j = 0, k = 0;

    printf("Enter the size of first array: ");
    scanf("%d", &n1);

    printf("Enter the elements of first sorted array:\n");

    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of second sorted array:\n");

    for (j = 0; j < n2; j++)
    {
        scanf("%d", &arr2[j]);
    }

    /* Compare and merge the two arrays */
    i = 0;
    j = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }

        k++;
    }

    /* Add remaining elements of first array */
    while (i < n1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    /* Add remaining elements of second array */
    while (j < n2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    /* Display the merged array */
    printf("Merged sorted array:\n");

    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", arr3[i]);
    }

    printf("\n");

    return 0;
}
