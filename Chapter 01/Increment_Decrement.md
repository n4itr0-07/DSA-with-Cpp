### Arithmetic Operators in C++

Arithmetic operators are used to perform basic mathematical operations. Here are the arithmetic operators available in C++:

- `+` (Addition): Adds two operands.
- `-` (Subtraction): Subtracts the second operand from the first.
- `*` (Multiplication): Multiplies two operands.
- `/` (Division): Divides the first operand by the second.
- `%` (Modulus): Returns the remainder of a division.

#### Code Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 3;

    // Addition
    int sum = a + b;
    cout << "Sum: " << sum << endl;

    // Subtraction
    int diff = a - b;
    cout << "Difference: " << diff << endl;

    // Multiplication
    int product = a * b;
    cout << "Product: " << product << endl;

    // Division
    int quotient = a / b;
    cout << "Quotient: " << quotient << endl;

    // Modulus
    int remainder = a % b;
    cout << "Remainder: " << remainder << endl;

    return 0;
}
```

### Increment and Decrement Operators in C++

Increment and decrement operators are used to increase or decrease the value of a variable by one.

- `++` (Increment): Increases the value of a variable by one.
  - `++a` (Pre-increment): Increments the value before using it in an expression.
  - `a++` (Post-increment): Increments the value after using it in an expression.
- `--` (Decrement): Decreases the value of a variable by one.
  - `--a` (Pre-decrement): Decrements the value before using it in an expression.
  - `a--` (Post-decrement): Decrements the value after using it in an expression.

#### Code Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5;

    // Pre-increment
    cout << "Pre-increment: " << ++a << endl; // Outputs 6

    // Post-increment
    cout << "Post-increment: " << a++ << endl; // Outputs 6, then a becomes 7
    cout << "After Post-increment: " << a << endl; // Outputs 7

    // Pre-decrement
    cout << "Pre-decrement: " << --a << endl; // Outputs 6

    // Post-decrement
    cout << "Post-decrement: " << a-- << endl; // Outputs 6, then a becomes 5
    cout << "After Post-decrement: " << a << endl; // Outputs 5

    return 0;
}