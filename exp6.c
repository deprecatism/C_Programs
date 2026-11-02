#include <stdio.h>
#include <conio.h>

void main()
{
    int choice, count;
    long num = 0, n = 0, sum, rev, digit;

    clrscr();
    do
    {
        printf("\n\n1. Even or Odd");
        printf("\n2. Sum of digits");
        printf("\n3. Count the digits");
        printf("\n4. Reverse the digits");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            printf("Enter a number: ");
            scanf("%ld", &num);
            n = num;
            if (n < 0)
                n = -n;
        }

        switch (choice)
        {
        case 1:
            if (num % 2 == 0)
                printf("%ld is Even", num);
            else
                printf("%ld is Odd", num);
            break;

        case 2:
            sum = 0;
            while (n > 0)
            {
                digit = n % 10;
                sum = sum + digit;
                n = n / 10;
            }
            printf("Sum of digits = %ld", sum);
            break;

        case 3:
            count = 0;
            if (n == 0)
                count = 1;
            while (n > 0)
            {
                count++;
                n = n / 10;
            }
            printf("Number of digits = %d", count);
            break;

        case 4:
            rev = 0;
            while (n > 0)
            {
                digit = n % 10;
                rev = rev * 10 + digit;
                n = n / 10;
            }
            printf("Reverse of the number = %ld", rev);
            break;

        case 5:
            printf("Exiting the program...");
            break;

        default:
            printf("Invalid choice! Try again.");
        }
    } while (choice != 5);

    getch();
}