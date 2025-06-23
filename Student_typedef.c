//Write the Structure_student.c code using typedef keyword.
#include <stdio.h>
#include <string.h>
typedef struct {
    char name[100];
    int age;
    float tm[3];
} Student;
int main() {
    Student s;
    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter age: ");
    scanf("%d", &s.age);
    printf("Enter the marks of three subjects: ");
    for(int i=0;i<3;i++) {
        scanf("%f", &s.tm[i]);
    }
    printf("***********Student Information***********\n");
    printf("Name: %s", s.name);
    printf("Age: %d\n", s.age);
    float ts=0;
    for(int i=0;i<3;i++) {
        ts=ts+s.tm[i];
    }
    printf("Total sum of marks: %f\n", ts);
    return 0;
}