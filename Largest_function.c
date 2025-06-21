//Largest of three nunbers using functions
#include<stdio.h>
void largest(int a, int b, int c)
{
    int max;
    if(a>b&&a>c)
        max=a;
    else if(b>a&&b>c)
        max=b;
    else
        max=c;
    printf("Largest number is: %d\n", max);
}
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    largest(num1, num2, num3);
    return 0;
}