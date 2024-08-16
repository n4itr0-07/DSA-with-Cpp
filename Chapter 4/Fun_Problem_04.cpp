#include <bits/stdc++.h>
using namespace std;


int sum(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++){
        ans += i;  // Add the current number to the sum
        return ans;
    }
}





int32_t main() {

    // Sum of first n natural numbers
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << sum(n) << endl;

    return 0;
}