#include <iostream>
using namespace std;
// Bite wise operator.

int main() {
    int a = 5; // 101
    int b = 9; // 1001

    cout << (a & b) << endl; // 5
    cout << (a | b) << endl; // 13
    cout << (a ^ b) << endl; // 8
    cout << (a << 1) << endl; // 10
    cout << (b >> 1) << endl; // 4

    return 0;
}