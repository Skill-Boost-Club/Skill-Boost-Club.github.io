// Example of a C program that uses a structure
#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    // Declare a structure variable
    struct Student student1;

    // Assign values to student1
    strcpy(student1.name, "John");
    student1.age = 21;
    student1.marks = 88.5;

    // Print student1 information
    printf("Student 1\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}