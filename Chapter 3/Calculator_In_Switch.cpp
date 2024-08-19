#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cout << "Enter Ist Number : ";
    cin >> a;

    cout << "Enter IInd Number : ";
    cin >> b;

    char op;
    cout << "Enter Operation (+, -, *, /, %) : ";
    cin >> op;

    switch (op) {
        case '+':
        cout << "Sum : " << a + b;
            break;
        case '-':
            cout << "Substraction : " << a - b;
            break;

        case '*':
        cout << "Multiplication : " << a * b;
            break;

        case '%':
        cout << "Modulo : " << a % b;
            break;

        case '/':
        cout << "Division : " << a / b;
        break;

        default:
        cout << "Invalid Operation!";
    }

return 0;

}