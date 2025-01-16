#include <iostream>
using namespace std;

// Example 1: Distinguishing Between Data Members and Parameters
class Student {
private:
    string name;
    int age;

public:
    // Constructor with parameter names same as data members
    Student(string name, int age) {
        this->name = name; // `this->name` refers to the data member
        this->age = age;   // `age` refers to the parameter
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Example 2: Returning the Current Object (Method Chaining)
class Example {
private:
    int value;

public:
    Example& setValue(int value) {
        this->value = value; // Assign the parameter to the data member
        return *this;        // Return the current object
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

// Example 3: Accessing the Current Object's Address
class AddressExample {
public:
    void showAddress() {
        cout << "Address of current object: " << this << endl;
    }
};

int main() {
    // Section 1: Distinguishing Between Data Members and Parameters
    cout << "=== Example 1: Distinguishing Between Data Members and Parameters ===" << endl;
    Student s1("John", 20);
    s1.display();

    // Section 2: Returning the Current Object (Method Chaining)
    cout << "\n=== Example 2: Returning the Current Object ===" << endl;
    Example obj;
    obj.setValue(42).display();

    // Section 3: Accessing the Current Object's Address
    cout << "\n=== Example 3: Accessing the Current Object's Address ===" << endl;
    AddressExample obj1, obj2;
    obj1.showAddress();
    obj2.showAddress();

    return 0;
}
