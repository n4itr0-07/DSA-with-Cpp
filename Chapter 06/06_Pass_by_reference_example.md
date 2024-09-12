# Pass by Reference in C++ Arrays

## Theory

In C++, passing by reference allows a function to modify the original variable or array passed to it, rather than working with a copy. This is particularly useful for arrays, as it avoids the overhead of copying large amounts of data.

When you pass an array by reference, you pass the actual memory address of the array, allowing the function to directly access and modify the original array elements. This is done using the reference operator `&`.

**Syntax:**
```cpp
return_type function_name(data_type (&array_name)[size])
```

## Example

Here's an example to illustrate passing an array by reference in C++:

```cpp
#include <iostream>
using namespace std;

// Function to modify the array elements
void modifyArray(int (&arr)[5]) {
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; ++i) {
        arr[i] *= 2; // Double each element
    }
}

int main() {
    int nums[5] = {1, 2, 3, 4, 5};

    cout << "Original array: ";
    for (int i = 0; i < 5; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    // Pass the array by reference to the function
    modifyArray(nums);

    cout << "Modified array: ";
    for (int i = 0; i < 5; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
```

## Explanation

1. **Function Definition:**
   - `void modifyArray(int (&arr)[5])`: This function takes an array of 5 integers by reference.
   - Inside the function, we calculate the size of the array and then double each element.

2. **Main Function:**
   - We initialize an array `nums` with 5 elements.
   - We print the original array.
   - We call `modifyArray(nums)`, passing the array by reference.
   - We print the modified array to see the changes.

By passing the array by reference, any modifications made within the `modifyArray` function are reflected in the original array.