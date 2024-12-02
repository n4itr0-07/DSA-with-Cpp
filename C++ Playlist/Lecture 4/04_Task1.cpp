#include <iostream>
#include <string>
using namespace std;

//TODO: Challenge: Write a program that checks if the user wants to order Green Tea. If the user tpes "Green Tea. "the program should confirm their order.

int main() {
    string teaOrder;
    
    cout << "Enter your tea order: ";
    getline(cin, teaOrder);

    if(teaOrder == "Green Tea" ) {
        cout << "You have ordered Green Tea!!" << endl;

    }
    return 0;
}