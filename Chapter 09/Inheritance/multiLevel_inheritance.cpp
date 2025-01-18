#include <iostream>
using namespace std;

// Multi-Level Inheritance

class Scooty{ // Derived or Parent Class
public:
    int topSpeed;
    int mileage;
};

class Bike  : public Scooty{ // Child Class. Inherits from Scooty
public:
    int cc;
    int gears;

    void display(){
        cout << "Top Speed: " << topSpeed << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "CC: " << cc << endl;
        cout << "Gears: " << gears << endl;
    }
};

class Pulsar : public Bike{ // Child Class. Inherits from Bike
public:
    int price;
    void displayPulsar(){
        cout << "---Pulsar Details---" << endl;
        cout << "Top Speed: " << topSpeed << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "CC: " << cc << endl;
        cout << "Gears: " << gears << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Pulsar p1;
    p1.topSpeed = 120;
    p1.mileage = 50;
    p1.cc = 150;
    p1.gears = 5;
    p1.price = 100000;
    p1.displayPulsar();

    return 0;
}

