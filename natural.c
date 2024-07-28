#include <stdio.h>
int main()
{
    int i, num;

    printf("Input upper limit:");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        printf("%d,", i);
    }
}