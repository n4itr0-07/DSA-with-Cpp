#include <bits/stdc++.h>

using namespace std;

int main() {
// Sum of all numbers from 1 to n which are divisible by 3

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    cout << "Sum of all numbers from 1 to " << n << " which are divisible by 3: " << sum << endl;



    return 0;
}

//TODO: Factorial of n numbers

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     long long factorial = 1;

//     // Input a non-negative integer
//     cout << "Enter a non-negative integer: ";
//     cin >> n;

//     // Check for the special case of 0
//     if (n == 0) {
//         factorial = 1;
//     } else {
//         // Calculate factorial
//         for (int i = 1; i <= n; i++) {
//             factorial *= i;
//         }
//     }

//     // Output the result
//     cout << "Factorial of " << n << " is " << factorial << endl;

//     return 0;
// }
