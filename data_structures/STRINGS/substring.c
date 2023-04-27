// Write a program to extract a substring from the middle of a given string
#include <stdio.h>

int main()
{
    char str[100], substr[100];
    int i=0, j=0, m, n;

    printf("\n Enter the main string: ");
    fgets(str, 100, stdin);

    printf("\n Enter the position from which to start the substring: ");
    scanf("%d", &m);
    printf("\n Enter the length of the substring: ");
    scanf("%d", &n);

    i = m;

    while(str[i] != '\0' && n>0)
    {
        substr[j] = str[i];
        j++;
        i++;
        n--;
    }

    substr[j] = '\0';
    printf("\n The substring is: ");
    puts(substr);

    return 0;
}