# Circular Queue in C

## 📌 Overview

This project implements a **Circular Queue** using an array in the C programming language. A circular queue efficiently utilizes memory by treating the array as circular, allowing the rear (tail) to wrap around to the beginning when space becomes available.

This implementation supports the fundamental queue operations and demonstrates how circular queues overcome the limitations of a linear queue.

---

## ✨ Features

* Create a circular queue with a fixed size
* Enqueue (Insert) elements
* Dequeue (Remove) elements
* Display queue elements
* Detect queue overflow
* Detect queue underflow
* Circular indexing using the modulo (`%`) operator

---

## 📚 Data Structure

The queue maintains the following members:

* `front` – Index of the first element
* `tail` – Index of the last element
* `size` – Maximum capacity of the queue
* `arr` – Dynamic array for storing queue elements

Example representation:

```text id="q7k4s2"
          Front                 Tail
            │                     │
            ▼                     ▼
+----+----+----+----+----+
| 33 | 19 | 21 | 24 | 13 |
+----+----+----+----+----+
          Circular Array
```

After dequeuing elements and inserting new ones, the tail wraps around to the beginning of the array:

```text id="8ab9fk"
+----+----+----+----+----+
| 55 | 56 | 21 | 24 | 13 |
+----+----+----+----+----+
  ▲
  └──── Tail wraps around
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

* Checks for overflow
* Wraps around using modulo arithmetic
* Updates the `tail` pointer

### Dequeue

Removes the front element.

* Checks for underflow
* Updates the `front` pointer
* Resets the queue when it becomes empty

### Display

Prints the elements currently stored in the circular queue.

---

## 💻 Source Code

The project is written in **C** using:

* `stdio.h`
* `stdlib.h`

No external libraries are required.

---

## ▶️ Sample Output

```text id="b2k8vz"
Circular Queue elements: (empty)

Successfully enqueued 33
Successfully enqueued 19
Successfully enqueued 21
Successfully enqueued 24
Successfully enqueued 13

Queue is full!!!

Successfully dequeued 33
Successfully dequeued 19
Successfully dequeued 21

Successfully enqueued 55

Successfully dequeued 24
Successfully dequeued 13

Successfully enqueued 56
```

---

## 🧠 How It Works

1. Create an empty circular queue.
2. Insert elements using **Enqueue**.
3. Remove elements using **Dequeue**.
4. When the rear reaches the end of the array, it wraps back to index `0`.
5. The queue is considered:

   * **Full** when the next rear position equals the front.
   * **Empty** when both `front` and `tail` are `-1`.

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

* Circular Queue
* Queue ADT
* FIFO (First In, First Out)
* Dynamic Memory Allocation
* Arrays
* Structures (`struct`)
* Modulo Arithmetic
* Overflow and Underflow Handling

---

## 🎯 Learning Objectives

By completing this project, you will learn:

* How a circular queue works
* Why circular queues are more efficient than linear queues
* How modulo arithmetic enables circular traversal
* Dynamic memory allocation in C
* Queue insertion and deletion operations
* Managing fixed-size queues efficiently

---

## ⚠️ Note

In the current `display()` function, the last element (at the `tail` index) is not printed because the loop stops when `i == tail`. To display every element, print the `tail` element after the loop or modify the traversal logic accordingly.

---

## 📄 License

This project is open-source and intended for learning and educational purposes.
