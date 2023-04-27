//interchanging min and max elements in the array
#include <stdio.h>

void read_array(int *arr, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void display_array(int *arr, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("\n arr[%d] = %d", i, arr[i]);
    }
}

int find_smallest_pos(int *arr, int n)
{
    int i, pos=0;
    int smallest = arr[0];

    for(i=0; i<n; i++)
    {
        if(arr[i]<smallest)
        {
            smallest = arr[i];
            pos =i;
        }
    }
    return pos;
}

int find_biggest_pos(int *arr, int n)
{
    int i, pos=0;
    int biggest = arr[0];

    for(i=0; i<n; i++)
    {
        if(arr[i] > biggest)
        {
            biggest = arr[i];
            pos =i;
        }
    }
    return pos;
}

void interchange(int *arr, int n)
{
    int temp, big_pos, small_pos;
    big_pos = find_biggest_pos(arr, n);
    small_pos = find_smallest_pos(arr, n);

    temp = arr[big_pos];
    arr[big_pos] = arr[small_pos];
    arr[small_pos] = temp;
}

int main()
{
    int arr[10], n;
    printf("\n Enter the size of the array: ");
    scanf("%d", &n);

    read_array(arr, n);
    interchange(arr, n);
    printf("\n The new array is: ");
    display_array(arr, n);

    return 0;
}