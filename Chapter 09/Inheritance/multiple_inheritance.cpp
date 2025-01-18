#include <iostream>
using namespace std;

// Multiple Inheritance

class Engine{
public:
    int power;
    int torque;
};

class Tyre{
public:
    int size;
    string type;
};

class Car : public Engine, public Tyre{
public:
    string name;
    int price;
    void display(){
        cout << "---Car Details---" << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Power: " << power << endl;
        cout << "Torque: " << torque << endl;
        cout << "Size: " << size << endl;
        cout << "Type: " << type << endl;
    }
};

int main() {
    Car c1;
    c1.name = "Audi";
    c1.price = 1000000;
    c1.power = 2000;
    c1.torque = 1500;
    c1.size = 18;
    c1.type = "Tubeless";
    c1.display();

    return 0;
}