#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    for(int i = 1; i <=  n; i++) { // Outer loop
        for(int j = 1; j <= n; j++) { // Inner loop
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
    // From this question i am following Apna College Lectures

}