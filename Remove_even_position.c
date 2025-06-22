//Write a C program to remove the elements in the even position of an array using pointer.
//Display the final array after remove operation.

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }    
    int *p;
    printf("The final array is: ");
    for(p=&arr[0];p<&arr[n];p=p+2) {
        printf("%d\t",*p);
    }
    return 0;
}