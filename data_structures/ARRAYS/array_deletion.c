//deleting from position
#include <stdio.h>

int main()
{
    int i, n, pos, arr[10];

    printf("\n Enter the number of the elements: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        printf("\n arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }

    printf("\n Enter the position from which the number has to be deleted: ");
    scanf("%d", &pos);
    for(i=pos; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    printf("\n The array after deletion is: ");
    for(i=0; i<n; i++)
    {
        printf("\n arr[%d] = %d", i, arr[i]);
    }
    
    return 0;
}