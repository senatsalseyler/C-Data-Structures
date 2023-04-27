//Write a program to append a string to another string
#include <stdio.h>

int main()
{
    char dest_str[100], source_str[50];

    int i=0, j=0;
    printf("\n Enter the source string: ");
    fgets(source_str, 50, stdin);
    printf("\n Enter the destination string: ");
    fgets(dest_str, 100, stdin);

    while(dest_str[i] != '\0')
    {
        i++;
    }

    while(source_str[j] != '\0')
    {
        dest_str[i] = source_str[j];
        i++;
        j++;
    }

    dest_str[i] = '\0';
    printf("\n After appending, the destination string is: ");
    puts(dest_str);

    return 0;
}