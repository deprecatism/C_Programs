#include <stdio.h>
#include <math.h>

void roots(float a, float b, float c);

void main()
{
    float a, b, c;

    printf("Enter the coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    roots(a, b, c);
}

void roots(float a, float b, float c)
{
    float d = 0, r1, r2, real, imag;
    int choice;

    if (a == 0)
        choice = 0;
    else
    {
        d = b * b - 4 * a * c;
        if (d > 0)
            choice = 1;
        else if (d == 0)
            choice = 2;
        else
            choice = 3;
    }

    switch (choice)
    {
    case 0:
        printf("\nNot a quadratic equation (a = 0)");
        if (b != 0)
            printf("\nIt is linear, root = %.2f", -c / b);
        break;

    case 1:
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("\nRoots are real and distinct");
        printf("\nRoot 1 = %.2f", r1);
        printf("\nRoot 2 = %.2f\n", r2);
        break;

    case 2:
        r1 = -b / (2 * a);
        printf("\nRoots are real and equal");
        printf("\nRoot 1 = Root 2 = %.2f", r1);
        break;

    case 3:
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * fabs(a));
        printf("\nRoots are complex (imaginary)");
        printf("\nRoot 1 = %.2f + %.2fi", real, imag);
        printf("\nRoot 2 = %.2f - %.2fi", real, imag);
        break;
    }
}