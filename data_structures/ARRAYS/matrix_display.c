//read and display a 3¥3 matrix
#include <stdio.h>

int main()
{
    int mat[3][3], i, j;

    //input

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("arr[%d][%d] = ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    //display
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}