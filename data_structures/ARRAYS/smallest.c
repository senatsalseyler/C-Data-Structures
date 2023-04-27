//finding the smallest element in an array
#include <stdio.h>

void read_array(int *arr, int n)
{
    int i;
    for(i = 0; i<n; i++)
    {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

int find_smallest(int *arr, int n)
{
    int i;
    int smallest = arr[0];
    
    for(i=0; i<n; i++)
    {
        if(arr[i]<smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main()
{
    int arr[10], n, smallest;

    printf("\n Enter the size of the array: ");
    scanf("%d", &n);

    read_array(arr,n);
    smallest = find_smallest(arr,n);
    
    printf("\n The smallest number in the array is = %d", smallest);

    return 0;
}