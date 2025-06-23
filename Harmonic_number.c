//Write a C code to print nth harmonic number using the formula H(n) = 1 + 1/2 + ... + 1/n

#include <stdio.h>
int main() {
    int n;
    double h = 0.0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        h = h+(1.0 / i);
    }

    printf("The %dth harmonic number is: %.6f\n", n, h);
    
    return 0;
}