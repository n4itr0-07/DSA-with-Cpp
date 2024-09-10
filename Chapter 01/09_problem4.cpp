// Write a C++ program that checks if a number entered by the user is even or odd.

#include <bits/stdc++.h>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    switch (num % 2)
    {
        case 0:
        cout << num << " is even." << endl;
            break;
        
        case 1:
        case -1:
            cout << num << " is odd." << endl;
            break;
        
        default:
        cout << "Invalid input. Please enter a numeric value." << endl;
        
    }

    return 0;
}