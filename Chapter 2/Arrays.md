### What is an Array?
An array is a collection of elements of the same type placed in contiguous memory locations. It is a data structure that allows you to store multiple values under a single name.

### Types of Arrays in C++
1. **One-Dimensional Arrays**
2. **Two-Dimensional Arrays**
3. **Multidimensional Arrays**

### 1. One-Dimensional Arrays
A one-dimensional array is like a list of elements, all of the same type, stored in a contiguous block of memory.

#### Declaration:
```cpp
type arrayName[arraySize];
```

#### Example:
```cpp
#include <iostream>

int main() {
    // Declaration and initialization
    int numbers[5] = {1, 2, 3, 4, 5};

    // Accessing elements
    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Third element: " << numbers[2] << std::endl;

    // Modifying elements
    numbers[2] = 10;
    std::cout << "Modified third element: " << numbers[2] << std::endl;

    return 0;
}
```

### 2. Two-Dimensional Arrays
A two-dimensional array can be thought of as an array of arrays. It is often used to represent matrices or tables.

#### Declaration:
```cpp
type arrayName[rows][columns];
```

#### Example:
```cpp
#include <iostream>

int main() {
    // Declaration and initialization
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Accessing elements
    std::cout << "Element at (1,2): " << matrix[1][2] << std::endl;

    // Modifying elements
    matrix[1][2] = 10;
    std::cout << "Modified element at (1,2): " << matrix[1][2] << std::endl;

    return 0;
}
```

### 3. Multidimensional Arrays
Multidimensional arrays are arrays with more than two dimensions. These are less commonly used but can be useful in certain situations.

#### Declaration:
```cpp
type arrayName[size1][size2][size3]...[sizeN];
```

#### Example:
```cpp
#include <iostream>

int main() {
    // Declaration and initialization
    int tensor[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };

    // Accessing elements
    std::cout << "Element at (1,1,1): " << tensor[1][1][1] << std::endl;

    // Modifying elements
    tensor[1][1][1] = 10;
    std::cout << "Modified element at (1,1,1): " << tensor[1][1][1] << std::endl;

    return 0;
}
```

### Key Points to Remember
- **Indexing:** Arrays in C++ are zero-indexed, meaning the first element is accessed with index 0.
- **Bounds:** Accessing an array out of its bounds (e.g., `array[arraySize]`) can lead to undefined behavior.
- **Memory:** Arrays are stored in contiguous memory locations.

### Example: Using Arrays in Functions
You can pass arrays to functions in C++. Here's an example of a function that calculates the sum of elements in a one-dimensional array:

```cpp
#include <iostream>

// Function to calculate the sum of array elements
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    int sum = sumArray(numbers, 5);

    std::cout << "Sum of array elements: " << sum << std::endl;
    return 0;
}
```

This example demonstrates how to declare a function that takes an array and its size as parameters, then uses a loop to calculate the sum of its elements.
