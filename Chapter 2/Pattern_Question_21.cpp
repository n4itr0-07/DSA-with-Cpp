#include <bits/stdc++.h>
using namespace std;

//TODO: Hollow Diamond Pattern
int main() {

    int n = 8;

    for(int i = 0; i < n; i++) {
        //spaces
        for(int j = 0; j < (n - i - 1); j++) {
            cout << " ";
        }

        cout << "*";

        if(i != 0) {
            // Spaces
            for(int j = 0; j < (2 * i - 1); j++){
                cout << " ";
            }
            
            cout << "*";
        }    
        cout << endl;
    }

    //Bottom
    for(int i = 0; i < n-1; i++) {
        //spaces
        for(int j = 0; j < i + 1; j++) {
            cout << " ";
        }
        cout << "*";

        if(i != n -2) {
            //spaces
            for(int j = 0; j < 2*(n - i)-5; j++) {
            cout << " ";
        }
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}