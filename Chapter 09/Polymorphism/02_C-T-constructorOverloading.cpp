#include <iostream>
#include <string>
using namespace std;

// Constructor Overloading

class Student{
public:
    string name;
    int age;
    int roll;
    float cgpa;

    // Constructor
    Student(){
        cout << "Default Constructor Called" << endl;
    }

    // Constructor
    Student(string s, int a, int r, float c){
        name = s;
        age = a;
        roll = r;
        cgpa = c;
    } // Parameterized Constructor

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s1; // Default Constructor Called
    s1.name = "Putin";
    s1.age = 69;
    s1.roll = 1;
    s1.cgpa = 4.0;
    s1.display();

    cout << endl;

    Student s2("Jony", 39, 2, 3.9);
    s2.display();
    cout << endl;

    Student s3("Trump", 70, 3, 3.5);
    s3.display();
    cout << endl;

    
    return 0;
}