# Data Structures and Algorithms in C

Welcome to my **Data Structures and Algorithms (DSA)** repository! 🚀

This repository contains my implementations of fundamental **data structures, searching algorithms, sorting algorithms, and recursion problems** using the **C programming language**.

The main goal of this repository is to build a strong foundation in DSA through simple, readable, and hands-on implementations.

---

## 📌 About

Data Structures and Algorithms are fundamental concepts in computer science and software development.

This repository focuses on implementing core DSA concepts from scratch in C, with each topic organized into its own directory.

The implementations are intentionally kept simple and beginner-friendly so that the underlying concepts and algorithms are easy to understand.

### Current Topics

* 📦 Data Structures
* 🔍 Searching Algorithms
* 🔃 Sorting Algorithms
* ♻️ Recursion
* 🧠 Algorithm Analysis
* 💾 Dynamic Memory Allocation
* 👉 Pointers
* 🏗️ Structures in C

---

## 📚 Repository Contents

```text
DSA/
│
├── Circular_Queue/
│   ├── circular_queue.c
│   └── README.md
│
├── Linked_list/
│   ├── linked_list.c
│   └── README.md
│
├── Queue/
│   ├── queue.c
│   └── README.md
│
├── Recursion/
│   ├── Fibonacci/
│   │   ├── fibonacci.c
│   │   └── README.md
│   │
│   └── Sum/
│       ├── sum_using_recursion.c
│       └── README.md
│
├── Search_Algorithm/
│   ├── Binary_search/
│   │   ├── binary_sreach.c
│   │   └── README.md
│   │
│   └── Linear_search/
│       ├── linear_search.c
│       └── README.md
│
├── Sort_Algorithm/
│   ├── Bubble_sort/
│   │   ├── bubble_sort.c
│   │   └── README.md
│   │
│   ├── Insertion_sort/
│   │   ├── insertion_sort.c
│   │   └── README.md
│   │
│   └── Section_sort/
│       ├── section_sort.c
│       └── README.md
│
├── Stack/
│   ├── stack.c
│   └── README.md
│
└── README.md
```

---

# 🧩 Data Structures

## 1. Stack

The Stack implementation uses an array and dynamic memory allocation.

It follows the **LIFO (Last In, First Out)** principle.

### Operations

* Create Stack
* Push
* Pop
* Display
* Stack Overflow handling
* Stack Underflow handling

**Complexity:**

| Operation | Complexity |
| --------- | ---------: |
| Push      |     `O(1)` |
| Pop       |     `O(1)` |
| Display   |     `O(n)` |

📁 Location: `Stack/`

---

## 2. Queue

The Queue implementation uses a dynamically allocated array and follows the **FIFO (First In, First Out)** principle.

### Operations

* Create Queue
* Enqueue
* Dequeue
* Display
* Queue Overflow handling
* Queue Underflow handling

**Complexity:**

| Operation | Complexity |
| --------- | ---------: |
| Enqueue   |     `O(1)` |
| Dequeue   |     `O(1)` |
| Display   |     `O(n)` |

📁 Location: `Queue/`

---

## 3. Circular Queue

The Circular Queue improves the utilization of an array by treating the array as a circular structure.

The implementation uses the **modulo (`%`) operator** to wrap the rear position back to the beginning of the array.

### Operations

* Create Circular Queue
* Enqueue
* Dequeue
* Display
* Overflow handling
* Underflow handling
* Circular indexing

**Complexity:**

| Operation | Complexity |
| --------- | ---------: |
| Enqueue   |     `O(1)` |
| Dequeue   |     `O(1)` |
| Display   |     `O(n)` |

📁 Location: `Circular_Queue/`

---

## 4. Singly Linked List

The Linked List implementation uses dynamically allocated nodes.

Each node stores:

* An integer value
* A pointer to the next node

The implementation maintains both **head** and **tail** pointers and tracks the current size of the list.

### Operations

* Create Node
* Create Linked List
* Insert at beginning
* Insert at middle
* Insert at end
* Delete from beginning
* Delete from middle
* Delete from end
* Display List

