//Find the quare of a number using functions.
#include<stdio.h>
void square(int a)
{
    int sq=a*a;
    printf("Required square = %d\n", sq);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    square(num);
    return 0;
}