#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cout << "Enter ist side : ";
    cin >> a;

    cout << "Enter second side : ";
    cin >> b;

    cout << "Enter third side : ";
    cin >> c;

    if((a + b) > c and (b + c) > a and (c + a) >b){
        cout << "Valid triangle !!" << endl;

    }
    else{
        cout << "Invalid triangle !!" << endl;
    }



    return 0;
}