📁 Location: `Linked_list/`

---

# 🔍 Searching Algorithms

## 1. Linear Search

Linear Search checks elements sequentially from the beginning of an array until the target element is found or the array ends.

It can be used with both **sorted and unsorted arrays**.

**Time Complexity:**

| Case         | Complexity |
| ------------ | ---------: |
| Best Case    |     `O(1)` |
| Average Case |     `O(n)` |
| Worst Case   |     `O(n)` |

**Space Complexity:** `O(1)`

📁 Location: `Search_Algorithm/Linear_search/`

---

## 2. Binary Search

Binary Search is an efficient searching algorithm that works on a **sorted array**.

Instead of checking every element, it repeatedly divides the search range into two halves.

### Basic Process

1. Find the middle element.
2. Compare it with the target.
3. If the target is smaller, search the left half.
4. If the target is larger, search the right half.
5. Continue until the target is found or the search range becomes empty.

**Time Complexity:**

| Case         | Complexity |
| ------------ | ---------: |
| Best Case    |     `O(1)` |
| Average Case | `O(log n)` |
| Worst Case   | `O(log n)` |

**Space Complexity:** `O(1)`

📁 Location: `Search_Algorithm/Binary_search/`

> **Note:** The input array must be sorted for Binary Search to work correctly.

---

# 🔃 Sorting Algorithms

The repository currently contains three sorting algorithms.

## 1. Bubble Sort

Bubble Sort repeatedly compares adjacent elements and swaps them when they are in the wrong order.

**Time Complexity in this implementation:**

| Case         | Complexity |
| ------------ | ---------: |
| Best Case    |    `O(n²)` |
| Average Case |    `O(n²)` |
| Worst Case   |    `O(n²)` |

**Space Complexity:** `O(1)`

📁 Location: `Sort_Algorithm/Bubble_sort/`

---

## 2. Insertion Sort

Insertion Sort builds the sorted portion of an array one element at a time.

Each new element is inserted into its appropriate position within the already sorted portion.

**Time Complexity:**

| Case         | Complexity |
| ------------ | ---------: |
| Best Case    |     `O(n)` |
| Average Case |    `O(n²)` |
| Worst Case   |    `O(n²)` |

**Space Complexity:** `O(1)`

### Characteristics

* In-place
* Stable
* Adaptive
* Comparison-based

📁 Location: `Sort_Algorithm/Insertion_sort/`

---

## 3. Selection Sort

Selection Sort repeatedly searches the unsorted portion of the array for the smallest element and places it in its correct position.

**Time Complexity:**

| Case         | Complexity |
| ------------ | ---------: |
| Best Case    |    `O(n²)` |
| Average Case |    `O(n²)` |
| Worst Case   |    `O(n²)` |

**Space Complexity:** `O(1)`

### Characteristics

* In-place
* Comparison-based
* Not stable
* Not adaptive

📁 Location: `Sort_Algorithm/Selection_sort/`

---

# ♻️ Recursion

The repository also contains basic programs for understanding recursion.

## 1. Fibonacci Series

The Fibonacci program generates the Fibonacci sequence using a recursive function.

Example:

```text
0 1 1 2 3 5 8 13 21 34 ...
```

**Time Complexity:** `O(n)`

**Space Complexity:** `O(n)` due to recursive function calls.

📁 Location: `Recursion/Fibonacci/`

---

## 2. Sum of Natural Numbers

This program calculates the sum of the first `n` natural numbers using recursion.

The recursive relationship is:

```text
sum(n) = n + sum(n - 1)
```

with the base case:

```text
sum(0) = 0
```

**Time Complexity:** `O(n)`

**Space Complexity:** `O(n)`

📁 Location: `Recursion/Sum/`

---

# 📊 Complexity Overview

