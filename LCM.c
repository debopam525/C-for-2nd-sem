//Write a C code to calculate the LCM of two numbers using recursion.
#include <stdio.h>
int lcm (int a, int b) {
    static int m = 0;
    m = m + b;
    if (m % a == 0) {
        return m;
    }
    return lcm(a, b);
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int result = lcm(num1, num2);
    printf("LCM of %d and %d is: %d\n", num1, num2, result);
    
    return 0;
}