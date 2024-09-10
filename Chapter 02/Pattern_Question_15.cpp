#include <bits/stdc++.h>
using namespace std;

int main() {

    //TODO: Number Form Pattern
    // int n;

    // cout << "Enter the number of elements: ";
    // cin >> n;

    // for(int i = 1; i <=  n; i++) { // Outer loop
    //     for(int j = 1; j <= n; j++) { // Inner loop
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;
    // // From this question i am following Apna College Lectures
//TODO: Alphabet form pattern
    int x;

    cout << "Enter a number: ";
    cin >> x;

    for(int i = 0; i < x; i++) { // Outer loop
        char ch = 'A';
        for(int j = 0; j < x; j++) {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
    return 0;
}