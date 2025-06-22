//Write a C program to remove duplicate elements of an array using pointer.
//After removing duplicates, copy the entire elements of the array to another using pointer.
#include <stdio.h>
void remove_duplicates(int *arr, int n, int *new_arr, int *new_n) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;
        for (int k = 0; k < j; k++) {
            if (arr[i] == new_arr[k]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) {
            new_arr[j++] = arr[i];
        }
    }
    *new_n = j;
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int new_arr[n];
    int new_n = 0;
    
    remove_duplicates(arr, n, new_arr, &new_n);
    
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < new_n; i++) {
        printf("%d ", new_arr[i]);
    }
    
    return 0;
}