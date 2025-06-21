//Swapping two numbers using call by value
#include<stdio.h>
void swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
}
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swapping: a = %d, b = %d\n", num1, num2);
    swap(num1, num2);
}