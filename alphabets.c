#include <stdio.h>

int main()
{
    int i;
    printf("\t Letters A to Z \n");
    printf("*********************************** \n\n");

    for (i = 65; i <= 90; i++)
    {
        printf("%c \n", i);
    }

    printf("\t Letters a to z \n");
    printf("*********************************** \n");

    for (i = 97; i <= 122; i++)
    {
        printf("%c \n", i);
    }
}