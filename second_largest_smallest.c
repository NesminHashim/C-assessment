#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int i;
    int largest, secondLargest;
    int smallest, secondSmallest;
    int foundLargest = 0;
    int foundSmallest = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Find the largest and smallest elements */
    largest = arr[0];
    smallest = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }

        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    /* Find second largest */
    for (i = 0; i < n; i++)
    {
        if (arr[i] != largest)
        {
            if (foundLargest == 0 || arr[i] > secondLargest)
            {
                secondLargest = arr[i];
                foundLargest = 1;
            }
        }
    }

    /* Find second smallest */
    for (i = 0; i < n; i++)
    {
        if (arr[i] != smallest)
        {
            if (foundSmallest == 0 || arr[i] < secondSmallest)
            {
                secondSmallest = arr[i];
                foundSmallest = 1;
            }
        }
    }

    /* Display second largest */
    if (foundLargest == 1)
    {
        printf("Second largest element: %d\n", secondLargest);
    }
    else
    {
        printf("There is no second largest element.\n");
    }

    /* Display second smallest */
    if (foundSmallest == 1)
    {
        printf("Second smallest element: %d\n", secondSmallest);
    }
    else
    {
        printf("There is no second smallest element.\n");
    }

    return 0;
}
