# B125126
OOPS LAB 1 QUESTIONS
#1.Create a structure containing Roll Number, Name, Age, and CGPA, then accept and display details for one student.

#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    int age;
    float cgpa;
};

int main() {
    struct Student s1;
    printf("Enter Roll Number: ");
    scanf("%d", &s1.rollNumber);
    printf("Enter Name: ");
    scanf(" %[^\n]s", s1.name); 
    printf("Enter Age: ");
    scanf("%d", &s1.age);
    printf("Enter CGPA: ");
    scanf("%f", &s1.cgpa); 

   printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s1.rollNumber);
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("CGPA: %.2f\n", s1.cgpa);

  return 0;
}
