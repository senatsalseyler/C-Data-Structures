//write a program to read multiple lines of text and then count the
//number of characters
#include <stdio.h>

int main()
{
    char str[1000];
    int i=0, word_count=1, line_count=1, char_count=1;

    printf("\n Enter a '*' to end");
    printf("\n ******************");
    printf("\n Enter the text: ");
    scanf("%c", &str[i]);

    while(str[i] != '*')
    {
        i++;
        scanf("%c", &str[i]);
    }
    str[i] = '\0';
    i=0;

    while(str[i] != '\0')
    {
        if(str[i] == '\n')
        {
            line_count++;
        }
        if(str[i] == ' ' && str[i+1] != ' ')
        {
            word_count++;
        }
        char_count++;
        i++;
    }
    printf("\n The total count of word is: %d", word_count);
    printf("\n The total count of lines is: %d", line_count);
    printf("\n The total count of characters is: %d", char_count);

    return 0;
}