# Learning STL in C++

The Standard Template Library (STL) is a powerful feature of C++ that provides a collection of ready-to-use template classes and functions. STL is broadly divided into three components:

1. **Containers**: Structures that hold objects or data.
2. **Algorithms**: Functions to perform operations on containers.
3. **Iterators**: Objects that point to the elements of a container.

## 1. Containers

### 1.1. **Vector**

Vectors are dynamic arrays that can resize themselves automatically when an element is inserted or deleted.

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    // Adding an element
    vec.push_back(6);

    // Accessing elements
    cout << "Element at index 2: " << vec[2] << endl;

    // Iterating through the vector
    cout << "Vector elements: ";
    for (int i : vec) {
        cout << i << " ";
    }

    return 0;
}
```

### 1.2. **List**

A list is a sequence container that allows non-contiguous memory allocation, and it provides fast insertion and deletion.

```cpp
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> myList = {10, 20, 30};

    // Adding elements
    myList.push_back(40);
    myList.push_front(5);

    // Removing elements
    myList.pop_back();

    // Iterating through the list
    cout << "List elements: ";
    for (int i : myList) {
        cout << i << " ";
    }

    return 0;
}
```

### 1.3. **Map**

Maps store elements in key-value pairs, with unique keys.

```cpp
#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> myMap;

    // Inserting elements
    myMap[1] = "Apple";
    myMap[2] = "Banana";
    myMap[3] = "Cherry";

    // Accessing elements
    cout << "Element with key 2: " << myMap[2] << endl;

    // Iterating through the map
    cout << "Map elements: ";
    for (const auto &pair : myMap) {
        cout << "{" << pair.first << ": " << pair.second << "} ";
    }

    return 0;
}
```

## 2. Algorithms

### 2.1. **Sorting**

STL provides the `sort()` function to sort elements in a container.

```cpp
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {5, 3, 8, 1, 9};

    sort(vec.begin(), vec.end());

    cout << "Sorted vector: ";
    for (int i : vec) {
        cout << i << " ";
    }

    return 0;
}
```

### 2.2. **Finding**

The `find()` function is used to search for an element in a container.

```cpp
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {5, 3, 8, 1, 9};

    auto it = find(vec.begin(), vec.end(), 3);

    if (it != vec.end()) {
        cout << "Element found at position: " << distance(vec.begin(), it) << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
```

## 3. Iterators

Iterators act like pointers and are used to point to the memory addresses of STL containers.

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};

    // Declaring an iterator
    vector<int>::iterator it;

    // Using iterator to access elements
    for (it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}
```

## 4. Commonly Used STL Containers

### 4.1. **Stack**

A stack is a container adapter with LIFO (Last In First Out) access.

```cpp
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> myStack;

    // Pushing elements
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Popping elements
    myStack.pop();

    // Accessing the top element
    cout << "Top element: " << myStack.top() << endl;

    return 0;
}
```

### 4.2. **Queue**

A queue is a container adapter with FIFO (First In First Out) access.

```cpp
#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> myQueue;

    // Pushing elements
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Popping elements
    myQueue.pop();

    // Accessing the front element
    cout << "Front element: " << myQueue.front() << endl;

    return 0;
}
```

## 5. STL Questions with Answers

### Question 1: How do you sort a vector of strings in descending order?

**Answer:**

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> vec = {"apple", "banana", "cherry"};

    // Sorting in descending order
    sort(vec.begin(), vec.end(), greater<string>());

    cout << "Sorted vector in descending order: ";
    for (const auto &str : vec) {
        cout << str << " ";
    }

    return 0;
}
```

### Question 2: How do you find the minimum and maximum elements in a list?

**Answer:**

```cpp
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    list<int> myList = {3, 7, 2, 9, 5};

    auto minElement = min_element(myList.begin(), myList.end());
    auto maxElement = max_element(myList.begin(), myList.end());

    cout << "Minimum element: " << *minElement << endl;
    cout << "Maximum element: " << *maxElement << endl;

    return 0;
}
```

### Question 3: How do you remove all even numbers from a vector?

**Answer:**

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6};

    vec.erase(remove_if(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; }), vec.end());

    cout << "Vector after removing even numbers: ";
    for (int i : vec) {
        cout << i << " ";
    }

    return 0;
}
