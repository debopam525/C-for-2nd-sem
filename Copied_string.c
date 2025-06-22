//Write a C program to copy one string to another using pointer.
#include <stdio.h>
int main()
{
    char s[1000], d[1000];
    char *p, *q;
    printf("Enter a string to copy: ");
    fgets(s, sizeof(s), stdin);
    p=s;
    q=d;
    while(*p!='0')
    {
        *q=*p;
        p++;
        q++;
    }
    *q='\0';
    printf("Copied string: %s\n", d);
    return 0;
}