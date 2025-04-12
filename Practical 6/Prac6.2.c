// Define a structure for employee details (ID, name, salary) and use an array of structures to store and display details of 5 employees.

#include <stdio.h>

struct employeeDetails {
    int id;
    char name[20];
    float salary;
};

int main () {
    struct employeeDetails employee[5];
    
    for(int i = 0; i < 5; i++){
        printf("Enter %d Employee ID: ", i+1);
        scanf("%d", &employee[i].id);
        printf("Enter %d Employee Name: ", i+1);
        scanf("%s", employee[i].name);
        printf("Enter %d Employee Salary: ", i+1);
        scanf("%f", &employee[i].salary);
    }
    
    printf("\n--Employee Details--\n");
    for(int i = 0; i < 5; i++){
        printf("ID: %d\n", employee[i].id);
        printf("Name: %s\n", employee[i].name);
        printf("Salary: %.2f", employee[i].salary);
    }
    
    return 0;
}