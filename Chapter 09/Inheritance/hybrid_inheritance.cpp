#include <iostream>
using namespace std;

// Base Class
class Vehicle {
public:
    int wheels;
    void displayVehicle() {
        cout << "Number of wheels: " << wheels << endl;
    }
};

// Derived Class 1 (Single Inheritance)
class Car : public Vehicle {
public:
    string carType;
    void displayCar() {
        cout << "---Car Details---" << endl;
        displayVehicle(); // Reusing the base class function
        cout << "Car Type: " << carType << endl;
    }
};

// Derived Class 2 (Single Inheritance)
class Bike : public Vehicle {
public:
    bool hasCarrier;
    void displayBike() {
        cout << "---Bike Details---" << endl;
        displayVehicle(); // Reusing the base class function
        cout << "Has Carrier: " << (hasCarrier ? "Yes" : "No") << endl;
    }
};

// Another Base Class
class Electric {
public:
    int batteryCapacity; // In kWh
    void displayElectric() {
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

// Derived Class 3 (Hybrid Inheritance: Inherits from Car and Electric)
class ElectricCar : public Car, public Electric {
public:
    int chargingTime; // In hours
    void displayElectricCar() {
        cout << "---Electric Car Details---" << endl;
        displayCar(); // Reusing the Car class function
        displayElectric(); // Reusing the Electric class function
        cout << "Charging Time: " << chargingTime << " hours" << endl;
    }
};

int main() {
    // Creating an ElectricCar object
    ElectricCar eCar;
    eCar.wheels = 4; // From Vehicle class
    eCar.carType = "Sedan"; // From Car class
    eCar.batteryCapacity = 75; // From Electric class
    eCar.chargingTime = 5; // From ElectricCar class

    eCar.displayElectricCar();

    // Creating a Bike object
    Bike bike;
    bike.wheels = 2; // From Vehicle class
    bike.hasCarrier = true; // From Bike class

    bike.displayBike();

    return 0;
}
