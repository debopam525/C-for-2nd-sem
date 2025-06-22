//Addition using pointers
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two integers: \n");
    scanf("%d %d", &a, &b);
    int *p1=&a, *p2=&b;
    int sum=*p1+*p2;
    printf("Sum = %d", sum);
    return 0;
}
