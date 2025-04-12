// Define a structure for a student's academic record that includes a nested structure for personal details (name, age, address).

#include <stdio.h>

struct personalDetails {
    char name[20];
    int age;
    char address[50];
};
struct studentDetails {
    struct personalDetails personal;
    int rollNumber;
    float marks;
};

int main () {
    struct studentDetails student;
    
    printf("Enter Name: ");
    scanf("%[^\n]", student.personal.name);
    printf("Enter Age: ");
    scanf("%d", &student.personal.age);
    getchar();
    printf("Enter Address: ");
    scanf("%[^\n]", student.personal.address);
    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNumber);
    printf("Enter Marks: ");
    scanf("%f", &student.marks);
    
    printf("\n--Student Details--\n");
    printf("Name - %s\n", student.personal.name);
    printf("Age -%d\n", student.personal.age);
    printf("Address - %s\n", student.personal.address);
    printf("Roll Number - %d\n", student.rollNumber);
    printf("Student Marks - %.2f\n", student.marks);
    
    return 0;
}