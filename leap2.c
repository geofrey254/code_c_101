#include <stdio.h>
int main()
{
    int year;
    printf("Enter year:\n");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("Leap year \n");
            }
            else
            {
                printf("Not leap\n");
            }
        }
        else
        {
            printf("A leap year");
        }
    }
    else
    {
        printf("Not leap");
    }
}