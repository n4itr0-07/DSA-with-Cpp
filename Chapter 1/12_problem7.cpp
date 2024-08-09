#include <bits/stdc++.h>

using namespace std;

int main() {
 
    int x, y, z;
    cout << "******************************************************************************************************************************************************" << endl;
    cout << "Welcome to the Smallest Number Finder!" << endl;
    cout << "This program will find and display the smallest number among three inputted numbers." << endl;
    cout << "******************************************************************************************************************************************************" << endl;
    cout << "Enter Ist Number : " ;
    cin >> x;

    cout << "Enter IInd Number : " ;
    cin >> y;

    cout << "Enter IIIrd Number : ";
    cin >> z;

    if (x < y && x < z){
        cout << "The smallest number is : " << x << endl;
    }
    else if (y < z && y < x){
        cout << "The smallest number is : " << y << endl;
    }
    else {
        cout << "The smallest number is : " << z << endl;
    }

    return 0;
}