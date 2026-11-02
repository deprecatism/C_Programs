#include <stdio.h>

void main()
{
    int greatest = 0, i, temp;

    printf("Enter numbers (10 of them):\n");
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &temp);
        if (temp > greatest)
            greatest = temp;
    }
    printf("%d is greatest\n", greatest);
}