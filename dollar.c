#include <stdio.h>
int main()
{
    char star = '$';
    int i, j;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%c", star);
        }
        printf("\n");
    }
}