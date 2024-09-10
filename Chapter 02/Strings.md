### What is a String?
A string is a sequence of characters. In C++, you can handle strings using:
1. **C-style Strings (Character Arrays)**
2. **C++ `std::string` Class**

### 1. C-style Strings
A C-style string is an array of characters terminated by a null character (`'\0'`).

#### Declaration:
```cpp
char arrayName[arraySize];
char arrayName[] = "string";
```

#### Example:
```cpp
#include <iostream>
#include <cstring> // Required for C-style string functions

int main() {
    // Declaration and initialization
    char greeting[6] = "Hello"; // 'Hello' + '\0'

    // Accessing elements
    std::cout << "First character: " << greeting[0] << std::endl;
    std::cout << "Last character: " << greeting[4] << std::endl;

    // Modifying elements
    greeting[1] = 'a';
    std::cout << "Modified string: " << greeting << std::endl;

    // String functions
    std::cout << "Length of greeting: " << strlen(greeting) << std::endl;

    return 0;
}
```

### 2. C++ `std::string` Class
The `std::string` class, part of the C++ Standard Library, provides a more flexible and convenient way to handle strings.

#### Declaration:
```cpp
#include <string>
std::string variableName;
std::string variableName = "string";
```

#### Example:
```cpp
#include <iostream>
#include <string>

int main() {
    // Declaration and initialization
    std::string greeting = "Hello";

    // Accessing elements
    std::cout << "First character: " << greeting[0] << std::endl;
    std::cout << "Last character: " << greeting[greeting.size() - 1] << std::endl;

    // Modifying elements
    greeting[1] = 'a';
    std::cout << "Modified string: " << greeting << std::endl;

    // String functions
    std::cout << "Length of greeting: " << greeting.size() << std::endl;
    std::cout << "Substring: " << greeting.substr(1, 3) << std::endl;

    // Concatenation
    std::string name = "World";
    std::string fullGreeting = greeting + ", " + name + "!";
    std::cout << "Full greeting: " << fullGreeting << std::endl;

    return 0;
}
```

### Key Points to Remember
- **Null Terminator:** C-style strings are null-terminated (`'\0'`).
- **Flexibility:** `std::string` provides more flexibility and functions compared to C-style strings.
- **Standard Library:** Use `#include <cstring>` for C-style string functions and `#include <string>` for `std::string`.

### Example: Using Strings in Functions
Here's an example of a function that takes a `std::string` as a parameter and returns its length:

```cpp
#include <iostream>
#include <string>

// Function to get the length of a string
int getStringLength(const std::string& str) {
    return str.size();
}

int main() {
    std::string greeting = "Hello, World!";
    int length = getStringLength(greeting);

    std::cout << "Length of greeting: " << length << std::endl;
    return 0;
}
```

This example demonstrates how to declare a function that takes a `std::string` as a parameter and uses the `.size()` method to get the length of the string.
