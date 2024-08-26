# Structures and Unions in C++

## 1. Structures in C++

### 1.1 What is a Structure?
- A structure in C++ is a user-defined data type that allows grouping variables of different data types under a single name.
- It is similar to classes in C++, but with one key difference: members of a structure are public by default, while members of a class are private by default.

### 1.2 Defining a Structure
- To define a structure, the `struct` keyword is used followed by the structure name and a block of code containing the members.

```cpp
struct Person {
    string name;
    int age;
    float height;
};
```

### 1.3 Accessing Structure Members
- Members of a structure are accessed using the dot (`.`) operator.

```cpp
int main() {
    Person person1;
    person1.name = "John";
    person1.age = 30;
    person1.height = 5.9;

    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height: " << person1.height << " feet" << endl;

    return 0;
}
```

### 1.4 Nested Structures
- Structures can be nested, meaning a structure can have another structure as a member.

```cpp
struct Address {
    string city;
    string state;
    int zipCode;
};

struct Employee {
    string name;
    int id;
    Address address;
};

int main() {
    Employee emp1;
    emp1.name = "Alice";
    emp1.id = 101;
    emp1.address.city = "New York";
    emp1.address.state = "NY";
    emp1.address.zipCode = 10001;

    cout << "Employee Name: " << emp1.name << endl;
    cout << "Employee ID: " << emp1.id << endl;
    cout << "City: " << emp1.address.city << endl;
    cout << "State: " << emp1.address.state << endl;
    cout << "Zip Code: " << emp1.address.zipCode << endl;

    return 0;
}
```

### 1.5 Structure as a Function Argument
- Structures can be passed as arguments to functions by value or by reference.

```cpp
void displayPerson(const Person &p) {
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Height: " << p.height << " feet" << endl;
}

int main() {
    Person person1 = {"Bob", 25, 6.1};
    displayPerson(person1);
    return 0;
}
```

---

## 2. Unions in C++

### 2.1 What is a Union?
- A union in C++ is a user-defined data type that allows storing different data types in the same memory location.
- Unlike structures, a union can only hold one of its members at a time, as all members share the same memory location.

### 2.2 Defining a Union
- To define a union, the `union` keyword is used followed by the union name and a block of code containing the members.

```cpp
union Data {
    int intValue;
    float floatValue;
    char charValue;
};
```

### 2.3 Accessing Union Members
- Union members are accessed using the dot (`.`) operator, just like structures.
- Only one member can be used at a time, and assigning a value to one member will overwrite the other members.

```cpp
int main() {
    Data data;
    data.intValue = 10;
    cout << "Int Value: " << data.intValue << endl;

    data.floatValue = 220.5;
    cout << "Float Value: " << data.floatValue << endl;

    data.charValue = 'A';
    cout << "Char Value: " << data.charValue << endl;

    return 0;
}
```

### 2.4 Union Size
- The size of a union is determined by the size of its largest member.

```cpp
union Test {
    int intValue;
    double doubleValue;
    char charValue;
};

int main() {
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of union Test: " << sizeof(Test) << " bytes" << endl;

    return 0;
}
```

---

## 3. Key Differences between Structures and Unions

| Feature                | Structure                                                    | Union                                                       |
|------------------------|--------------------------------------------------------------|-------------------------------------------------------------|
| Memory Allocation      | Each member has its own memory location.                      | All members share the same memory location.                 |
| Data Storage           | Can store multiple members simultaneously.                   | Can store only one member at a time.                        |
| Size                   | Sum of the sizes of all members.                             | Size of the largest member.                                 |
| Use Case               | Used when multiple attributes are required simultaneously.   | Used when a single attribute is required at a time.         |

```

---

## 4. When to Use Structures vs Unions
- **Use Structures** when you need to store and access multiple data members simultaneously.
- **Use Unions** when you need to store different data types but only one at a time, optimizing memory usage.

```markdown
# Conclusion

Structures and unions are both powerful tools in C++ for managing related data. Structures are best when you need to group and work with multiple attributes simultaneously, while unions are ideal for memory-efficient management of variables where only one value is required at any given time.