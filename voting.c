#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int james = 0, alice = 0, john = 0, june = 0, close = 3797, choice;
int vote();
int winner();

int main()
{
    printf("**************************************\n");
    printf("\tWELCOME\n");
    printf("PLEASE VOTE FOR YOUR DESIRED CANDIDATE\n");
    printf("**************************************\n");

    getch();
    system("cls");

    vote();
}

int vote()
{
    printf("\tCANDIDATES\n");
    printf("\n");
    printf("1. James\n");
    printf("2. Alice\n");
    printf("3. John\n");
    printf("4. June\n");
    printf("\n");
    printf("Please choose the canditate you would like to vote for:\n");
    scanf("%d", &choice);
    printf("\n\n");
    printf("\tTHANK YOU FOR VOTING\n\n");

    switch (choice)
    {
    case 1:
        james++;
        vote();
    case 2:
        alice++;
        vote();
    case 3:
        john++;
        vote();
    case 4:
        june++;
        vote();
    case 3797:
        winner();
    }
}

int winner()
{
    printf("James: %d\n", james);
    printf("Alice: %d\n", alice);
    printf("John: %d\n", john);
    printf("June: %d\n\n", june);
    printf("\tTHE WINNER OF THE ELECTIONS IS\n");
    printf("\t**************************************\n");

    if (james > alice)
    {
        if (james > john)
        {
            if (james > june)
            {
                printf("James is the winner: %d votes\n\n", james);
            }
            else
            {
                printf("June is the winner: %d votes\n\n", june);
            }
        }
        else
        {
            printf("John is the winner: %d votes\n\n", john);
        }
    }
    else
    {
        if (alice > john)
        {
            printf("Alice is the winner: %d votes\n\n", alice);
        }
        else
        {
            if (john > june)
            {
                printf("John is the winner: %d votes\n\n", john);
            }
            else
            {
                printf("June is the winner: %d votes\n\n", june);
            }
        }
    }

    exit(1);
}