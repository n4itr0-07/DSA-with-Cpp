#include <bits/stdc++.h>

using namespace std;
// Function Declaration
int add(int a, int b);


int main() {
    int num1 = 4, num2 = 6;
    // Function Call
    int sum = add(num1, num2);
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    return 0;
}
// Function Definition
int add (int a, int b){
    return a + b; // Returns sum of a and b
}