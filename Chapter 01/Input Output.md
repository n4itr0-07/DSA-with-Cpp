### Input and Output in C++

In C++, input and output operations are primarily handled using the standard library classes and objects from the `<iostream>` header. The most common classes are `std::cin` for input and `std::cout` for output. Here’s a brief overview:

#### **1. Input with `std::cin`**

- **Purpose**: To receive input from the user.
- **Syntax**: `std::cin >> variable;`
- **Example**: Reading an integer from the user.

```cpp
#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: "; // Prompt the user
    std::cin >> age; // Read the input into the variable 'age'
    std::cout << "You entered: " << age << std::endl; // Output the value of 'age'
    return 0;
}
```

**Questions:**

1. How would you read a floating-point number using `std::cin`?
2. What happens if the user inputs a non-numeric value when expecting an integer?

#### **2. Output with `std::cout`**

- **Purpose**: To display information to the user.
- **Syntax**: `std::cout << "message";`
- **Example**: Displaying a message and a variable’s value.

```cpp
#include <iostream>

int main() {
    double temperature = 23.5;
    std::cout << "The current temperature is: " << temperature << " degrees Celsius." << std::endl;
    return 0;
}
```

**Questions:**

1. How can you format output to display a floating-point number with two decimal places?
2. What is the purpose of `std::endl` in the output stream?

#### **3. Reading a Full Line of Text**

- **Purpose**: To read an entire line of input, including spaces.
- **Syntax**: `std::getline(std::cin, variable);`
- **Example**: Reading a full name from the user.

```cpp
#include <iostream>
#include <string> // Required for std::string

int main() {
    std::string fullName;
    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName); // Read the entire line of text
    std::cout << "Hello, " << fullName << "!" << std::endl;
    return 0;
}
```

**Questions:**

1. What is the difference between `std::cin >> variable` and `std::getline(std::cin, variable)`?
2. How can you handle trailing newline characters when using `std::getline`?

#### **4. Combining Input and Output**

- **Purpose**: To perform operations and display results based on user input.
- **Example**: Calculating the area of a rectangle based on user input.

```cpp
#include <iostream>

int main() {
    double length, width;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    double area = length * width;
    std::cout << "The area of the rectangle is: " << area << std::endl;

    return 0;
}
```
