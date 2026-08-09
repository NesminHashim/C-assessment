#include <stdio.h>

void countFrequency(int number, int frequency[])
{
    int digit;

    while (number > 0)
    {
        digit = number % 10;

        frequency[digit] = frequency[digit] + 1;

        number = number / 10;
    }
}

int main()
{
    int number;
    int frequency[10] = {0};
    int i;

    printf("Enter an integer: ");
    scanf("%d", &number);

    countFrequency(number, frequency);

    printf("Frequency of each digit:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d = %d times\n", i, frequency[i]);
    }

    return 0;
}
