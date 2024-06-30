#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number to check if it's even or odd:\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
}