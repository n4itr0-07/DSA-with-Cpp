#include <iostream>
using namespace std;

struct Car {
    string model;
    int year;
    double price;
};

int main() {
    // Initialization using curly braces
    Car car1 = {"Tesla Model S", 2020, 79999.99};

    // Output the structure fields
    cout << "Model: " << car1.model << endl;
    cout << "Year: " << car1.year << endl;
    cout << "Price: $" << car1.price << endl;

    return 0;
}
