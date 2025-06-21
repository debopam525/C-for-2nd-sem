//Write a C program to use functions to insert a sub-string into a given main string from a given position.
#include <stdio.h>
#include <string.h>
void insertSubstring(char *mainStr, const char *subStr, int position) {
    int mainLen = strlen(mainStr);
    int subLen = strlen(subStr);
    if (position < 0 || position > mainLen) {
        printf("Invalid position!\n");
        return;
    }
    char result[100]; 
    strncpy(result, mainStr, position);
    result[position] = '\0';
    strcat(result, subStr);
    strcat(result, mainStr + position);
    strcpy(mainStr, result);
}
int main() {
    char mainStr[100], subStr[50];
    int position;
    printf("Enter the main string: ");
    fgets(mainStr, sizeof(mainStr), stdin);
    mainStr[strcspn(mainStr, "\n")] = 0;
    printf("Enter the substring to insert: ");
    fgets(subStr, sizeof(subStr), stdin);
    subStr[strcspn(subStr, "\n")] = 0;
    printf("Enter the position to insert the substring: ");
    scanf("%d", &position);
    insertSubstring(mainStr, subStr, position);
    printf("Modified main string: %s\n", mainStr);
    return 0;
}