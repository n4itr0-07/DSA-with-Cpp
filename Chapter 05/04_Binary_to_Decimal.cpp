#include <bits/stdc++.h>
using namespace std;


int binTODecimal(int binNum) {
    int ans = 0, pow = 1;

    while(binNum > 0) {
        int rem = binNum % 10;
        ans += rem * pow;

        binNum /= 10;
        pow *= 2;
    }
    return ans; //Decimal Form
}

int main() {
    int n;
    cout << "Enter a binary number: ";
    cin >> n;
    cout << "Decimal equivalent: " << binTODecimal(n);
    return 0;
    // Output: Decimal equivalent: 10101
    // Note: This function works for binary numbers up to 10^9.
}