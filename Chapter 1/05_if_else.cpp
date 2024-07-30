#include <bits/stdc++.h>

using namespace std;

// Write a program that take input of age 
// and prints if you are adult or not

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // Check if the age is greater than or equal to 18
    if (age >= 18) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are not an adult." << endl;
    }

    return 0;
}