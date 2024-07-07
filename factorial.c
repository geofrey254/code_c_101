#include <stdio.h>
int main()
{
    int num, fact = 1;
    printf("Enter a number:\n");
    scanf("%d", &num);

    while (num >= 1)
    {
        fact *= num;
        num--;
    }

    printf("The factorial is %d", fact);
}