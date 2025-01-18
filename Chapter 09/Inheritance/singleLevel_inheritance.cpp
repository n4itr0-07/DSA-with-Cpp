#include <iostream>
using namespace std;

class Scooty{ // Derived or Parent Class
public:
    int topSpeed;
    int mileage;
};

class Bike : public Scooty{ // Child Class
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

int main() {
    Bike b1;
    b1.topSpeed = 120;
    b1.mileage = 50;
    b1.cc = 150;
    b1.gears = 5;
    b1.display();

    return 0;
}