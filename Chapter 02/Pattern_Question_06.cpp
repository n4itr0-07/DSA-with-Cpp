#include <bits/stdc++.h>
using namespace std;

int main() {
// TODO: Floyd's Triangle

    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;

    int count = 1;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << count<< " ";
            count++;
        }
        cout << endl;
    }

 return 0;
}