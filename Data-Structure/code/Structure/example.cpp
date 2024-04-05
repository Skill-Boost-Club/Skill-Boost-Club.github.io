// Example of a C++ program that uses a structure
#include <iostream>
#include <string>
using namespace std;

// Define a structure
struct Person {
    string name;
    int age;
    float salary;
};

int main() {
    // Declare a structure variable
    Person p1;

    // Assign values to members of the structure variable
    p1.name = "John";
    p1.age = 25;
    p1.salary = 25000.50;

    // Display the values of the structure variable
    cout << "Person Details" << endl;
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary << endl;

    return 0;
}