//Write a program to check nesting of parentheses using a stack.
#include <stdio.h>
#define MAX 20
int top = -1;
int stk[MAX];

void push(char c)
{
    if(top>= MAX)
    {
        printf("\n STACK OVERFLOW");
    }
    else
    {
        top = top + 1;
        stk[top] = c;
    }
}

int length(char *str)
{   
    int i=0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

char pop()
{
    if(top == -1)
    {
        printf("\n STACK UNDERFLOW");
    }
    else
    {
        return(stk[top--]);
    }
}

int main()
{
    char exp[MAX], temp, len;
    int i, flag = 1;

    printf("\n Enter an expression: ");
    fgets(exp, MAX, stdin);
    len = length(exp);
    for(i=0; i<len; i++)
    {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(exp[i]);
        }
        if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if(top == -1)
            {
                flag = 0;
            }
            else
            {
                temp = pop();
                if(exp[i] == ')' && (temp == '{' || temp == '['))
                {
                    flag = 0;
                }
                if(exp[i] == '}' && (temp == '(' || temp =='['))
                {
                    flag = 0;
                }
                if(exp[i] == ']' && (temp == '(' || temp == '{'))
                {
                    flag = 0;
                }
            }
        }
    }
    if(top>=0)
    {
        flag = 0;
    }
    if(flag == 1)
    {
        printf("\n Valid expression");
    }
    else
    {
        printf("\n Invalid expression");
    }
    return 0;
}