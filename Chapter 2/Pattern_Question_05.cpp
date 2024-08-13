#include <bits/stdc++.h>
using namespace std;

int main() {

// TODO: Half Pyramid Using Numbers | n = 5 " Print Row Number In Place Of Stars"

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i<< " ";
        }
        cout << endl;

    }

    return 0;
}