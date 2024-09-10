#include <bits/stdc++.h>
using namespace std;

int main() {
//TODO: Triangle Pattern Using Star
    // int n = 7;

    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < i + 1; j++) {
    //         cout << "* ";

    //     }
    //     cout << endl;
    // }

//TODO: Triangle Pattern Using Numbers

    // int n = 10;
    // int num = 1;

    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < i + 1; j++) {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

//TODO: Triangle Pattern Using Alphabet

    int n = 7;
    char ch = 'A';

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}