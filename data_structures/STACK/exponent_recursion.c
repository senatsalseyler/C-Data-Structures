//write a program to calculate exp(x,y) using recursive functions

#include <stdio.h>

int exponent(int, int);

int main()
{
    int num1, num2, res;
    printf("\n Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);
    res = exponent(num1, num2);
    printf("Result: %d", res);
    return 0;
}

int exponent(int x, int y)
{
    if(y == 0)
    {
        return 1;
    }
    else
    {
        return(x*exponent(x,y-1));
    }
}