#include <stdio.h>
int main()
{
    int a, b, calc;
    char op;

    printf("Enter an operator (+, -, *, /):");
    scanf("%c", &op);

    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);

    switch (op)
    {
    case '+':
        calc = a + b;
        printf("The result is: %d", calc);
        break;
    case '-':
        calc = a - b;
        printf("The result is: %d", calc);
        break;
    case '*':
        calc = a * b;
        printf("The result is: %d", calc);
        break;
    case '/':
        calc = a / b;
        printf("The result is: %d", calc);
        break;
    default:
        printf("Error! operator is not correct");
    }
}