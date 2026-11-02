#include <stdio.h>
#include <conio.h>

int isprime(int n);

void main()
{
    int n, num, count;

    clrscr();
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isprime(n))
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);

    printf("\n\nFirst 100 prime numbers:\n");
    count = 0;
    num = 2;
    while (count < 100)
    {
        if (isprime(num))
        {
            printf("%5d", num);
            count++;
            if (count % 10 == 0)
                printf("\n");
        }
        num++;
    }

    getch();
}

int isprime(int n)
{
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}