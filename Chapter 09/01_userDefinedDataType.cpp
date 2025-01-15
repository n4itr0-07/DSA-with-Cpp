#include <bits/stdc++.h>
using namespace std;

class Student{ // Student is a new data type
public:
    string name;
    int age;
    int roll;
    float cgpa;

};
    //TODO: We can create multiple classes

// class Teacher{
// public:
//     string name;
//     int age;
//     int id;
//     string subject;
// };


int main() {
    Student s1;
    // s1.age = 69;
    // s1.name = "Putin";
    // s1.roll = 1;
    // s1.cgpa = 4.0;


    // We Can Also Take Input From User
    cout << "Enter Name: ";
    cin >> s1.name;
    cout << "Enter Age: ";
    cin >> s1.age;
    cout << "Enter Roll: ";
    cin >> s1.roll;
    cout << "Enter CGPA: ";
    cin >> s1.cgpa;


    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Roll: " << s1.roll << endl;
    cout << "CGPA: " << s1.cgpa << endl;

    // Student s2;
    // s2.age = 39;
    // s2.name = "Jony";
    // s2.roll = 2;
    // s2.cgpa = 3.9;

    // cout << "Name: " << s2.name << endl;
    // cout << "Age: " << s2.age << endl;
    // cout << "Roll: " << s2.roll << endl;
    // cout << "CGPA: " << s2.cgpa << endl;


    return 0;
}