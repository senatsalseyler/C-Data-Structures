//write a program to sort the names of students
#include <stdio.h>
#include <string.h>

int main()
{
    char names[5][10], temp[10];
    int i, n, j;

    printf("\n Enter the number of the students: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("\n Enter the name of the student %d: ", i+1);
        scanf("%s", names[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(strcmp(names[j], names[j+1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }
    printf("\n Names of the students in alphabetical order are: ");
    for(i=0; i<n; i++)
    {
        puts(names[i]);
    }

    return 0;
}