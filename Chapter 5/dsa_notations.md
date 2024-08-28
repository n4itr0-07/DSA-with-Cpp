# Notations in Data Structures and Algorithms

## 1. **Asymptotic Notations**

Asymptotic notations are mathematical tools used to describe the time complexity or space complexity of an algorithm as the input size grows. These notations give an idea of the efficiency of an algorithm in terms of execution time or memory usage.

### 1.1 **Big O Notation (O)**

- **Definition**: Big O notation describes the upper bound of the time complexity of an algorithm. It gives the worst-case scenario.
- **Mathematical Representation**: If `T(n)` is the time complexity of an algorithm, then `T(n) = O(f(n))` if there exist positive constants `c` and `n0` such that:
  \[
  T(n) \leq c \cdot f(n) \quad \text{for all } n \geq n0
  \]
- **Example**: If an algorithm takes at most `5n^2 + 3n + 2` operations, then its Big O notation is `O(n^2)`.

### 1.2 **Omega Notation (Ω)**

- **Definition**: Omega notation describes the lower bound of the time complexity of an algorithm. It gives the best-case scenario.
- **Mathematical Representation**: If `T(n)` is the time complexity of an algorithm, then `T(n) = Ω(g(n))` if there exist positive constants `c` and `n0` such that:
  \[
  T(n) \geq c \cdot g(n) \quad \text{for all } n \geq n0
  \]
- **Example**: If an algorithm takes at least `n^2` operations, then its Omega notation is `Ω(n^2)`.

### 1.3 **Theta Notation (Θ)**

- **Definition**: Theta notation provides a tight bound on the time complexity of an algorithm. It represents both the upper and lower bounds.
- **Mathematical Representation**: If `T(n)` is the time complexity of an algorithm, then `T(n) = Θ(h(n))` if there exist positive constants `c1`, `c2`, and `n0` such that:
  \[
  c1 \cdot h(n) \leq T(n) \leq c2 \cdot h(n) \quad \text{for all } n \geq n0
  \]
- **Example**: If an algorithm always takes `2n^2 + 3n` operations, then its Theta notation is `Θ(n^2)`.

## 2. **Other Notations**

### 2.1 **Little o Notation (o)**

- **Definition**: Little o notation describes an upper bound that is not tight. It gives a loose upper bound on the time complexity.
- **Mathematical Representation**: If `T(n)` is the time complexity of an algorithm, then `T(n) = o(f(n))` if:
  \[
  \lim_{n \to \infty} \frac{T(n)}{f(n)} = 0
  \]
- **Example**: If `T(n) = n` and `f(n) = n^2`, then `T(n) = o(n^2)` because `\frac{n}{n^2} = \frac{1}{n} \to 0` as `n \to \infty`.

### 2.2 **Little Omega Notation (ω)**

- **Definition**: Little Omega notation describes a lower bound that is not tight. It gives a loose lower bound on the time complexity.
- **Mathematical Representation**: If `T(n)` is the time complexity of an algorithm, then `T(n) = ω(g(n))` if:
  \[
  \lim_{n \to \infty} \frac{T(n)}{g(n)} = \infty
  \]
- **Example**: If `T(n) = n^2` and `g(n) = n`, then `T(n) = ω(n)` because `\frac{n^2}{n} = n \to \infty` as `n \to \infty`.

## 3. **Common Time Complexities**

- **O(1)**: Constant time complexity.
- **O(log n)**: Logarithmic time complexity.
- **O(n)**: Linear time complexity.
- **O(n log n)**: Linearithmic time complexity.
- **O(n^2)**: Quadratic time complexity.
- **O(2^n)**: Exponential time complexity.
- **O(n!)**: Factorial time complexity.

## 4. **Summary**

Asymptotic notations are crucial for analyzing the efficiency of algorithms. Understanding the differences between Big O, Omega, and Theta notations helps in determining the performance of algorithms in different scenarios, whether it's the worst case, best case, or average case.

