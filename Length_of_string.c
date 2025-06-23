//Write a C function to find th length of a string and call the function from the main function.
//Do not use 'strlen' function in your program.
#include <stdio.h>
#include <string.h>
int length(char str[]) {
    int length=0;
    while(str[length]!='\0') {
        length++;
    }
    return length;
}
int main() {
    char str[1000];
    printf("Enter a string: ");
    gets(str);
    int len = length(str);
    printf("Length of the string is: %d\n", len);
    return 0;
}