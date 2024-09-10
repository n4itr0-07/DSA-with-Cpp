#include <bits/stdc++.h>
using namespace std;

int main() {
    // Check if a number is Armstrong number or not

    int n;

    cout << "Enter a number: ";
    cin >> n;

    int sum = 0, temp = n; // Store original value in temp

    while (n > 0) {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n /= 10;
    }

    if (sum == temp) {
        cout << temp << " is an Armstrong number." << endl;
    } else {
        cout << temp << " is not an Armstrong number." << endl;
    }

    return 0;
}
