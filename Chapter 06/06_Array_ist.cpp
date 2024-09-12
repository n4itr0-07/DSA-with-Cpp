#include <bits/stdc++.h>
using namespace std;

int main() {
    // int marks[5] = {99, 100, 98, 95, 96};
    // int size = 5;

    // cout << marks[4] << endl;
    // cout << marks[3] << endl;
    // cout << marks[2] << endl;
    // cout << marks[1] << endl;
    // cout << marks[0] << endl;

//TODO: Now we will take input from user
    int size = 5;
    int marks[size];

    for(int i = 0; i < size; i++) {
        cin >> marks[i];
    }
    // int sz = sizeof(marks);
    // cout << "===============================" << endl;
    // cout << sz << endl; // int = 4 bytes 4 * 5 = 20
    // cout << "===============================" << endl;

    // for loop
    for(int i = 0; i < size; i++) {
        cout << marks[i] << endl;
    }

    return 0;
}