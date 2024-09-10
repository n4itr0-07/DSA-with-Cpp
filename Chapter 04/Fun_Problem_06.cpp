// Implement a function in C++ to calculate the power of a number raised to an exponent using recursion. Write a program to take input from the user and output the result.
// Input: Base = 2, Exponent = 5
// Output: 32

#include <iostream>
using namespace std;

// Recursive function to calculate power
int power(int base, int exponent) {
    if (exponent == 0)
        return 1; // Base case: anything raised to the power of 0 is 1
    else
        return base * power(base, exponent - 1); // Recursive call
}

int main() {
    int base, exponent;

    // Taking input from user
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    // Calling the recursive function
    int result = power(base, exponent);

    // Displaying the result
    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
}
