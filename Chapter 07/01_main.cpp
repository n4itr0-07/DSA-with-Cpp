// Complete File Handling In C++ Tutorial

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    int choice;

    cout << "Select a tea type: " << endl;
    cout << "1. Green Tea" << endl;
    cout << "2. Black Tea" << endl;
    cout << "3. Lemon Tea" << endl;
    cout << "4. Ginger Tea" << endl;
    cout << "5. Honey Tea" << endl;
    cout << "6. Mint Tea" << endl;
    cout << "7. Other" << endl;

    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Green Tea: $2" << endl;
        break;
    case 2:
        cout << "Black Tea: $3" << endl;
        break;
    case 3:
        cout << "Lemon Tea: $4" << endl;
        break;
    case 4:
        cout << "Ginger Tea: $5" << endl;
        break;
    case 5:
        cout << "Honey Tea: $6" << endl;
        break;
    case 6:
        cout << "Mint Tea: $7" << endl;
        break;
    default:
        cout << "Other: $1" << endl;
        break;
    }

    ofstream file("tea.txt");
    if (file.is_open()) {
        file << "Tea Type: " << choice << endl;
        file.close();
    }
    else {
        cout << "Unable to open file" << endl;
    }

    return 0;
}