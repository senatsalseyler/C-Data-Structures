// Write a program to reverse a given string
#include <stdio.h>

int length(char * str)
{
    int i = 0;
    while( str[i] !='\0')
    {
        i++;
    }
    return i;
}   

int main()
{
    char str[100], temp;
    int i=0, j;
    
    printf("\n Enter the string: ");
    fgets(str, 100, stdin);

    j = length(str)-1;

    while(i<j)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
        j--;
    }

    printf("\n The reversed string is: ");
    puts(str);

    return 0;
}