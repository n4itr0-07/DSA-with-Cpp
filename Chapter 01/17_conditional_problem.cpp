#include <bits/stdc++.h>

using namespace std;

int main() {
    char ch;
    cout << "Enter character : ";

    cin >> ch;

    if(ch >= 'a' && ch <= 'z') {
        cout << "Character is lowercase." << endl;

    } else if(ch >= 'A' && ch <= 'Z') {
        cout << "Character is uppercase." << endl;

    } else {
        cout << "Character is neither uppercase nor lowercase." << endl;
    }




    return 0;
}