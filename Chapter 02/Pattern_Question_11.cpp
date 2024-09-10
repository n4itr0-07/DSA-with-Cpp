#include <bits/stdc++.h>

using namespace std;

int main() {
// Number Pattern
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1;j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j<= i; j++){
            cout <<j<< " ";
        }
        cout <<endl;

    }


    return 0;
}