## Functions in C++

In C++, a function is a block of code designed to perform a specific task. Functions help in organizing code into manageable chunks and enable code reuse.

### 1. Function Declaration (Prototype)

A function must be declared before it is used in the program. The declaration provides the compiler with the function's name, return type, and parameters. This is often placed at the top of the program.

**Syntax:**

```cpp
return_type function_name(parameter1_type parameter1, parameter2_type parameter2, ...);
```

**Example:**

```cpp
int add(int a, int b);
```

### 2. Function Definition

The function definition contains the actual body of the function. It specifies what the function does.

**Syntax:**

```cpp
return_type function_name(parameter1_type parameter1, parameter2_type parameter2, ...) {
    // function body
}
```

**Example:**

```cpp
int add(int a, int b) {
    return a + b;
}
```

### 3. Function Call

To use the function, you call it in the main function or any other function. When a function is called, the control of the program passes to the function's body.

**Syntax:**

```cpp
function_name(arguments);
```

**Example:**

```cpp
int result = add(5, 3);
```

### 4. Complete Example

Here is a complete example combining declaration, definition, and function call:

```cpp
#include <iostream>

// Function declaration
int add(int a, int b);

int main() {
    int num1 = 5, num2 = 3;
    // Function call
    int sum = add(num1, num2);
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```

### Questions on Functions with Code

1. **Question: What is a function prototype, and why is it important?**

   **Answer:**
   
   A function prototype is a declaration of a function that informs the compiler about the function name, return type, and parameters. It is important because it ensures that the function is used correctly by checking the types and number of arguments passed during a function call.

   **Example:**

   ```cpp
   float multiply(float x, float y); // Function prototype
   ```

2. **Question: How can you return multiple values from a function?**

   **Answer:**

   You can return multiple values from a function using pointers, references, or structures. Here, we use a structure to return multiple values.

   **Example:**

   ```cpp
   #include <iostream>

   struct Result {
       int sum;
       int product;
   };

   Result calculate(int a, int b) {
       Result res;
       res.sum = a + b;
       res.product = a * b;
       return res;
   }

   int main() {
       int num1 = 4, num2 = 5;
       Result res = calculate(num1, num2);
       std::cout << "Sum: " << res.sum << "\nProduct: " << res.product << std::endl;
       return 0;
   }
   ```

3. **Question: What is recursion, and how do you implement a recursive function in C++?**

   **Answer:**

   Recursion is a process where a function calls itself. Recursive functions are used to solve problems that can be broken down into smaller, similar problems.

   **Example:**

   ```cpp
   #include <iostream>

   // Recursive function to calculate factorial
   int factorial(int n) {
       if (n <= 1)
           return 1;
       else
           return n * factorial(n - 1);
   }

   int main() {
       int num = 5;
       std::cout << "Factorial of " << num << " is " << factorial(num) << std::endl;
       return 0;
   }
   ```

4. **Question: How do you pass an array to a function?**

   **Answer:**

   You can pass an array to a function by specifying the array name without brackets. Inside the function, you typically pass the array and its size.

   **Example:**

   ```cpp
   #include <iostream>

   void printArray(int arr[], int size) {
       for (int i = 0; i < size; i++) {
           std::cout << arr[i] << " ";
       }
       std::cout << std::endl;
   }

   int main() {
       int myArray[] = {1, 2, 3, 4, 5};
       int size = sizeof(myArray) / sizeof(myArray[0]);
       printArray(myArray, size);
       return 0;
   }
   ```

5. **Question: What are inline functions, and when should they be used?**

   **Answer:**

   Inline functions are defined with the `inline` keyword. They are meant to be small functions that the compiler attempts to expand in place, reducing the overhead of a function call. They should be used for small, frequently called functions to improve performance.

   **Example:**

   ```cpp
   #include <iostream>

   inline int square(int x) {
       return x * x;
   }

   int main() {
       int num = 4;
       std::cout << "Square of " << num << " is " << square(num) << std::endl;
       return 0;
   }
   ```

By following these explanations and examples, you should have a solid understanding of functions in C++ and be able to implement and use them effectively in your programs.