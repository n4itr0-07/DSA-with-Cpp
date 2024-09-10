#include <bits/stdc++.h>

using namespace std;

int fact (int n) {
    int factorial =1;
    for(int i = 2; i <= n; i++) {
        factorial *= i;
    }
    return factorial;

}


int main() {

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int ans = fact(n);
    cout << "Factorial of " << n << " is: " << ans << endl;


    return 0;
}