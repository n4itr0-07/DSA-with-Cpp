#include <bits/stdc++.h>
using namespace std;


// Function to convert decimal to binary

int decToBinary(int decNum) {
    int ans = 0, pow = 1;

    while(decNum > 0) {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
}
int main() {
    int decNum = 50;

    cout << "Binary equivalent of " << decNum << " is: " << decToBinary(decNum);
    return 0;
}