#include <stdio.h>

/* Define the structure */
struct Complex
{
    float real;
    float imaginary;
};

/* Function to add two complex numbers */
struct Complex add(struct Complex c1, struct Complex c2)
{
    struct Complex result;

    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;

    return result;
}

/* Function to display a complex number */
void display(struct Complex c)
{
    if (c.imaginary >= 0)
    {
        printf("%.2f + %.2fi\n", c.real, c.imaginary);
    }
    else
    {
        printf("%.2f - %.2fi\n", c.real, -c.imaginary);
    }
}

int main()
{
    struct Complex c1, c2, result;

    /* Input first complex number */
    printf("Enter real part of first complex number: ");
    scanf("%f", &c1.real);

    printf("Enter imaginary part of first complex number: ");
    scanf("%f", &c1.imaginary);

    /* Input second complex number */
    printf("Enter real part of second complex number: ");
    scanf("%f", &c2.real);

    printf("Enter imaginary part of second complex number: ");
    scanf("%f", &c2.imaginary);

    /* Add the two complex numbers */
    result = add(c1, c2);

    /* Display the result */
    printf("Sum of complex numbers: ");
    display(result);

    return 0;
}
