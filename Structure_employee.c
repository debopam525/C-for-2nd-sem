//Create a structure called "Employee" to store details such as Employee ID, name, salary.
//Write a C program to input data for three employees, find the highest salary of the employee
//and display that employee's information. (Use array of structures)

#include <stdio.h>
#include <string.h>
struct Employee {
    int id;
    char name[100];
    float s;
};
int main() {
    struct Employee e[3];
    int i, index=0;
    for(i=0;i<3;i++) {
        printf("Enter details for Employee %d: \n", i+1);
        printf("Employee ID: ");
        scanf("%d", &e[i].id);
        getchar();
        printf("Name: ");
        fgets(e[i].name, sizeof(e[i].name), stdin);
        printf("Salary: ");
        scanf("%f", &e[i].s);
    }
    for(i=1;i<3;i++) {
        if(e[i].s>e[index].s) {
            index=i;
        }
    }
    printf("***********Employee with Highest Salary***********\n");
    printf("Employee ID: %d\n", e[index].id);
    printf("Name: %s", e[index].name);
    printf("Salary: %.2f\n", e[index].s);
    return 0;
}