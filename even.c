#include <stdio.h>
int main()
{
    int num, i;

    printf("Input upper range: \n");
    scanf("%d", &num);

    printf("Even number between 1 to num:\n");

    for (i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
            printf(",");
        }
    }
}