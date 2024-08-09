#include <bits/stdc++.h>

using namespace std;

int main() {
    int num;
    cout << "******************************************************************************************************************************************************" << endl;

    cout << "Welcome to the Greatest Common Divisor (GCD) Calculator!" << endl;
    
    cout << "******************************************************************************************************************************************************" << endl;

    cout << "Enter Positive Integer : ";
    cin >> num;

    
    if ((num % 5 == 0 || num % 3 == 0) && (num % 15 != 0)){
        cout << "The number is divisible by 5 or 3 but not by 15." << endl;
    }
    else{
        cout << "The number is not divisible by 5 or 3 but is divisible by 15." << endl;
    }


    return 0;
}