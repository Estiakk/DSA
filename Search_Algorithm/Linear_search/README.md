# Linear Search in C

## 📌 Overview

This project implements the **Linear Search** algorithm in the C programming language. Linear Search is one of the simplest searching techniques, where each element of an array is checked sequentially until the desired element is found or the end of the array is reached.

Unlike Binary Search, Linear Search works on both **sorted and unsorted arrays**.

---

## 📖 What is Linear Search?

Linear Search scans the array from the first element to the last element, comparing each value with the target element.

If a match is found, the position of the element is displayed. Otherwise, the program reports that the element is not present.

Example:

```text
Array:
+----+----+----+----+----+
| 15 | 22 |  8 | 40 | 17 |
+----+----+----+----+----+
         ▲
      Searching...
```

---

## ✨ Features

* Simple and beginner-friendly implementation
* Works with both sorted and unsorted arrays
* User input for array size and elements
* Searches for any integer value
* Displays the position of the found element
* Handles the case when the element is not found

---

## ▶️ Sample Output

### Element Found

```text
Enter the number of elements: 5
Enter the elements: 12 25 18 40 7
Enter the element to search: 18

18 is found in position 3
```

### Element Not Found

```text
Enter the number of elements: 5
Enter the elements: 12 25 18 40 7
Enter the element to search: 30

Position not found
```

---

## 🧠 How It Works

1. The user enters the number of elements.
2. The user inputs the array elements.
3. The user enters the value to search for.
4. The program compares the target value with each array element one by one.
5. If a match is found, the position of the element is displayed.
6. If no match is found after checking the entire array, the program prints **"Position not found"**.

---

## ⏱️ Time Complexity

| Case         | Time Complexity |
| ------------ | --------------- |
| Best Case    | O(1)            |
| Average Case | O(n)            |
| Worst Case   | O(n)            |

### Space Complexity

* **O(1)**

---

## 🛠️ Requirements

* GCC or any C compiler
* C Standard Library (`stdio.h`)

---

## 📖 Concepts Covered

* Linear Search Algorithm
* Arrays
* Loops
* Conditional Statements
* Sequential Searching
* User Input and Output

---

## ⚠️ Note

If the searched element appears **multiple times** in the array, the current implementation prints **all matching positions**, since it does not stop after finding the first occurrence.

---

## 🎯 Learning Objectives

By completing this project, you will learn:

* How Linear Search works
* The difference between Linear Search and Binary Search
* Searching elements in arrays
* Implementing search algorithms in C
* Time and space complexity analysis

---

## 📄 License

This project is open-source and intended for learning and educational purposes.
