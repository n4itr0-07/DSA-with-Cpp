# Time and Space Complexity

## Introduction

Time and space complexity are measures used to evaluate the efficiency of algorithms. 

### Time Complexity

Time complexity measures the amount of time an algorithm takes to complete as a function of the size of the input data. 

### Space Complexity

Space complexity measures the amount of memory an algorithm uses in relation to the size of the input data.

## Time Complexity

### Big O Notation
![Tc_Sc](https://github.com/user-attachments/assets/ab6102a2-85bb-45f8-8b75-c86d0715d8da)

Big O notation is used to describe the upper bound of an algorithm's time complexity. It characterizes functions according to their growth rates:

- **O(1)**: Constant time
- **O(log n)**: Logarithmic time
- **O(n)**: Linear time
- **O(n log n)**: Linearithmic time
- **O(n^2)**: Quadratic time
- **O(2^n)**: Exponential time

### Examples

#### Constant Time - O(1)

```python
def constant_time_example(arr):
    return arr[0]

# Example
arr = [1, 2, 3, 4, 5]
print(constant_time_example(arr))  # Output: 1
```

#### Linear Time - O(n)

```python
def linear_time_example(arr):
    total = 0
    for num in arr:
        total += num
    return total

# Example
arr = [1, 2, 3, 4, 5]
print(linear_time_example(arr))  # Output: 15
```

#### Quadratic Time - O(n^2)

```python
def quadratic_time_example(arr):
    pairs = []
    for i in range(len(arr)):
        for j in range(len(arr)):
            pairs.append((arr[i], arr[j]))
    return pairs

# Example
arr = [1, 2, 3]
print(quadratic_time_example(arr))  # Output: [(1, 1), (1, 2), (1, 3), (2, 1), (2, 2), (2, 3), (3, 1), (3, 2), (3, 3)]
```

## Space Complexity

### Examples

#### Constant Space - O(1)

```python
def constant_space_example(n):
    result = n * 2
    return result

# Example
n = 5
print(constant_space_example(n))  # Output: 10
```

#### Linear Space - O(n)

```python
def linear_space_example(arr):
    squares = []
    for num in arr:
        squares.append(num * num)
    return squares

# Example
arr = [1, 2, 3, 4, 5]
print(linear_space_example(arr))  # Output: [1, 4, 9, 16, 25]
```

#### Quadratic Space - O(n^2)

```python
def quadratic_space_example(n):
    matrix = [[0 for _ in range(n)] for _ in range(n)]
    return matrix

# Example
n = 3
print(quadratic_space_example(n))
# Output: 
# [[0, 0, 0],
#  [0, 0, 0],
#  [0, 0, 0]]
```

## Conclusion

Understanding time and space complexity helps in analyzing and optimizing algorithms. By knowing the complexity, we can predict the performance of the algorithm and make informed decisions about its use in different scenarios.

---
