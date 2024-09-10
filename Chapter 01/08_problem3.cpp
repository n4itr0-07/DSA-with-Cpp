#include <bits/stdc++.h>

using namespace std;

int main() {
// Check weather number is even or odd

    int number;

    cout << "Enter a number: ";

    cin >> number;

    if(number % 2 == 0) {
        cout << number << " is an even number." << endl;

    }
    else{
        cout << number << " is an odd number." << endl;

    }



    return 0;
}