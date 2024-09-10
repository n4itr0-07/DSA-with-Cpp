#include <iostream>
using namespace std;

// Define a structure named 'Person'
struct Person {
    string name;
    int age;
    float height;
};

int main() {
    // Create a variable of type Person
    Person person1;

    // Assign values to the fields
    person1.name = "John Doe";
    person1.age = 30;
    person1.height = 5.9;

    // Access and print the fields
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height: " << person1.height << " feet" << endl;

    return 0;
}
