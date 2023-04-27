//Write a program to multiply two m ¥ n matrices
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row1, col1, row2, col2, row3, col3, i, j, k;
    int mat1[5][5], mat2[5][5], mul[5][5];

    printf("\n Enter the number of rows in the first matrix: ");
    scanf("%d", &row1);

    printf("\n Enter the number of cols in the first matrix: ");
    scanf("%d", &col1);

    printf("\n Enter the number of rows in the second matrix: ");
    scanf("%d", &row2);

    printf("\n Enter the number of cols in the second matrix: ");
    scanf("%d", &col2);

    if(col1 != row2)
    {
        printf("\n The number of columns in the first array must be equal to the number of rows in the second array!");
        exit(0);
    }

    //input matrices
    printf("\n Enter the elements of the first matrix: ");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\n Enter the elements of the second matrix: ");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    row3 = row1;
    col3 = col2;

    //multiplication
    for(i=0; i<row3; i++)
    {
        for(j=0; j<col3; j++)
        {
            mul[i][j] = 0;
            for(k=0; k<col3; k++)
            {
                mul[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    //display matrix

    for(i=0; i<row3; i++)
    {
        for(j=0; j<col3; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}