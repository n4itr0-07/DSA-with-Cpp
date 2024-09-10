### Call by Value

When a function is called by value, a copy of the actual parameter's value is passed to the function. Modifications to the parameter inside the function do not affect the original value.

#### Syntax

```cpp
void functionName(dataType parameter) {
    // Code to be executed
}
```

#### Example: Call by Value

```cpp
#include <iostream>
using namespace std;

void callByValue(int x) {
    x = 100; // This change will not affect the original variable
    cout << "Inside callByValue, x = " << x << endl;
}

int main() {
    int a = 10;
    cout << "Before callByValue, a = " << a << endl;
    callByValue(a);
    cout << "After callByValue, a = " << a << endl;
    return 0;
}
```

#### Explanation
- **Function Name:** `callByValue`
- **Parameter:** `int x` (a copy of the original variable)
- **Function Body:** Changes `x` to 100, but this does not affect the original variable `a`.

### Call by Reference

When a function is called by reference, a reference to the actual parameter is passed to the function. Modifications to the parameter inside the function affect the original value.

#### Syntax

```cpp
void functionName(dataType &parameter) {
    // Code to be executed
}
```

#### Example: Call by Reference

```cpp
#include <iostream>
using namespace std;

void callByReference(int &x) {
    x = 100; // This change will affect the original variable
    cout << "Inside callByReference, x = " << x << endl;
}

int main() {
    int a = 10;
    cout << "Before callByReference, a = " << a << endl;
    callByReference(a);
    cout << "After callByReference, a = " << a << endl;
    return 0;
}
```

#### Explanation
- **Function Name:** `callByReference`
- **Parameter:** `int &x` (a reference to the original variable)
- **Function Body:** Changes `x` to 100, which affects the original variable `a`.

### Comparison of Call by Value and Call by Reference

#### Example: Combined

```cpp
#include <iostream>
using namespace std;

void callByValue(int x) {
    x = 100; // This change will not affect the original variable
    cout << "Inside callByValue, x = " << x << endl;
}

void callByReference(int &x) {
    x = 100; // This change will affect the original variable
    cout << "Inside callByReference, x = " << x << endl;
}

int main() {
    int a = 10;
    int b = 10;

    cout << "Before callByValue, a = " << a << endl;
    callByValue(a);
    cout << "After callByValue, a = " << a << endl;

    cout << "Before callByReference, b = " << b << endl;
    callByReference(b);
    cout << "After callByReference, b = " << b << endl;

    return 0;
}
```

#### Explanation
- **Call by Value:** The variable `a` remains unchanged after `callByValue` because the function works with a copy of `a`.
- **Call by Reference:** The variable `b` changes after `callByReference` because the function works with a reference to `b`.

### Key Points to Remember
- **Call by Value:** Passes a copy of the argument. Changes inside the function do not affect the original variable.
- **Call by Reference:** Passes a reference to the argument. Changes inside the function affect the original variable.
- **Use Cases:** 
  - **Call by Value** is used when you do not want to modify the original variable.
  - **Call by Reference** is used when you need to modify the original variable or avoid copying large amounts of data.
