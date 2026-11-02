#include <stdio.h>

void main()
{
    int n, i, male_count = 0, female_count = 0;
    char sex;
    float height, male_total = 0, female_total = 0;

    printf("Enter the number of persons: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\nPerson %d\n", i);
        printf("Enter sex code (M/F): ");
        scanf(" %c", &sex);
        printf("Enter height in cm: ");
        scanf("%f", &height);

        if (sex == 'M')
        {
            male_total = male_total + height;
            male_count++;
        }
        else if (sex == 'F')
        {
            female_total = female_total + height;
            female_count++;
        }
        else
        {
            printf("Invalid sex code! Enter this person again.\n");
            i--;
        }
    }

    if (male_count > 0)
        printf("Average height of males   = %.2f cm (%d persons)\n",
               male_total / male_count, male_count);
    else
        printf("No male entries\n");

    if (female_count > 0)
        printf("Average height of females = %.2f cm (%d persons)\n",
               female_total / female_count, female_count);
    else
        printf("No female entries\n");
}