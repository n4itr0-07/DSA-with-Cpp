#include <bits/stdc++.h>
using namespace std;


//TODO: Inverted Triangle Pattern

int main() {

    int n = 4;
    int num = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            cout << " ";
        }

        for(int j = 0; j < n - i; j++) {
            cout << (i + 1);
        }
        cout << endl;
    }
    return 0;
}