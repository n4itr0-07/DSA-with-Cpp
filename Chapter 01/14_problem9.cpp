#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // TODO: Nested Statements

    if (a > b){
        if (a > c) cout << a << "is greatest number ";
        else{
            cout << c << "is greatest number ";
        }

    }

    else{
        if ( b > c){
            cout << b << " is greatest number ";
        }
        else{
            cout << c << " is greatest number ";
        }

    }


    return 0;
}