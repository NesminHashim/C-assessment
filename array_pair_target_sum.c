#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int target;
    int i, j;
    int found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target);

    /* Check all possible pairs */
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("Pair: %d and %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    /* Check if no pair was found */
    if (found == 0)
    {
        printf("No pair found with the given target sum.\n");
    }

    return 0;
}
