//Write a program to compare two strings.
#include <stdio.h>

int length(char * str)
{
    int i=0; 
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char str1[50], str2[50];
    int i=0, len1=0, len2=0, same=0;

    printf("\n Enter the first string: ");
    fgets(str1, 50, stdin);
    printf("\n Enter the second string: ");
    fgets(str2, 50, stdin);

    len1 = length(str1);
    len2 = length(str2);

    if(len1 == len2)
    {
        while(i < len2)
        {
            if(str1[i] == str2[i])
            {
                i++;
            }
            else
            {
                break;
            }
        }
        if(i == len1)
        {
            same = 1;
            printf("\n The two strings are equal");
        }
    }
    if(len1 != len2)
    {
        printf("\n The two strings are not equal");
    }

    if(same == 0)
    {
        if(str1[i] > str2[i])
        {
            printf("\n String 1 is greater than string 2");
        }
        else if(str1[i] < str2[i])
        {
            printf("\n String 2 is greater than string 1");
        }
    }

    return 0;
}