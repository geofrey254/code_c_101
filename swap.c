#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the first number: \n");
    scanf("%d", &a);

    printf("Enter the second number: \n");
    scanf("%d", &b);

    printf("a = %d \nb = %d \n", a, b);

    // Swap the numbers
    c = a;
    a = b;
    b = c;

    printf("******************\n");
    printf("\tSwapped numbers\n");
    printf("******************\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}