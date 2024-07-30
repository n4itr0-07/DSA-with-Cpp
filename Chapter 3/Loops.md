### 1. `for` Loop
The `for` loop is commonly used for iterating over a range of values.

#### Structure of a `for` Loop
```cpp
for (initialization; condition; increment) {
    // Code to be executed
}
```

#### Example: Simple `for` Loop
Let's start with a simple example that prints numbers from 0 to 4:

```cpp
#include <iostream>

int main() {
    // Simple for loop
    for (int i = 0; i < 5; ++i) {
        std::cout << "Number: " << i << std::endl;
    }

    return 0;
}
```

### Example: Using `for` Loop with a Condition
A `for` loop that prints even numbers between 0 and 10:

```cpp
#include <iostream>

int main() {
    // Print even numbers from 0 to 10
    for (int i = 0; i <= 10; i += 2) {
        std::cout << "Even number: " << i << std::endl;
    }

    return 0;
}
```

### Example: Nested `for` Loop
A nested `for` loop is used for more complex iterations, such as generating a multiplication table:

```cpp
#include <iostream>

int main() {
    // Nested for loop to generate a multiplication table
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            std::cout << i * j << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
```

### 2. `while` Loop
The `while` loop is used to repeat a block of code as long as a condition is true.

#### Structure of a `while` Loop
```cpp
while (condition) {
    // Code to be executed
}
```

#### Example: Simple `while` Loop
Let's start with a simple example that prints numbers from 0 to 4:

```cpp
#include <iostream>

int main() {
    int i = 0;

    // Simple while loop
    while (i < 5) {
        std::cout << "Number: " << i << std::endl;
        ++i;
    }

    return 0;
}
```

### Example: Using `while` Loop with a Condition
A `while` loop that prints odd numbers between 0 and 10:

```cpp
#include <iostream>

int main() {
    int i = 1;

    // Print odd numbers from 1 to 9
    while (i < 10) {
        std::cout << "Odd number: " << i << std::endl;
        i += 2;
    }

    return 0;
}
```

### Example: `do-while` Loop
The `do-while` loop is similar to the `while` loop, but it guarantees that the code block is executed at least once.

#### Structure of a `do-while` Loop
```cpp
do {
    // Code to be executed
} while (condition);
```

#### Example: Simple `do-while` Loop
Let's start with a simple example that prints numbers from 0 to 4:

```cpp
#include <iostream>

int main() {
    int i = 0;

    // Simple do-while loop
    do {
        std::cout << "Number: " << i << std::endl;
        ++i;
    } while (i < 5);

    return 0;
}
```

### Key Points to Remember
- **Initialization:** In a `for` loop, initialization happens once at the beginning. In a `while` loop, initialization usually happens before the loop.
- **Condition:** The loop continues as long as the condition is true.
- **Increment/Decrement:** In a `for` loop, increment/decrement happens at the end of each iteration. In a `while` loop, it is done inside the loop body.
- **Scope:** The code inside the curly braces `{}` is executed repeatedly as long as the condition is true.
- **`do-while` Loop:** Executes the code block at least once before checking the condition.

