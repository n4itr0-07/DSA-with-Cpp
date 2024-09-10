#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout << "Enter The Number : ";
    cin >> n;
    bool isPrime = true;  // Initialize isPrime to true

    for(int i = 2; i <= n - 1; i++) {
        
        if(n % i == 0) {  // If divisible by any number other than 1 and itself
         isPrime = false;
         break;
                
        }
        
    }
    if (isPrime == true) {
        cout << n << " is a prime number";
    } else {
        cout << n << " is not a prime number";
    }

    return 0;
}
