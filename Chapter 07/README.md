# STL (Standard Template Library) in C++

## **Introduction**

The Standard Template Library (STL) is a powerful feature of C++ that provides ready-made classes and functions for common data structures and algorithms. It makes it easier to handle tasks like sorting, searching, and data storage with efficiency and flexibility.

---

## **Components of STL**

### 1. **Containers**

Containers are data structures used to store collections of objects. They are categorized into:

#### a) **Sequence Containers**

- **Definition**: Store elements in a linear sequence.
- **Examples**: `vector`, `deque`, `list`.

#### b) **Associative Containers**

- **Definition**: Store elements in a sorted order and allow fast retrieval.
- **Examples**: `set`, `map`, `multiset`, `multimap`.

#### c) **Unordered Containers**

- **Definition**: Store elements in an unordered manner for faster access.
- **Examples**: `unordered_set`, `unordered_map`.

#### d) **Container Adapters**

- **Definition**: Simplified interfaces for specific uses.
- **Examples**: `stack`, `queue`, `priority_queue`.

---

### 2. **Iterators**

- **Definition**: Objects that point to elements of a container and allow traversal.
- Common methods: `begin()`, `end()`, `rbegin()`, `rend()`.

### 3. **Algorithms**

- **Definition**: Predefined functions to perform operations like sorting, searching, etc.
- Examples: `sort`, `find`, `binary_search`, `reverse`.

---

## **How to Use STL (With Examples)**

### 1. **Sequence Containers**

#### a) **Vector**

- **Definition**: A dynamic array that can grow or shrink in size.

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3}; // Initialize vector
    v.push_back(4); // Add element at the end

    // Using a loop with `auto` keyword
    for (auto x : v) {
        cout << x << " "; // Output: 1 2 3 4
    }

    return 0;
}
```

- **Explanation of `auto`**:
  - The `auto` keyword automatically deduces the type of the variable.
  - In the above loop, `auto` determines the type of `x` as `int`.

---

#### b) **List**

- **Definition**: A doubly linked list.

```cpp
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {10, 20, 30}; // Initialize list
    l.push_back(40); // Add element at the end
    l.push_front(5); // Add element at the beginning

    for (auto it = l.begin(); it != l.end(); ++it) {
        cout << *it << " "; // Output: 5 10 20 30 40
    }

    return 0;
}
```

---

### 2. **Associative Containers**

#### a) **Set**

- **Definition**: Stores unique elements in sorted order.

```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {3, 1, 2}; // Initialize set
    s.insert(4); // Add element

    for (auto x : s) {
        cout << x << " "; // Output: 1 2 3 4
    }

    return 0;
}
```

#### b) **Map**

- **Definition**: Stores key-value pairs in sorted order of keys.

```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    m["Alice"] = 25;
    m["Bob"] = 30;

    for (auto p : m) {
        cout << p.first << ": " << p.second << endl; // Output: Alice: 25, Bob: 30
    }

    return 0;
}
```

---

### 3. **Container Adapters**

#### a) **Stack (LIFO)**

- **Definition**: A stack follows the Last In, First Out (LIFO) principle. The last element added is the first to be removed.

```cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(10); // Add element
    s.push(20);
    s.push(30);

    while (!s.empty()) {
        cout << s.top() << " "; // Output: 30 20 10
        s.pop(); // Remove top element
    }

    return 0;
}
```

#### b) **Queue (FIFO)**

- **Definition**: A queue follows the First In, First Out (FIFO) principle. The first element added is the first to be removed.

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(10); // Add element
    q.push(20);
    q.push(30);

    while (!q.empty()) {
        cout << q.front() << " "; // Output: 10 20 30
        q.pop(); // Remove front element
    }

    return 0;
}
```

#### c) **Priority Queue**

- **Definition**: A priority queue retrieves elements based on their priority (highest by default).

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(10); // Add element
    pq.push(30);
    pq.push(20);

    while (!pq.empty()) {
        cout << pq.top() << " "; // Output: 30 20 10
        pq.pop(); // Remove top element
    }

    return 0;
}
```

---

### 4. **Algorithms**

#### a) **Sort**

- Sorts elements in ascending order.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {3, 1, 4, 1, 5};
    sort(v.begin(), v.end()); // Sort the vector

    for (auto x : v) {
        cout << x << " "; // Output: 1 1 3 4 5
    }

    return 0;
}
```

#### b) **Binary Search**

- Checks if an element exists in a sorted container.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    if (binary_search(v.begin(), v.end(), 3)) {
        cout << "Found"; // Output: Found
    } else {
        cout << "Not Found";
    }

    return 0;
}
```

---

## **Conclusion**

STL simplifies coding in C++ by providing robust and reusable data structures and algorithms. Mastering STL can significantly enhance your programming efficiency.

---
