# Sum of Natural Numbers in C (Using Recursion)

## 📌 Overview

This project demonstrates how to calculate the **sum of the first *n* natural numbers** using **recursion** in the C programming language.

The program accepts a positive integer from the user and recursively computes the sum from `1` to `n`.

---

## 📖 What is Recursion?

Recursion is a programming technique where a function calls itself to solve a smaller instance of the same problem until a **base case** is reached.

For this program:

* **Base Case:** `sum(0) = 0`
* **Recursive Case:** `sum(n) = n + sum(n - 1)`

---

## ✨ Features

* Recursive implementation
* Beginner-friendly code
* User input support
* Demonstrates recursion with a simple mathematical problem

---

## 💻 Source Code

```c
#include<stdio.h>

int sum(int n){
    if(n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int main(){
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("The sum of the numbers: %d", sum(n));

    return 0;
}
```

---

## ▶️ Sample Output

```text
Enter the number: 10
The sum of the numbers: 55
```

---

## 🧠 How It Works

1. The user enters a positive integer `n`.
2. The `sum()` function calls itself with `n - 1`.
3. Each recursive call adds the current value of `n`.
4. When `n` becomes `0`, recursion stops.
5. The recursive calls return, producing the final sum.

Example for `n = 5`:

```text
sum(5)
= 5 + sum(4)
= 5 + 4 + sum(3)
= 5 + 4 + 3 + sum(2)
= 5 + 4 + 3 + 2 + sum(1)
= 5 + 4 + 3 + 2 + 1 + sum(0)
= 15
```

---

## ⏱️ Time Complexity

| Operation     | Complexity |
| ------------- | ---------- |
| Recursive Sum | O(n)       |

### Space Complexity

* **O(n)** (due to the recursion call stack)

---

## 🛠️ Requirements

* GCC or any C compiler
* C Standard Library (`stdio.h`)

---

## 📖 Concepts Covered

* Recursion
* Base Case
* Recursive Function Calls
* Function Return Values
* User Input and Output
* Natural Number Summation

---

## 🎯 Learning Objectives

By completing this project, you will learn:

* How recursive functions work
* The importance of a base case
* How recursive calls build and unwind
* Calculating the sum of natural numbers recursively
* Basic function design in C

---

## 📄 License

This project is open-source and intended for learning and educational purposes.
