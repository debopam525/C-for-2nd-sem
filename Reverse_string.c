//Write a C program to find the reverse of a string using pointer.
#include <stdio.h>
int main() {
    char s[1000];
    char *p, *q;
    int length = 0;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    p=s;
    while(*p != '\0' && *p != '\n') {
        length++;
        p++;
    }
    p--;
    q = s;
    printf("Reversed string: ");
    while(length > 0) {
        printf("%c", *p);
        p--;
        length--;
    }
    printf("\n");
    return 0;
}