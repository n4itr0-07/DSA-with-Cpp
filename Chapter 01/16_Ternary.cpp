#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your number : ";
    cin >> n;

// But we want short method because i am lazy
    // if (n % 2 == 0) {
    //     cout << "The number is even." << endl;
    // } else {
    //     cout << "The number is odd." << endl;
    // }

// Using ternary operator

    (n % 2 == 0)? cout << "The number is even." : cout << "The number is odd.";

    return 0;
}
