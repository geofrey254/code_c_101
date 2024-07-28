#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int items, total = 0, amount, balance, choice, i;

    printf("*******************************\n");
    printf("HELLO THERE, WELCOME TO BREAKFAST HOTEL\n");
    printf("*******************************\n");
    printf("Enter any key to continue\n");
    getch();
    system("cls");
    printf("Would you like to make your order?\n");
    printf("*******************************\n\n");
    printf("1.Yes\n");
    printf("2.No\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        system("cls");
        printf("*******************************\n");
        printf("\t BREAKFAST HOTEL MENU \n");
        printf("*******************************\n");
        printf("1.Black Coffee - 40\n");
        printf("2.Black Tea - 30\n");
        printf("3.White Coffee - 50\n");
        printf("4.White Tea - 40\n");
        printf("5.Sausage - 40\n");
        printf("6.Mandazi - 40\n");
        printf("7.Cake - 70\n");
        printf("8.Chapati - 30\n");
        printf("*******************************\n\n");

        printf("How many items would you like to order: \n");
        scanf("%d", &items);

        for (i = 0; i < items; i++)
        {
            printf("Enter item:\n");
            scanf("%d", &choice);
            if (choice == 1)
            {
                total = total + 40;
                printf("Black Coffee - 40\n");
            }
            else if (choice == 2)
            {
                total = total + 30;
                printf("Black Tea - 30\n");
            }
            else if (choice == 3)
            {
                total = total + 50;
                printf("White Coffee - 50\n");
            }
            else if (choice == 4)
            {
                total = total + 40;
                printf("White Tea - 40\n");
            }
            else if (choice == 5)
            {
                total = total + 40;
                printf("Sausage - 40\n");
            }
            else if (choice == 6)
            {
                total = total + 40;
                printf("Mandazi - 40\n");
            }
            else if (choice == 7)
            {
                total = total + 70;
                printf("Cake - 70\n");
            }
            else if (choice == 8)
            {
                total = total + 30;
                printf("Chapati - 30\n");
            }
        }
        printf("*******************************\n");
        printf("Your Total is : %d \n\n", total);
        printf("*******************************\n");

        printf("Press enter to calculate your balance\n");
        getch();

        printf("Total amount paid for the order:\n");
        scanf("%d", &amount);

        balance = amount - total;

        if (balance < 0)
        {
            printf("*******************************\n");
            printf("Please pay amount: %d\n", total);
            printf("*******************************\n");
        }
        else
        {
            printf("*******************************\n");
            printf("Your balance is %d\n", balance);
            printf("*******************************\n");
        }
    }
    else if (choice == 2)
    {
        printf("Thanks for passing by.\n");
    }
    else
    {
        printf("Invalid choice");
    }
}