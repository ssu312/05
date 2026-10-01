#include <stdio.h>

int main(void)
{
    int num1,num2;
    char op;
    int res;

    printf("Input the calculation:");
    scanf("%i%c%i",&num1,&op,&num2);

    if (op == '+')
        res = num1 + num2;

    else if (op == '-')
        res = num1 - num2;

    else if (op == '*')
        res = num1 * num2;
        
    else if (op == '/')
        res = num1 / num2;

    printf("= %i\n", res);

    return 0;
}
