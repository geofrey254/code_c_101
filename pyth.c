#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter first angle:\n");
    scanf("%d", &a);

    printf("Enter the second angle:\n");
    scanf("%d", &b);

    c = 180 - (a + b);

    printf("Third angle = %d", c);
}