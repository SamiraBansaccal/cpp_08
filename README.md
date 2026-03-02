# CPP Module 08 (42 School)

## 📋 Description
This module focuses on the **Standard Template Library (STL)**. It introduces containers, iterators, and algorithms, which are the backbone of modern C++ development. The goal is to learn how to choose the right data structure for a specific problem.

## 🧠 Implementation Logic (Score: 100/100)
The exercises cover the most essential parts of the STL:

- **Ex00: Easyfind**: 
  - Implementation of a template function that finds the first occurrence of an integer in a container of integers.
  - Worked with **Iterators** to maintain generic access regardless of the container type (`std::vector`, `std::list`, etc.).
  - Handled cases where the element is not found by throwing an exception.
- **Ex01: Span**: 
  - Creation of a class capable of storing a specific amount of integers and finding the shortest and longest "span" (distance) between them.
  - **Efficiency**: Used `std::sort` and adjacent differences to calculate spans in $O(n \log n)$ time.
  - **Fill range**: Implemented a method to add a large range of numbers at once using iterators, avoiding repetitive calls and improving performance.
- **Ex02: Mutated Abomination**: 
  - Implementation of the `stack` container, but with a twist: making it iterable.
  - While `std::stack` is a container adapter that doesn't normally provide iterators, I inherited from it to expose the underlying container's iterators.

## 📂 Project Structure
- `ex00/`: Easyfind (Algorithm and Iterators).
- `ex01/`: Span (Container management and range logic).
- `ex02/`: MutantStack (Container adapters and iterator exposure).

## 🛠️ Usage & Compilation
Compiled with `c++ -Wall -Wextra -Werror -std=c++98`.
```bash
make
```
