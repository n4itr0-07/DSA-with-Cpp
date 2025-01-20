# **Exception Handling and File Handling in C++**

## **Exception Handling in C++**

### **Theory**
Exception handling is a mechanism in C++ to handle runtime errors. It helps in maintaining the normal flow of a program even when an error occurs.

#### **Key Concepts**
1. **Try Block**: Contains the code that may throw an exception.
2. **Catch Block**: Handles the exception thrown by the `try` block.
3. **Throw Statement**: Used to signal an exception occurrence.

#### **Syntax**
```cpp
try {
    // Code that might throw an exception
} 
catch (ExceptionType e) {
    // Code to handle the exception
}
```

#### **Advantages**
- Separates error-handling code from the main logic.
- Prevents program crashes due to unhandled errors.
- Provides flexibility in error management.

---

### **Code Examples**

#### **Basic Exception Handling**

```cpp
#include <iostream>
using namespace std;

int main() {
    int divisor, dividend;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    try {
        if (divisor == 0) {
            throw "Division by zero is not allowed!";
        }
        cout << "Result: " << dividend / divisor << endl;
    }
    catch (const char* errorMessage) {
        cout << "Error: " << errorMessage << endl;
    }

    return 0;
}
```

#### **Catching Multiple Exceptions**

```cpp
#include <iostream>
using namespace std;

int main() {
    try {
        int choice;
        cout << "Enter 1 to throw an int, 2 to throw a char: ";
        cin >> choice;

        if (choice == 1)
            throw 100;
        else if (choice == 2)
            throw 'A';
        else
            throw 1.5;
    }
    catch (int e) {
        cout << "Caught an integer: " << e << endl;
    }
    catch (char e) {
        cout << "Caught a character: " << e << endl;
    }
    catch (...) {
        cout << "Caught an unknown exception!" << endl;
    }

    return 0;
}
```

#### **Using `std::exception`**

```cpp
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        throw runtime_error("Custom runtime error occurred!");
    }
    catch (const runtime_error& e) {
        cout << "Runtime Error: " << e.what() << endl;
    }

    return 0;
}
```

---

## **File Handling in C++**

### **Theory**
File handling in C++ involves using the `fstream` library to perform operations like reading, writing, and appending files.

#### **Key Classes**
1. **`ofstream`**: For writing files.
2. **`ifstream`**: For reading files.
3. **`fstream`**: For both reading and writing files.

#### **Steps for File Handling**
1. Include `<fstream>` header.
2. Create an object of `ifstream`, `ofstream`, or `fstream`.
3. Open the file using `.open()` or a constructor.
4. Perform file operations.
5. Close the file using `.close()`.

---

### **Code Examples**

#### **Writing to a File**

```cpp
#include <iostream>
#include <fstream> // Required for file handling
using namespace std;

int main() {
    ofstream outFile("example.txt");

    if (!outFile) {
        cout << "File creation failed!" << endl;
        return 1;
    }

    outFile << "Hello, this is a test file." << endl;
    outFile << "File handling in C++ is simple!" << endl;

    outFile.close();
    cout << "Data written to file successfully." << endl;

    return 0;
}
```

#### **Reading from a File**

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("example.txt");

    if (!inFile) {
        cout << "File not found!" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
    return 0;
}
```

#### **Reading and Writing to the Same File**

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("example.txt", ios::in | ios::out | ios::app);

    if (!file) {
        cout << "File opening failed!" << endl;
        return 1;
    }

    file << "Appending this line to the file." << endl;

    file.seekg(0); // Move the read pointer to the beginning
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}
```

#### **Checking File States**

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("example.txt");

    if (file.fail()) {
        cout << "File opening failed!" << endl;
    } else {
        cout << "File opened successfully." << endl;
    }

    file.close();
    return 0;
}
```

---

## **Summary**

### **Exception Handling**
- Use `try`, `catch`, and `throw` to manage runtime errors.
- Use multiple `catch` blocks or `catch(...)` for handling specific or unknown errors.
- Use `std::exception` for standard error descriptions.

### **File Handling**
- Use `ofstream` to write, `ifstream` to read, and `fstream` for both operations.
- Always check the file's state before performing operations.
- Close the file after completing operations to free resources.

--- 
