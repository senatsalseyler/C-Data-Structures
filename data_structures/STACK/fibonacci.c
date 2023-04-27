//write a program to print the Fibonacci series using recursion

#include <stdio.h>

int fibonacci(int);

int main()
{
    int num, i = 0, result;
    printf("\n Enter the number: ");
    scanf("%d", &num);
    printf("\n Fibonacci series: ");
    for(i = 0; i<num; i++)
    {
        result = fibonacci(i);
        printf("%d\t ", result);
    }
    return 0;
}

int fibonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return(fibonacci(n-1) + fibonacci(n-2));
    }
}