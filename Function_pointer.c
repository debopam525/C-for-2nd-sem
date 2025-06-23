//Write a C program to explain function returning a pointer.
#include <stdio.h>

// Function that returns a pointer to int
int* findLarger(int *a, int *b) {
    if (*a > *b) {
        return a;  // Return pointer to the larger value
    } else {
        return b;
    }
}

int main() {
    int num1, num2;
    int *result;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    // Call function which returns a pointer
    result = findLarger(&num1, &num2);
    
    printf("The larger number is: %d\n", *result);
    printf("Memory address of the larger number: %p\n", (void*)result);
    
    return 0;
}