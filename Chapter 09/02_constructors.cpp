#include <iostream>
using namespace std;

class Student{ // Student is a new data type
public:
    string name;
    int age;
    int roll;
    float cgpa;

    // Constructor
    Student(string s, int a, int r, float c){

        name = s;
        age = a;
        roll = r;
        cgpa = c;
       // cout << "Constructor Called" << endl;
    }

    // Destructor
    // ~Student(){
    //     cout << "Destructor Called" << endl;
    // }

};

//TODO: We can create multiple classes with constructor.

class Car{
public:
    string name;
    string color;
    int price;


    // Car(){ // This is called Default Constructor, it is called when we create an object of a class automatically. 
    //     cout << "Default Constructor Called" << endl;
    // }

    // Constructor
    Car(string n, string c, int p){ // This is called Parameterized Constructor
        name = n;
        color = c;
        price = p;
    }
};

int main() {
    Student s1("Putin", 69, 1, 4.0); // Constructor Called  

    // s1.age = 69;
    // s1.name = "Putin";
    // s1.roll = 1;
    // s1.cgpa = 4.0;

    cout << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Roll: " << s1.roll << endl;
    cout << "CGPA: " << s1.cgpa << endl;

    cout << "-------------" << endl;
    
    // Copy Constructor
Student s2 = s1; // Copy Constructor Called. This performs a shallow copy by default.

// Difference between Shallow Copy and Deep Copy:
// - Shallow Copy: Copies the **address** of the data members, not the actual data itself.
//   For example, if the class has pointers, both objects will point to the same memory.
// - Deep Copy: Copies the **value** of the data members, including dynamically allocated memory.
//   Each object gets its own independent copy of the data.

s2.name = "Jony"; // This modifies the `name` of s2 only. Since `name` is likely a string or non-pointer, it works as expected.

s2.age = 39; // This modifies the `age` of s2 only. Again, works fine for non-pointer data members.

s2.roll = 2; // No impact on s1. These are non-pointer variables, so changes are independent.

s2.cgpa = 3.9; // Similarly, this change affects s2 only.

cout << "Name: " << s2.name << endl;
cout << "Age: " << s2.age << endl;
cout << "Roll: " << s2.roll << endl;
cout << "CGPA: " << s2.cgpa << endl;

    cout << "-------------" << endl;

    Car c1("BMW", "Black", 1000000);
    cout << "Name: " << c1.name << endl;
    cout << "Color: " << c1.color << endl;
    cout << "Price: " << c1.price << endl;
    cout << endl;

    return 0;
}
// pascal case variable name = PascalCaseVariableName
// camel case variable name = camelCaseVariableName
// snake case variable name = snake_case_variable_name
// kebab case variable name = kebab-case-variable-name