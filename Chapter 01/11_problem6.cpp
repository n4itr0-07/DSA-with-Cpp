#include <bits/stdc++.h>

using namespace std;
// Take 3 positive integers input and print the greatest of them.
int main() {

    int a, b, c;
    cout << "******************************************************************************************************************************************************" << endl;
    cout << endl;

    cout << "Enter ist numbers: ";
    cin >> a;

    cout << "Enter two numbers: ";
    cin >> b;

    cout << "Enter third number: ";
    cin >> c;

    // Using the ternary operator to find the greatest number.
    // int greatest = (a > b)? ((a > c)? a : c) : ((b > c)? b : c);
    // cout << "The greatest number is: " << greatest << endl;
    if (a > b && a > c){
        cout << "The greatest number is: " << a << endl;

    }
    else if (b > a && b > c){
        cout << "The greatest number is: " << b << endl;
    }
    else{
        cout << "The greatest number is: " << c << endl;
    }

    return 0;
}