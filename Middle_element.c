//Find the middle element of an array
#include <stdio.h>
void middle(int *arr, int n)
{
    if(n%2==0)
    printf("Middle elements are: %d and %d\n", arr[n/2 - 1], arr[n/2]);
    else
    printf("Middle element is: %d\n", arr[n/2]);
}
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    middle(arr,n);
    return 0;
}