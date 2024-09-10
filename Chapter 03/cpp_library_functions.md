# C++ Standard Library Functions

## 1. `<iostream>`

### `std::cout`
- **Description:** Used to print output to the console.
- **Example:**
  ```cpp
  std::cout << "Hello, World!" << std::endl;
  ```

### `std::cin`
- **Description:** Used to take input from the console.
- **Example:**
  ```cpp
  int x;
  std::cin >> x;
  ```

### `std::cerr`
- **Description:** Used to print error messages to the console.
- **Example:**
  ```cpp
  std::cerr << "An error occurred!" << std::endl;
  ```

### `std::clog`
- **Description:** Used to print log messages to the console.
- **Example:**
  ```cpp
  std::clog << "Log message." << std::endl;
  ```

## 2. `<cmath>`

### `std::sqrt`
- **Description:** Returns the square root of a number.
- **Example:**
  ```cpp
  double result = std::sqrt(25.0); // result = 5.0
  ```

### `std::pow`
- **Description:** Raises a number to a specified power.
- **Example:**
  ```cpp
  double result = std::pow(2.0, 3.0); // result = 8.0
  ```

### `std::abs`
- **Description:** Returns the absolute value of a number.
- **Example:**
  ```cpp
  int result = std::abs(-10); // result = 10
  ```

### `std::sin`
- **Description:** Returns the sine of an angle (in radians).
- **Example:**
  ```cpp
  double result = std::sin(3.14159 / 2); // result = 1.0
  ```

### `std::cos`
- **Description:** Returns the cosine of an angle (in radians).
- **Example:**
  ```cpp
  double result = std::cos(0); // result = 1.0
  ```

## 3. `<cstdlib>`

### `std::rand`
- **Description:** Generates a random number.
- **Example:**
  ```cpp
  int random_number = std::rand();
  ```

### `std::srand`
- **Description:** Seeds the random number generator.
- **Example:**
  ```cpp
  std::srand(time(0));
  int random_number = std::rand();
  ```

### `std::exit`
- **Description:** Terminates the program.
- **Example:**
  ```cpp
  std::exit(0);
  ```

## 4. `<algorithm>`

### `std::sort`
- **Description:** Sorts the elements in a range.
- **Example:**
  ```cpp
  std::vector<int> vec = {4, 2, 3, 1};
  std::sort(vec.begin(), vec.end());
  ```

### `std::reverse`
- **Description:** Reverses the order of elements in a range.
- **Example:**
  ```cpp
  std::reverse(vec.begin(), vec.end());
  ```

### `std::max_element`
- **Description:** Returns an iterator to the maximum element in a range.
- **Example:**
  ```cpp
  auto max_it = std::max_element(vec.begin(), vec.end());
  ```

### `std::min_element`
- **Description:** Returns an iterator to the minimum element in a range.
- **Example:**
  ```cpp
  auto min_it = std::min_element(vec.begin(), vec.end());
  ```

### `std::find`
- **Description:** Finds the first occurrence of a value in a range.
- **Example:**
  ```cpp
  auto it = std::find(vec.begin(), vec.end(), 3);
  ```

## 5. `<string>`

### `std::string`
- **Description:** Represents a sequence of characters.
- **Example:**
  ```cpp
  std::string str = "Hello";
  ```

### `std::string::length`
- **Description:** Returns the length of a string.
- **Example:**
  ```cpp
  size_t len = str.length();
  ```

### `std::string::substr`
- **Description:** Returns a substring.
- **Example:**
  ```cpp
  std::string sub = str.substr(0, 3); // sub = "Hel"
  ```

### `std::string::find`
- **Description:** Finds the first occurrence of a substring.
- **Example:**
  ```cpp
  size_t pos = str.find("lo"); // pos = 3
  ```

### `std::string::append`
- **Description:** Appends another string to the string.
- **Example:**
  ```cpp
  str.append(" World"); // str = "Hello World"
  ```

## 6. `<vector>`

### `std::vector`
- **Description:** Represents a dynamic array.
- **Example:**
  ```cpp
  std::vector<int> vec = {1, 2, 3};
  ```

### `std::vector::push_back`
- **Description:** Adds an element to the end of the vector.
- **Example:**
  ```cpp
  vec.push_back(4);
  ```

### `std::vector::size`
- **Description:** Returns the number of elements in the vector.
- **Example:**
  ```cpp
  size_t size = vec.size();
  ```

### `std::vector::begin`
- **Description:** Returns an iterator to the beginning of the vector.
- **Example:**
  ```cpp
  auto it = vec.begin();
  ```

### `std::vector::end`
- **Description:** Returns an iterator to the end of the vector.
- **Example:**
  ```cpp
  auto it = vec.end();
  ```

### `std::vector::at`
- **Description:** Returns a reference to the element at a specified position.
- **Example:**
  ```cpp
  int element = vec.at(1); // element = 2
  ```

## 7. `<map>`

### `std::map`
- **Description:** Represents an associative array or dictionary.
- **Example:**
  ```cpp
  std::map<int, std::string> m;
  ```

### `std::map::insert`
- **Description:** Inserts a key-value pair into the map.
- **Example:**
  ```cpp
  m.insert({1, "one"});
  ```

### `std::map::find`
- **Description:** Finds an element by its key.
- **Example:**
  ```cpp
  auto it = m.find(1);
  ```

### `std::map::erase`
- **Description:** Removes an element by its key.
- **Example:**
  ```cpp
  m.erase(1);
  ```

### `std::map::size`
- **Description:** Returns the number of elements in the map.
- **Example:**
  ```cpp
  size_t size = m.size();
  ```