### Functions in C++

Functions are blocks of code designed to perform specific tasks. They provide modularity and code reusability.

#### Structure of a Function
1. **Return Type:** The type of value the function returns. If the function doesn't return a value, it uses `void`.
2. **Function Name:** A unique identifier for the function.
3. **Parameters (Optional):** A list of inputs to the function.
4. **Function Body:** The block of code that defines what the function does.

#### Syntax
```cpp
return_type function_name(parameter1_type parameter1, parameter2_type parameter2, ...) {
    // Code to be executed
    return value; // (if return_type is not void)
}
```

### Example: Simple Function

#### Function without Parameters and Return Value

```cpp
#include <iostream>
using namespace std;

// Function declaration
void greet() {
    cout << "Hello, World!" << endl;
}

int main() {
    greet(); // Function call
    return 0;
}
```

#### Explanation
- **Return Type:** `void` (no return value)
- **Function Name:** `greet`
- **Parameters:** None
- **Function Body:** Prints "Hello, World!"

### Example: Function with Parameters

#### Function with Parameters and Return Value

```cpp
#include <iostream>
using namespace std;

// Function declaration
int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int num1 = 5, num2 = 3;
    int result = add(num1, num2); // Function call
    cout << "Sum: " << result << endl;
    return 0;
}
```

#### Explanation
- **Return Type:** `int` (returns an integer value)
- **Function Name:** `add`
- **Parameters:** `int a`, `int b` (two integer parameters)
- **Function Body:** Calculates the sum of `a` and `b` and returns it

### Example: Function with Default Parameters

#### Function with Default Parameters

```cpp
#include <iostream>
using namespace std;

// Function declaration
void display(int a = 5, int b = 10) {
    cout << "a: " << a << ", b: " << b << endl;
}

int main() {
    display(); // Function call without arguments
    display(7); // Function call with one argument
    display(7, 8); // Function call with two arguments
    return 0;
}
```

#### Explanation
- **Return Type:** `void` (no return value)
- **Function Name:** `display`
- **Parameters:** `int a = 5`, `int b = 10` (two integer parameters with default values)
- **Function Body:** Prints the values of `a` and `b`
- When `display` is called without arguments, it uses the default values.

### Example: Function Overloading

#### Function Overloading

```cpp
#include <iostream>
using namespace std;

// Function declarations
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    int result1 = multiply(4, 5); // Calls the int version
    double result2 = multiply(4.5, 5.5); // Calls the double version
    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    return 0;
}
```

#### Explanation
- **Function Overloading:** Defining multiple functions with the same name but different parameter types or counts.
- **Two `multiply` Functions:** One for `int`, another for `double`.

### Example: Recursive Function

#### Recursive Function

```cpp
#include <iostream>
using namespace std;

// Function declaration
int factorial(int n) {
    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}

int main() {
    int num = 5;
    int result = factorial(num); // Function call
    cout << "Factorial of " << num << " is " << result << endl;
    return 0;
}
```

#### Explanation
- **Recursive Function:** A function that calls itself.
- **Factorial Function:** Calculates the factorial of a number using recursion.

### Example: Passing Arguments by Reference

#### Passing Arguments by Reference

```cpp
#include <iostream>
using namespace std;

// Function declaration
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10, b = 20;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(a, b); // Function call
    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}
```

#### Explanation
- **Pass by Reference:** Using the `&` operator to modify the original variables.
- **Swap Function:** Swaps the values of `a` and `b`.

### Summary

Functions in C++ provide a way to modularize and reuse code. They can accept parameters, return values, and even be overloaded to handle different types or numbers of parameters. Recursive functions can call themselves, and functions can also modify arguments by reference.
