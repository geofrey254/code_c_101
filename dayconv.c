#include <stdio.h>
int main()
{
    int days, year, week, day;

    printf("Enter the number of days:\n");
    scanf("%d", &days);

    year = days / 365;
    week = (days - (365 * (year))) / 7;
    day = (days - (365 * (year))) % 7;

    printf("%d days = %d year/s, %d week/s and %d day/s", days, year, week, day);
}