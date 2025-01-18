#include <iostream>
using namespace std;

// Hierarchical Inheritance
class fourWheeler{ // Derived or Parent Class
public:
    int topSpeed;
    int mileage;
};

class Car : public fourWheeler{ // Child Class 1
public:
    int price;
    void displayCar(){
        cout << "---Car Details---" << endl;
        cout << "Top Speed: " << topSpeed << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

class Bike : public fourWheeler{ // Child Class 2
public:
    int cc;
    int gears;
    void displayBike(){
        cout << "---Bike Details---" << endl;
        cout << "Top Speed: " << topSpeed << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "CC: " << cc << endl;
        cout << "Gears: " << gears << endl;
    }
};

int main() {
    Car c1;
    c1.topSpeed = 120;
    c1.mileage = 50;
    c1.price = 100000;
    c1.displayCar();

    Bike b1;
    b1.topSpeed = 120;
    b1.mileage = 50;
    b1.cc = 150;
    b1.gears = 5;
    b1.displayBike();

    return 0;
}