//Sum of two numbers using functions
#include<stdio.h>
void sum(int a, int b)
{
    int result=a+b;
    printf("Sum = %d\n", result);
}
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum(num1, num2);
    return 0;
}