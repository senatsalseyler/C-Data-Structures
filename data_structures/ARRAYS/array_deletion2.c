//deleting the element we want
#include <stdio.h>

int main()
{
    int i, j, n, num, arr[10];
    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n Enter the number to be deleted: ");
    scanf("%d", &num);

    for(i = 0; i<n; i++)
    {
        if(arr[i] == num)
        {
            for(j = i; j<n-1; j++)
            {
                arr[j] = arr[j+1];
            }
        }
    }
    n = n-1;
    printf("\n THe array after deletion is: ");
    for(i = 0; i<n; i++)
    {
        printf("\n arr[%d] = %d", i, arr[i]);
    }
}