| Topic          | Operation / Algorithm | Time Complexity |
| -------------- | --------------------- | --------------: |
| Stack          | Push                  |          `O(1)` |
| Stack          | Pop                   |          `O(1)` |
| Queue          | Enqueue               |          `O(1)` |
| Queue          | Dequeue               |          `O(1)` |
| Circular Queue | Enqueue               |          `O(1)` |
| Circular Queue | Dequeue               |          `O(1)` |
| Linked List    | Insert at Beginning   |          `O(1)` |
| Linked List    | Insert at End         |          `O(1)` |
| Linked List    | Insert at Middle      |          `O(n)` |
| Linked List    | Delete at Beginning   |          `O(1)` |
| Linked List    | Delete at End         |          `O(n)` |
| Linked List    | Delete at Middle      |          `O(n)` |
| Linear Search  | Search                |          `O(n)` |
| Binary Search  | Search                |      `O(log n)` |
| Bubble Sort    | Sorting               |         `O(n²)` |
| Insertion Sort | Sorting               |         `O(n²)` |
| Selection Sort | Sorting               |         `O(n²)` |
| Fibonacci      | Recursive Generation  |          `O(n)` |
| Sum            | Recursive Sum         |          `O(n)` |

---

# 🛠️ Technologies Used

* **Language:** C
* **Compiler:** GCC or any standard C compiler
* **Libraries:** Standard C libraries such as `stdio.h` and `stdlib.h`
* **Development Environment:** Any C-compatible IDE or text editor

No external libraries are required.

---

# 🚀 Getting Started

## Clone the Repository

```bash
git clone https://github.com/Estiakk/DSA.git
```

## Navigate to the Repository

```bash
cd DSA
```

## Compile a Program

Navigate to the directory containing the desired `.c` file and compile it using GCC:

```bash
gcc filename.c -o output
```

## Run the Program

### Linux / macOS

```bash
./output
```

### Windows

```bash
output.exe
```

---

# 🎯 Learning Objectives

This repository is designed to help develop a practical understanding of:

* Fundamental data structures
* Searching algorithms
* Sorting algorithms
* Recursion
* Arrays
* Pointers
* Structures
* Dynamic memory allocation
* Stack and Queue operations
* Linked List operations
* Algorithm complexity
* Time and space analysis
* Problem-solving using C

---

# 📈 Learning Path

A recommended order for exploring this repository is:

```text
C Fundamentals
      │
      ▼
   Arrays
      │
      ├───────────────┐
      ▼               ▼
 Searching         Sorting
      │               │
      ▼               ├── Bubble Sort
 Linear Search        ├── Selection Sort
      │               └── Insertion Sort
      ▼
 Binary Search

      │
      ▼
   Recursion
      │
      ├── Fibonacci
      └── Sum

      │
      ▼
 Data Structures
      │
      ├── Stack
      ├── Queue
      ├── Circular Queue
      └── Linked List
```

---

# 📁 Repository Organization

Each major topic has its own directory, and individual implementations are separated into their own folders where appropriate.

Most implementations also include a dedicated `README.md` containing:

* Overview
* Explanation
* Features
* Operations
* Examples
* Complexity analysis
* Learning objectives
* Compilation instructions

This makes each implementation independently understandable while keeping the root repository organized.

---

# 🤝 Contributions

This repository is primarily a personal learning project.

Suggestions, improvements, bug fixes, and educational contributions are welcome.

If you find an issue or have an improvement in mind, feel free to:

1. Fork the repository
2. Create a new branch
3. Make your changes
4. Commit your changes
5. Open a Pull Request

---

# 🔮 Future Improvements

As the repository grows, additional DSA concepts may be added, such as:

* Doubly Linked List
* Circular Linked List
* Priority Queue
* Deque
* Binary Tree
* Binary Search Tree
* Tree Traversals
* Heap
* Hash Table
* Graphs
* Merge Sort
* Quick Sort
* Greedy Algorithms
* Dynamic Programming
* Backtracking

---

# 📄 License

This repository is intended primarily for **educational and learning purposes**.

---

## ⭐ Support

If this repository helps you learn Data Structures and Algorithms, consider giving it a ⭐ on GitHub.

**Keep learning. Keep building. Keep solving. 🚀**
