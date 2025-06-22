//Write a C program to compute sum of all the elements of an array using pointers.
#include <stdio.h>
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
    
    int sum=0;
    int *ptr=arr;
    for(int i=0;i<n;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("Sum of all elements in the array: %d\n", sum);
    return 0;
}