//Write a C program to copy the content of one file to another file.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char ch;
    FILE *fp=NULL, *fp1=NULL;
    fp=fopen("source.txt", "r");
    fp1=fopen("destination.txt", "w");
    if(fp==NULL) {
        printf("Error");
        exit(1);
    }
    while((ch=fgetc(fp))!=EOF) {
        fputc(ch,fp1);
    }
    fclose(fp);
    fclose(fp1);
    printf("File copied successfully.\n");
    return 0;
}