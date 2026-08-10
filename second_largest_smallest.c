#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[100];
    int n;
    int i;
    int smallest, largest;
    int secondSmallest, secondLargest;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    smallest = arr[0];
    largest = arr[0];

    /* Find the smallest and largest */
    for (i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }

        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    /* Find second smallest */
    secondSmallest = INT_MAX;

    for (i = 0; i < n; i++)
    {
        if (arr[i] > smallest && arr[i] < secondSmallest)
        {
            secondSmallest = arr[i];
        }
    }

    /* Find second largest */
    secondLargest = INT_MIN;

    for (i = 0; i < n; i++)
    {
        if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    /* Display the results */
    if (secondSmallest == INT_MAX || secondLargest == INT_MIN)
    {
        printf("There is no second smallest or second largest element.\n");
    }
    else
    {
        printf("Second smallest element: %d\n", secondSmallest);
        printf("Second largest element: %d\n", secondLargest);
    }

    return 0;
}
