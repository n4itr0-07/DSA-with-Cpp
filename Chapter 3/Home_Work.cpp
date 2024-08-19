#include <iostream>
using namespace std;

int main() {
    int amount = 1330; // Total amount
    int hundred, fifty, twenty, ten;

    switch (amount >= 100) {
        case 1: // If the amount is greater than or equal to 100
            hundred = amount / 100; // Calculate the number of 100 notes
            amount = amount % 100;  // Update the amount
            break;
        default:
            hundred = 0;
    }

    switch (amount >= 50) {
        case 1: // If the amount is greater than or equal to 50
            fifty = amount / 50; // Calculate the number of 50 notes
            amount = amount % 50; // Update the amount
            break;
        default:
            fifty = 0;
    }

    switch (amount >= 20) {
        case 1: // If the amount is greater than or equal to 20
            twenty = amount / 20; // Calculate the number of 20 notes
            amount = amount % 20; // Update the amount
            break;
        default:
            twenty = 0;
    }

    switch (amount >= 10) {
        case 1: // If the amount is greater than or equal to 10
            ten = amount / 10; // Calculate the number of 10 notes
            amount = amount % 10; // Update the amount
            break;
        default:
            ten = 0;
    }

    // Display the number of notes
    cout << "100 Rupee Notes: " << hundred << endl;
    cout << "50 Rupee Notes: " << fifty << endl;
    cout << "20 Rupee Notes: " << twenty << endl;
    cout << "10 Rupee Notes: " << ten << endl;

    return 0;
}
