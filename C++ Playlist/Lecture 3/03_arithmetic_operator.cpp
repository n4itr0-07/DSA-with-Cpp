// Challenge: Create a program that calculates the total price of tea cups. The user inputs the number of cups they want anf the price per cup. THe program should calculate the total price, apply a 5% discount if the total is above a certain amount, and show the final price.

#include <iostream>
using namespace std;


int main() {
    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "Enter the number of team cups: ";
    cin >> cups;
    
    cout << "Enetr the price per cups: ";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    // apply 5% discount if total price is above 100

    if (totalPrice > 100) {
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discounted price is: " << discountedPrice << endl;
    } else {
        cout << "Total price is: " << totalPrice << endl;

    }

    return 0;

}