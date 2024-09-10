#include <bits/stdc++.h>

using namespace std;

// void printName() {
//     cout << "Salik";
// }
// int main() {
// printName();
//     return 0;
// }

// TODO: Take 2 numbers and print its sum
int sum(int num1, int num2) {
    int num3 = num1 + num2;
    cout << "Sum of " << num1 << " and " << num2 << " is: " << num3 << endl;
    return num3;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    sum(num1, num2);
    return 0;
}