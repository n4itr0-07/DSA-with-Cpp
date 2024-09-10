# Combination and Permutation

## **Permutation**

- **Definition:** A permutation is an arrangement of all or part of a set of objects in a specific order.
- **Formula:**

  For a set of \( n \) objects, the number of ways to arrange \( r \) objects out of \( n \) is given by:

  \[
  P(n, r) = \frac{n!}{(n-r)!}
  \]

  - **Where:**
    - \( n! \) (n factorial) is the product of all positive integers up to \( n \).
    - \( r \) is the number of objects to arrange.

- **Example:**
  - How many ways can you arrange 3 letters out of 5 distinct letters (A, B, C, D, E)?
  - Here, \( n = 5 \) and \( r = 3 \).
  - Using the formula:
    \[
    P(5, 3) = \frac{5!}{(5-3)!} = \frac{5 \times 4 \times 3 \times 2 \times 1}{2 \times 1} = \frac{120}{2} = 60
    \]
  - So, there are 60 possible permutations.

## **Combination**

- **Definition:** A combination is a selection of all or part of a set of objects without regard to the order.
- **Formula:**

  For a set of \( n \) objects, the number of ways to choose \( r \) objects from \( n \) is given by:

  \[
  C(n, r) = \frac{n!}{r!(n-r)!}
  \]

  - **Where:**
    - \( r! \) (r factorial) is the product of all positive integers up to \( r \).
    - \( n! \) and \( (n-r)! \) are as defined above.

- **Example:**
  - How many ways can you choose 3 letters out of 5 distinct letters (A, B, C, D, E)?
  - Here, \( n = 5 \) and \( r = 3 \).
  - Using the formula:
    \[
    C(5, 3) = \frac{5!}{3! \times (5-3)!} = \frac{5 \times 4 \times 3 \times 2 \times 1}{3 \times 2 \times 1 \times 2 \times 1} = \frac{120}{12} = 10
    \]
  - So, there are 10 possible combinations.

## **Key Differences:**

- **Order Matters:** In permutations, the order of the objects matters, while in combinations, it does not.
- **Number of Arrangements:** Permutations typically result in a larger number of arrangements because order is considered. Combinations result in fewer possible selections as order is not considered.

## **Applications:**
- **Permutations:** Used in scenarios where the order of arrangement is important, such as seating arrangements, race outcomes, passwords, etc.
- **Combinations:** Used in scenarios where the order of selection does not matter, such as lottery numbers, choosing a committee, selecting ingredients, etc.

## **Further Reading:**
- [Learn more about permutations](https://en.wikipedia.org/wiki/Permutation)
- [Learn more about combinations](https://en.wikipedia.org/wiki/Combination)