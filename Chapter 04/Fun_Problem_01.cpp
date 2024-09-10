#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; // Handle numbers <= 1
    if (num == 2) return true;  // 2 is prime

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;

    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            cout << i <<" is Prime Number "<< endl;
        }
    }

    return 0;
}
