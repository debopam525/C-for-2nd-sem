//Write a C program to find the length of a string using pointer.

#include <stdio.h>
int main() {
    char s[1000];
    char *p;
    int length=0;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    p=s;
    while(*p!='\0'&&*p!='\n') {
        length++;
        p++;
    }
    printf("Length of the string: %d\n", length);
    return 0;
}