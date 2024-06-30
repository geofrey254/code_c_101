#include <stdio.h>
int main()
{
    int year;
     /*
    A leap year is exactly divisible by 4 except for the years exactly
    divisible by 100 but century years are leap years if divisible by 400
    */

    printf("Enter the year to check if it's leap year: \n");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is a leap year \n", year);
    }
    else
    {
        printf("%d is not a leap year \n", year);
    }
}