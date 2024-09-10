#include <bits/stdc++.h>
using namespace std;

int main() {
// Check if a number is prime or not

    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    bool flag = 0;

    for(int i =2; i <= sqrt(n); i++) {
        if(n % 2 == 0){
            cout << n << " is not a prime number." << endl;
            flag = 1;
            break;
        }
    }

    if  (flag == 0) {
        cout << n << " is a prime number." << endl;
    }


    return 0;
}