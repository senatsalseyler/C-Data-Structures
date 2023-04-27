//Write a program to fill a square matrix with value zero on the diagonals,
//1 on the upper right triangle, and –1 on the lower left triangle.
#include <stdio.h>

void read_matrix(int row, int mat[][row])
{
    int i, j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<row; j++)
        {
            if(i==j)
            {
                mat[i][j] = 0;
            }
            else if(i<j)
            {
                mat[i][j] = 1;
            }
            else
            {
                mat[i][j] = -1;
            }
        }
    }
}

void display_matrix(int row, int mat[][row])
{
    int i, j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int row, mat1[5][5];

    printf("\n Enter the number of rows and columns of the matrix: ");
    scanf("%d", &row);
    read_matrix(row, mat1);
    display_matrix(row, mat1);

    return 0;
}