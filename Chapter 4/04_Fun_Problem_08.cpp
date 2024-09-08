//TODO: Calculate N Factorial

#include <iostream>
using namespace std;

// Function to calculate factorial
int factorialN(int n) {
    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    cout << factorialN(4) << endl;
    cout << factorialN(5) << endl;
    return 0;
}