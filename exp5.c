#include <stdio.h>

#define SIZE 50

#define INT_MIN 0

void main()
{
    int a[SIZE], i, largest, second;

    printf("Enter %d integers:\n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    largest = second = INT_MIN;

    for (i = 0; i < SIZE; i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] != largest)
            second = a[i];
    }

    printf("\nLargest number        = %d", largest);
    if (second == INT_MIN)
        printf("\nNo second largest (all numbers are equal)");
    else
        printf("\nSecond largest number = %d\n", second);
}