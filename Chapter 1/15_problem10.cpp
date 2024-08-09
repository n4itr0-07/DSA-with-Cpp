// TODO: if the ages of ram, shyam and ajay are input through the keyboard. Write a program to determine the youngest of the three in cpp
#include <iostream>
using namespace std;

int main() {
    int ageRam, ageShyam, ageAjay;

    // Input the ages of Ram, Shyam, and Ajay
    cout << "Enter the age of Ram: ";
    cin >> ageRam;

    cout << "Enter the age of Shyam: ";
    cin >> ageShyam;

    cout << "Enter the age of Ajay: ";
    cin >> ageAjay;

    // Determine the youngest
    if(ageRam < ageShyam && ageRam < ageAjay) {
        cout << "Ram is the youngest." << endl;
    } else if(ageShyam < ageRam && ageShyam < ageAjay) {
        cout << "Shyam is the youngest." << endl;
    } else if(ageAjay < ageRam && ageAjay < ageShyam) {
        cout << "Ajay is the youngest." << endl;
    } else {
        cout << "Two or more people have the same youngest age." << endl;
    }

    return 0;
}
