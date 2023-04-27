//display a 3x3 matrix using pointer
#include <stdio.h>

void display_matrix(int (*mat)[3])
{
    int i, j;
    printf("\n The elements of the matrix are: ");
    for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3; j++)
        {
            printf("%d ", *(*(mat+i)+j));
        }
    }
}

int main()
{
    int i, j, mat[3][3];
    printf("\n Enter the elements of the matrix: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    display_matrix(mat);

    return 0;
}
