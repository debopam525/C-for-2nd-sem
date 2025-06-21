//Write a C program to print numbers from 1 to 10 in such a way that when a number is odd, add 1 and when a number is even, subtract 1 using recursion.
#include <stdio.h>
void oddeven(int n) {
    if (n > 10) {
        return;
    }
    if (n % 2 == 0) {
        printf("%d ", n - 1);
    } else {
        printf("%d ", n + 1);
    }
    oddeven(n + 1);
}
int main() {
    printf("Original numbers from 1 to 10:\n");
    for(int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\nModified numbers from 1 to 10:\n");
    oddeven(1);
    printf("\n");
    return 0;
}