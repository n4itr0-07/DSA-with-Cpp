# Object-Oriented Programming (OOP) in C++

## **What is Object-Oriented Programming (OOP)?**
OOP is a programming paradigm based on the concept of "objects." Objects represent real-world entities and contain:

- **Data** (attributes/properties): Stored as member variables (fields).
- **Behavior** (functions/methods): Defined as member functions.

### **Key Features of OOP**
1. **Encapsulation**
2. **Abstraction**
3. **Inheritance**
4. **Polymorphism**

Each feature contributes to modular, reusable, and efficient code development.

---

## **Why Use OOP?**
1. **Modularity**: Divide a program into smaller components (classes).
2. **Reusability**: Reuse existing code via inheritance and objects.
3. **Scalability**: Easier to manage and extend.
4. **Real-World Mapping**: Models real-world systems naturally.
5. **Security**: Encapsulation hides sensitive data.

---

## **1. Encapsulation**
Encapsulation is the bundling of data and methods operating on that data within a single unit (class).

### **Theory**
- It restricts direct access to object attributes by marking them as private or protected.
- Provides public methods (getters/setters) to access or modify data securely.

### **Example Code**
```cpp
#include<iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Private member variable

public:
    BankAccount(double initialBalance) {  // Constructor
        balance = initialBalance;
    }

    void deposit(double amount) {  // Public method
        if (amount > 0) {
            balance += amount;
        }
    }

    double getBalance() {  // Getter for balance
        return balance;
    }
};

int main() {
    BankAccount account(1000.0);
    account.deposit(500.0);
    cout << "Balance: " << account.getBalance() << endl;
    return 0;
}
```
---

## **2. Abstraction**
Abstraction means hiding the internal details and showing only the essential features.

### **Theory**
- Simplifies program complexity by exposing relevant details only.
- Achieved using abstract classes and interfaces (in C++, pure virtual functions).

### **Example Code**
```cpp
#include<iostream>
using namespace std;

class Shape {  // Abstract base class
public:
    virtual void draw() = 0;  // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    shape1->draw();
    shape2->draw();

    delete shape1;
    delete shape2;
    return 0;
}
```
---

## **3. Inheritance**
Inheritance allows a class (child) to acquire properties and behaviors of another class (parent).

### **Theory**
- Promotes code reusability.
- Hierarchical relationships are defined using base and derived classes.

### **Types of Inheritance**
1. **Single Inheritance**: One parent, one child.
2. **Multiple Inheritance**: One child, multiple parents.
3. **Multilevel Inheritance**: Derived class inherits from another derived class.
4. **Hierarchical Inheritance**: Multiple derived classes from a single base class.
5. **Hybrid Inheritance**: Combination of multiple and hierarchical inheritance.

### **Example Code**
```cpp
#include<iostream>
using namespace std;

class Vehicle {
public:
    void startEngine() {
        cout << "Engine started" << endl;
    }
};

class Car : public Vehicle {  // Single Inheritance
public:
    void drive() {
        cout << "Car is driving" << endl;
    }
};

int main() {
    Car myCar;
    myCar.startEngine();  // Inherited method
    myCar.drive();
    return 0;
}
```
---

## **4. Polymorphism**
Polymorphism means "many forms" and allows functions or methods to behave differently based on the object.

### **Theory**
- Achieved through:
  - **Function Overloading**: Same function name, different parameters.
  - **Operator Overloading**: Same operator, different behavior.
  - **Runtime Polymorphism**: Achieved using virtual functions.

### **Example Code**
#### **Function Overloading**
```cpp
#include<iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    cout << "Int addition: " << calc.add(3, 4) << endl;
    cout << "Double addition: " << calc.add(3.5, 4.5) << endl;
    return 0;
}
```
---

## **Keywords and Symbols in OOP**

### **Keywords**
1. **this**: Refers to the current object.
2. **virtual**: Used for runtime polymorphism.
3. **protected**: Access specifier; allows access in derived classes.

### **Symbols**
1. **& (Address-of)**: Used to get the memory address of a variable.
2. *** (Dereference)**: Access the value pointed to by a pointer.
3. **-> (Arrow Operator)**: Used to access members of a class through a pointer.

---

## **Tree Structure of OOP Concepts**
```markdown
OOP
|__ Encapsulation
|__ Abstraction
|   |__ Abstract Classes
|   |__ Interfaces
|__ Inheritance
|   |__ Single Inheritance
|   |__ Multiple Inheritance
|   |__ Multilevel Inheritance
|   |__ Hierarchical Inheritance
|   |__ Hybrid Inheritance
|__ Polymorphism
    |__ Function Overloading
    |__ Operator Overloading
    |__ Runtime Polymorphism (Virtual Functions)
```
---
