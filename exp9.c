#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, e;
    long fact;
    float base;
    double power;

    clrscr();

    /* (a) Factorial of a number */
    printf("Enter a number to find its factorial (0 to 12): ");
    scanf("%d", &n);

    if (n < 0 || n > 12)
        printf("Factorial cannot be found for this number\n");
    else
    {
        fact = 1;
        for (i = 1; i <= n; i++)
            fact = fact * i;
        printf("Factorial of %d = %ld\n", n, fact);
    }

    /* (b) Power of a number */
    printf("\nEnter the base: ");
    scanf("%f", &base);
    printf("Enter the exponent (0 or more): ");
    scanf("%d", &e);

    if (e < 0)
        printf("Please enter a non-negative exponent");
    else
    {
        power = 1;
        for (i = 1; i <= e; i++)
            power = power * base;
        printf("%.2f raised to the power %d = %.2f", base, e, power);
    }

    getch();
}