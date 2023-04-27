//write a program to calculate the GCD of two numbers using recersive functions

#include <stdio.h>

int GCD(int, int);

int main()
{
    int num1, num2, res;
    printf("\n Enter  the two numbers: ");
    scanf("%d %d", &num1, &num2);
    res = GCD(num1, num2);
    printf("\n GCD of %d and %d = %d", num1, num2, res);
    return 0;
}

int GCD(int x, int y)
{
    int rem;
    rem = x % y;
    if(rem % y == 0)
    {
        return y;
    }
    else
    {
        return(GCD(y, rem));
    }
}