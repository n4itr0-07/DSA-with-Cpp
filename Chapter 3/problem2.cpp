// Write a C++ program to generate a multiplication table for a given number using a for loop.

#include <bits/stdc++.h>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for(int i = 1; i <= 10; ++i)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }



    return 0;
}