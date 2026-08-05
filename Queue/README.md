# Queue in C (Linear Queue Using Array)

## 📌 Overview

This project implements a **Linear Queue** using an array in the C programming language. A queue is a linear data structure that follows the **FIFO (First In, First Out)** principle, where the first element inserted is the first one removed.

This implementation demonstrates the basic queue operations using a dynamically allocated array.

---

## ✨ Features

* Create a queue with a fixed size
* Enqueue (Insert) elements
* Dequeue (Remove) elements
* Display queue elements
* Detect queue overflow
* Detect queue underflow
* Simple array-based implementation

---

## 📚 Data Structure

The queue maintains the following members:

* `front` – Index of the first element
* `tail` – Index of the last element
* `size` – Maximum capacity of the queue
* `arr` – Dynamic array for storing queue elements

Example:

```text
Front                          Tail
  │                              │
  ▼                              ▼
+----+----+----+----+----+
| 33 | 19 | 21 | 24 | 13 |
+----+----+----+----+----+
```

---

## 🚀 Operations Implemented

### Create Queue

Allocates memory for the queue and initializes:

* `front = -1`
* `tail = -1`
* Queue capacity
* Dynamic array

### Enqueue

Adds an element to the rear of the queue.

* Checks whether the queue is full.
* Inserts the element at the rear.
* Updates the `tail` index.

### Dequeue

Removes the front element from the queue.

* Checks whether the queue is empty.
* Removes the front element.
* Advances the `front` index.

### Display

Prints the elements currently stored in the queue.

---

## 💻 Source Code

The project is written in **C** using:

* `stdio.h`
* `stdlib.h`

No external libraries are required.

---

## ▶️ Sample Output

```text
Queue is empty!!!

33 successfully enqueued.
19 successfully enqueued.
21 successfully enqueued.
24 successfully enqueued.
13 successfully enqueued.

Queue is full!!!

Queue elements: 33 19 21 24 13

33 successfully dequeued.
19 successfully dequeued.
21 successfully dequeued.
24 successfully dequeued.
13 successfully dequeued.

Queue is empty!!!
```

---

## 🧠 How It Works

1. Create an empty queue.
2. Insert elements using **Enqueue**.
3. Remove elements using **Dequeue**.
4. Elements are processed in **FIFO (First In, First Out)** order.
5. The queue is:

   * **Full** when `tail == size - 1`
   * **Empty** when all inserted elements have been dequeued.

---

## ⏱️ Time Complexity

| Operation    | Time Complexity |
| ------------ | --------------- |
| Create Queue | O(1)            |
| Enqueue      | O(1)            |
| Dequeue      | O(1)            |
| Display      | O(n)            |

---

## 🛠️ Requirements

* GCC or any C compiler
* C Standard Library

  * `stdio.h`
  * `stdlib.h`

---

## 📖 Concepts Covered

* Queue Data Structure
* FIFO (First In, First Out)
* Arrays
* Dynamic Memory Allocation
* Structures (`struct`)
* Queue Overflow
* Queue Underflow

---

## 🎯 Learning Objectives

By completing this project, you will learn:

* How a linear queue operates
* The implementation of queue operations using arrays
* Managing queue indices (`front` and `tail`)
* Dynamic memory allocation in C
* Detecting queue overflow and underflow
* The limitations of a linear queue compared to a circular queue

---

## ⚠️ Limitations

This implementation is a **Linear Queue**, so dequeued positions are **not reused**. Once the `tail` reaches the end of the array, no new elements can be inserted even if there is free space at the beginning of the array.

A **Circular Queue** overcomes this limitation by reusing freed positions through circular indexing.

---

## 📄 License

This project is open-source and intended for learning and educational purposes.
