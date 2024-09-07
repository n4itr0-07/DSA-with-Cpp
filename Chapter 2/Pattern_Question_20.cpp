#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 4;
    for(int i = 0; i < n; i++) {
        // spaces : n-i-1
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        // num1 = i+1
        for(int j = 1; j <= i + 1; j++) {
            cout << j ;
        }
        // num2
        for(int j = i - 1; j > 0; j--) {
            cout << j ;
        }
        cout << endl;
    }

    return 0;
}