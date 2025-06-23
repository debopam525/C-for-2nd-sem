//Create a structure called "Student" with members name, age and total marks.
//Write a C program to input data for a student, display the students' information.

#include <stdio.h>
#include <string.h>
struct Student {
    char name[100];
    int age;
    float tm;
};
int main() {
    struct Student s;
    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter age: ");
    scanf("%d", &s.age);
    printf("Enter total marks: ");
    scanf("%f", &s.tm);
    printf("***********Student Information***********\n");
    printf("Name: %s", s.name);
    printf("Age: %d\n", s.age);
    printf("Total marks: %.2f\n", s.tm);
    return 0;
}