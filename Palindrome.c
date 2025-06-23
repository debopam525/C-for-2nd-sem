//Write a C program to check if a string taken as input is a palindrome or not,
//without using string related functions supported by the compiler.
#include <stdio.h>
#include <string.h>
int main() {
    char string[100];
    int length=0, flag=1, i;
    printf("Enter a string: ");
    gets(string);
    for(i=0;string[i]!='\0';i++){
        length++;
    }
    for(i=0;i<length/2;i++){
        if(string[i]!=string[length-1-i]){
            flag=0;
            break;
        }
    }
    if(flag==1)
    printf("Palindrome");
    else
    printf("Not palindrome");
    return 0;
}