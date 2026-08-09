#include <stdio.h>

int main()
{
    int n;
    int first = 0;
    int second = 1;
    int next;
    int i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (i = 1; i <= n; i++)
    {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
