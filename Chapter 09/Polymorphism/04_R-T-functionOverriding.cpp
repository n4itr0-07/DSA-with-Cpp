#include <iostream>
using namespace std;


class Animal {
public:
    // Virtual function: Can be overridden in derived classes
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }

    // Non-virtual function: Cannot be overridden
    void eat() {
        cout << "Animal eats food." << endl;
    }
};

class Dog : public Animal {
public:
    // Override the virtual function from the base class
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    // Override the virtual function from the base class
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal* animalPtr; // Base class pointer

    Dog dog;
    Cat cat;

    // Using the base class pointer to call overridden functions
    animalPtr = &dog;
    animalPtr->sound(); // Output: Dog barks.

    animalPtr = &cat;
    animalPtr->sound(); // Output: Cat meows.

    // Calling a non-virtual function (not overridden)
    animalPtr->eat(); // Output: Animal eats food.

    return 0;
}
