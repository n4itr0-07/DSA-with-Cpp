#include <bits/stdc++.h>
using namespace std;

int main() {
    // TODO: Inverted Half Pyramid  n = 5 || Row 1 = 1 star, Row 2 = 2 Star, Row 3 = 3 Star ...

    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    // cout << "Enter number of columns: ";
    // cin >> col;

    // Loop to print inverted half pyramid

    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";

    }


 return 0;
}