#include <stdio.h>

int main()
{
    int mat[3][3], transpose[3][3], i, j;
    //input
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    //transpose
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            transpose[i][j] = mat[j][i];
        }
    }

    //display matrix
    printf("\n The transposed matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}