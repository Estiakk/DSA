# Binary Search in C

## 📌 Overview

This project implements the **Binary Search** algorithm in the C programming language. Binary Search is an efficient searching algorithm that repeatedly divides a **sorted array** in half until the target element is found or the search interval becomes empty.

Compared to Linear Search, Binary Search significantly reduces the number of comparisons, making it ideal for searching large sorted datasets.

---

## 📖 What is Binary Search?

Binary Search works only on **sorted arrays**.

Instead of checking every element one by one, it:

1. Finds the middle element.
2. Compares it with the target value.
3. Searches either the left half or the right half.
4. Repeats the process until the element is found or the search space becomes empty.

Example:

```text
Sorted Array:
+----+----+----+----+----+----+----+
| 10 | 20 | 30 | 40 | 50 | 60 | 70 |
+----+----+----+----+----+----+----+
             ▲
            Mid
```

---

## ✨ Features

* Iterative Binary Search implementation
* User input for array size and elements
* Searches for any integer value
* Displays the position of the found element
* Handles the case when the element is not found

---

## ▶️ Sample Output

### Element Found

```text
Enter the element number: 7
Enter the elements: 10 20 30 40 50 60 70
Enter the value to search: 50

50 found at position 5
```

### Element Not Found

```text
Enter the element number: 7
Enter the elements: 10 20 30 40 50 60 70
Enter the value to search: 25

Position not found!!!
```

---

## 🧠 How It Works

1. The user enters the number of elements.
2. The user inputs a **sorted array**.
3. The program sets:

   * `low` to the first index.
   * `high` to the last index.
4. It calculates the middle index.
5. If the middle element matches the target, the search ends.
6. Otherwise:

   * Search the right half if the target is larger.
   * Search the left half if the target is smaller.
7. Repeat until the element is found or the search interval becomes empty.

---

## ⏱️ Time Complexity

| Case         | Time Complexity |
| ------------ | --------------- |
| Best Case    | O(1)            |
| Average Case | O(log n)        |
| Worst Case   | O(log n)        |

### Space Complexity

* **O(1)** (Iterative implementation)

---

## 🛠️ Requirements

* GCC or any C compiler
* C Standard Library (`stdio.h`)

---

## 📖 Concepts Covered

* Binary Search Algorithm
* Divide and Conquer
* Arrays
* Loops
* Conditional Statements
* Searching Algorithms
* User Input and Output

---

## ⚠️ Important Note

**Binary Search requires the array to be sorted in ascending order.**

If the input array is unsorted, the search result will be incorrect.

---

## 🎯 Learning Objectives

By completing this project, you will learn:

* How Binary Search works
* The difference between Binary Search and Linear Search
* How divide-and-conquer algorithms reduce search time
* Implementing iterative search algorithms in C
* Time and space complexity analysis

---

## 📄 License

This project is open-source and intended for learning and educational purposes.
