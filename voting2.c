#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int hope = 0, adan = 0, jeff = 0, bev = 0, stop = 3797, choice;
int vote();
int winner();

int main()
{
    printf("\tWELCOME TO CLASS REP ELECTIONS\n");
    getch();
    system("cls");

    vote();
}

int vote()
{
    printf("\t CANDIDATES\n");
    printf("1.Hope\n");
    printf("2.Adan\n");
    printf("3.Jeff\n");
    printf("4.Bev\n");
    printf("\n");

    printf("Please vote for your desired candidate?\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        hope++;
        vote();
    }
    else if (choice == 2)
    {
        adan++;
        vote();
    }
    else if (choice == 3)
    {
        jeff++;
        vote();
    }
    else if (choice == 4)
    {
        bev++;
        vote();
    }

    else if (choice == stop)
    {
        winner();
    }
}

int winner()
{
    printf("\tTOTAL VOTES FOR EVERY CANDIDATE\n");
    printf("Hope: %d\n", hope);
    printf("Adan: %d\n", adan);
    printf("Jeff: %d\n", jeff);
    printf("Bev: %d\n", bev);
    printf("\n");

    printf("\nTHE WINNER OF THE ELECTION IS\n");
    printf("\n");

    if (hope > adan)
    {
        if (hope > jeff)
        {
            if (hope > bev)
            {
                printf("Hope is the winner with %d\n", hope);
            }
            else
            {
                printf("Bev is the winner with %d\n", bev);
            }
        }
        else
        {
            if (jeff > bev)
            {
                printf("Jeff is the winner with %d\n", jeff);
            }
            else
            {
                printf("Bev is the winner with %d\n", bev);
            }
        }
    }
    else
    {
        if (adan > jeff)
        {
            if (adan > bev)
            {
                printf("Adan is the winner with %d\n", adan);
            }
            else
            {
                printf("Bev is the winner with %d\n", bev);
            }
        }
        else
        {
            printf("Jeff is the winner with %d\n", jeff);
        }
    }
}