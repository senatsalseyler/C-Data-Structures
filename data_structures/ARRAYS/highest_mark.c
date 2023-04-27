//a 2D array marks which stores the marks of five students in three 
//subjects. Write a program to display the highest marks in each subject.
#include <stdio.h>

int main()
{
    int i, j, highest, marks[5][3];
    //Input students marks
    for(i=0; i<5; i++)
    {
        printf("\n Enter the marks of student %d: ", i+1);
        for(j=0; j<3; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }
    for(j=0; j<3; j++)
    {
        highest = marks[0][0];
        for(i=0; i<5; i++)
        {
            if(marks[i][j] > highest)
            {
                highest = marks[i][j];
            }
        }
        printf("\n The highest marks obtained in the subject %d = %d", j+1, highest);
    }

    return 0;
}