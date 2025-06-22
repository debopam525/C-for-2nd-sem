//C program to compute sum of all elements of an array using dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int n, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum of all elements: %d\n", sum);
    free(arr);
    return 0;
}