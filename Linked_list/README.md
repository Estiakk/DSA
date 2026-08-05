# Singly Linked List in C

## 📌 Overview

This project implements a **Singly Linked List** in the C programming language. It demonstrates the basic operations of a linked list, including creating nodes, inserting elements at any position, deleting elements, and displaying the list.

This project is ideal for beginners who want to understand dynamic memory allocation and linked list operations in C.

---

## ✨ Features

* Create a new linked list
* Create individual nodes dynamically
* Insert elements at any valid position
* Delete elements from any valid position
* Display the linked list
* Maintain both **head** and **tail** pointers
* Track the current size of the list

---

## 📚 Data Structure

Each node contains:

* An integer value
* A pointer to the next node

```text
Head
 │
 ▼
+-------+------+    +-------+------+    +-------+------+
|  33   |  •───┼──► | 100   |  •───┼──► |  24   | NULL |
+-------+------+    +-------+------+    +-------+------+
                                             ▲
                                             │
                                            Tail
```

---

## 🚀 Operations Implemented

### Create Node

Allocates memory for a new node and initializes it.

### Create Linked List

Initializes an empty linked list with:

* `head = NULL`
* `tail = NULL`
* `size = 0`

### Insert

Inserts a new node at any valid position.

Supported cases:

* Beginning of the list
* Middle of the list
* End of the list

### Delete

Deletes a node from any valid position.

Supported cases:

* First node
* Middle node
* Last node

### Print List

Traverses the linked list and prints all elements.

---

## 💻 Source Code

The project is implemented in **C** using:

* `stdio.h`
* `stdlib.h`

No external libraries are required.

---

## ▶️ Sample Output

```text
33 inserted at position 0
21 inserted at position 1
24 inserted at position 2

List(size=3): 33 -> 21 -> 24 -> NULL

100 inserted at position 1

List(size=4): 33 -> 100 -> 21 -> 24 -> NULL

List(size=3): 33 -> 100 -> 24 -> NULL

List(size=2): 100 -> 24 -> NULL

List(size=1): 100 -> NULL
```

---

## 🧠 How It Works

1. Create an empty linked list.
2. Dynamically allocate memory for each new node.
3. Insert nodes at the desired position.
4. Update the `head`, `tail`, and `size` accordingly.
5. Delete nodes safely using `free()`.
6. Traverse the list to display all elements.

---

## ⏱️ Time Complexity

| Operation           | Time Complexity |
| ------------------- | --------------- |
| Create List         | O(1)            |
| Insert at Beginning | O(1)            |
| Insert at End       | O(1)            |
| Insert at Middle    | O(n)            |
| Delete at Beginning | O(1)            |
| Delete at End       | O(n)            |
| Delete at Middle    | O(n)            |
| Traverse / Print    | O(n)            |

---

## 🛠️ Requirements

* GCC or any C compiler
* C Standard Library

  * `stdio.h`
  * `stdlib.h`

---

## 📖 Concepts Covered

* Structures (`struct`)
* Dynamic Memory Allocation (`malloc` and `free`)
* Pointers
* Singly Linked Lists
* Head and Tail pointers
* List Traversal
* Insertion and Deletion Algorithms
* Time Complexity Analysis

---

## 🎯 Learning Objectives

After completing this project, you will understand:

* How linked lists differ from arrays
* How nodes are dynamically created
* How insertion and deletion work
* Memory management in C
* Pointer manipulation
* Building fundamental data structures from scratch

---

## 📄 License

This project is open-source and intended for learning and educational purposes.
