//Write a program to input two m x n matrices and then calculate the sum of 
//their corresponding elements and store it in a third m x n matrix
#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int i, j;
    int col1, row1, col2, row2, cols_sum, rows_sum;
    int mat1[5][5], mat2[5][5];
    int sum[5][5];

    printf("\n Enter the number of rows in the first matrix: ");
    scanf("%d", &row1);

    printf("\n Enter the number of columns in the first matrix: ");
    scanf("%d", &col1);

    printf("\n Enter the number of rows in the second matrix: ");
    scanf("%d", &row2);

    printf("\n Enter the number of columns in the second matrix: ");
    scanf("%d", &col2);

    if(row1 != row2 || col1 != col2)
    {
        printf("\n The number of rows and columns of both matrices must be equal!");
        exit(0);
    }

    //inputs
    printf("\n Enter the elements of the first array: ");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\n Enter the elements of the second array: ");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    //sum
    rows_sum = row1;
    cols_sum = col1;
    
    for(i=0; i<rows_sum; i++)
    {
        for(j=0; j<cols_sum; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    //display array
    printf("\n The elements of the resultant matrix are: \n");
    for(i=0; i<rows_sum; i++)
    {
        for(j=0; j<cols_sum; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}