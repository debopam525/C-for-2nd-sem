/*Write a simple C program to find the sum of the first n prime numbers,
where n should be given by the user.*/
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, count = 0, num = 2, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    
    printf("The first %d prime numbers are: ", n);
    
    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            sum += num;
            count++;
        }
        num++;
    }
    
    printf("\nThe sum of the first %d prime numbers is: %d\n", n, sum);
    
    return 0;
}