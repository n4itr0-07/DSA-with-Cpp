#include <bits/stdc++.h>
using namespace std;

int main() {
    // TODO: Half Pyramid After 180° Rotation n = 5
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    // cout << "Enter number of columns: ";
    // cin >> col;

    // Loop to print inverted half pyramid

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            // Print spaces
            if(j <= n - i) {
                cout << "  ";
            } else {
                // Print asterisks
                cout << "* ";
            }

        }
        cout << endl;
    }
 return 0;
}