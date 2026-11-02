#include <stdio.h>
#include <conio.h>

void main()
{
    int choice, count, j;
    long num = 0, temp, rev, sum, digit, p, i;

    clrscr();
    do
    {
        printf("\n\n1. Palindrome number");
        printf("\n2. Armstrong number");
        printf("\n3. Perfect number");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3)
        {
            printf("Enter a positive number: ");
            scanf("%ld", &num);
        }

        switch (choice)
        {
        case 1:
            temp = num;
            rev = 0;
            while (temp > 0)
            {
                rev = rev * 10 + temp % 10;
                temp = temp / 10;
            }
            if (rev == num)
                printf("%ld is a Palindrome number", num);
            else
                printf("%ld is not a Palindrome number", num);
            break;

        case 2:
            count = 0;
            temp = num;
            while (temp > 0)
            {
                count++;
                temp = temp / 10;
            }

            sum = 0;
            temp = num;
            while (temp > 0)
            {
                digit = temp % 10;
                p = 1;
                for (j = 1; j <= count; j++)
                    p = p * digit;
                sum = sum + p;
                temp = temp / 10;
            }

            if (sum == num)
                printf("%ld is an Armstrong number", num);
            else
                printf("%ld is not an Armstrong number", num);
            break;

        case 3:
            sum = 0;
            for (i = 1; i <= num / 2; i++)
            {
                if (num % i == 0)
                    sum = sum + i;
            }
            if (sum == num && num > 0)
                printf("%ld is a Perfect number", num);
            else
                printf("%ld is not a Perfect number", num);
            break;

        case 4:
            printf("Exiting the program...");
            break;

        default:
            printf("Invalid choice! Try again.");
        }
    } while (choice != 4);

    getch();
}