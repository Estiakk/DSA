# Fibonacci Series in C (Using Recursion)

## 📌 Overview

This project demonstrates how to generate the **Fibonacci series** using **recursion** in the C programming language.

The program takes the number of terms as input from the user and prints the Fibonacci sequence starting from `0`.

---

## 📖 What is the Fibonacci Series?

The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding numbers.

Example:

```text
0 1 1 2 3 5 8 13 21 34 ...
```

---

## 🚀 Features

* Implemented using recursion
* Simple and beginner-friendly code
* User-defined number of terms
* Easy to understand

---

## ▶️ Sample Output

```text
Enter the number: 10
The Fibonacci series is: 0 1 1 2 3 5 8 13 21 34
```

---

## 🧠 How It Works

1. The user enters the number of Fibonacci terms.
2. The function `fibonacci()` prints the current Fibonacci number.
3. It recursively calls itself with:

   * `a` replaced by `b`
   * `b` replaced by `a + b`
4. The recursion stops when `n` becomes `0`.

---

## ⏱️ Time Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n) *(due to recursive function calls)*

---

## 🛠️ Requirements

* GCC or any C compiler
* C Standard Library (`stdio.h`)

---

## 📚 Learning Objectives

This project helps beginners understand:

* Recursive functions
* Function parameters
* Basic recursion flow
* Fibonacci sequence generation
* User input and output in C

---

## 📄 License

This project is open-source and available for educational purposes.
