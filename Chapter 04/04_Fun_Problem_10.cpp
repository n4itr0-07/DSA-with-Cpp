//TODO: Calculate nCr binomial coefficient for n & r

#include <iostream>
using namespace std;


int factorial(int n) {
    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n - r);

    return fact_n / (fact_r * fact_n_r);
}

int main() {
    int n = 8;
    int r = 2;
    nCr(n, r);
    cout << "nCr(" << n << ", " << r << ") = " << nCr(n, r);
    return 0;
}