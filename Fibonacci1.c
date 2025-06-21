//First n terms of Fibonacci series
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int f0=0;
    int f1=1;
    printf("First %d terms of Fibonacci series are:\n", n);
    int i=0;
    while(i<n)
    {
        printf("%d ", f0);
        int f=f0+f1;
        f0=f1;
        f1=f;
        i++;
    }
    return 0;
}