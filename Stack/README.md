# Stack Implementation in C

This repository contains an implementation of a **Stack data structure** using an array and dynamic memory allocation in the C programming language.

## 📌 About Stack

A **Stack** is a linear data structure that follows the **LIFO (Last In, First Out)** principle.

This means the element that is inserted last will be removed first.

### Example

```text
Push:  10 → 20 → 30

Stack:
   30 ← Top
   20
   10

Pop → 30
```

## ⚙️ Operations Implemented

This implementation supports the following operations:

### 1. Push

Adds a new element to the top of the stack.

```text
Before: 10 20
Push 30
After:  10 20 30
```

If the stack is full, a **Stack Overflow** message is displayed.

### 2. Pop

Removes the element from the top of the stack.

```text
Before: 10 20 30
Pop
After:  10 20
```

If the stack is empty, a **Stack Underflow** message is displayed.

### 3. Display

Displays all elements currently stored in the stack.

### 4. Create Stack

The stack is created dynamically using `malloc()`.

The implementation stores:

* `top` — Keeps track of the top element
* `size` — Stores the maximum stack capacity
* `arr` — Dynamically allocated array used to store elements

## 🔄 Stack Representation

For a stack with elements `33` and `19`:

```text
     ┌────┐
Top →│ 19 │
     ├────┤
     │ 33 │
     └────┘
```

Since Stack follows **LIFO**, `19` will be removed before `33`.

## 💻 Example

The program creates a stack with a capacity of `5` and performs the following operations:

```text
Push 33
Push 19
Display
Pop
Pop
```

Expected output:

```text
33 pushed successfully.
19 pushed successfully.
Stack elements: 33 19
19 Pop successfull.
33 Pop successfull.
```

## ⏱️ Complexity

| Operation    | Time Complexity |
| ------------ | --------------- |
| Push         | `O(1)`          |
| Pop          | `O(1)`          |
| Display      | `O(n)`          |
| Create Stack | `O(n)`          |

**Space Complexity:** `O(n)`

## ⭐ Characteristics

* **Data Structure:** Stack
* **Principle:** LIFO (Last In, First Out)
* **Implementation:** Array
* **Memory Allocation:** Dynamic
* **Insertion:** At the top
* **Deletion:** From the top
* **Access:** Top element

## 📂 File Structure

```text
stack/
│
├── stack.c
└── README.md
```

## 🛠️ Compilation and Execution

Compile the program using GCC:

```bash
gcc stack.c -o stack
```

Run the program:

```bash
./stack
```

On Windows:

```bash
stack.exe
```

## 🎯 Learning Objectives

* Understand the Stack data structure
* Learn the **LIFO** principle
* Implement `push` and `pop` operations
* Handle Stack Overflow and Underflow
* Understand the use of structures in C
* Practice dynamic memory allocation using `malloc()`
* Understand array-based stack implementation

## 📚 Algorithm

### Push

```text
START
   ↓
Check if stack is full
   ↓
If full → Stack Overflow
   ↓
Otherwise increase top
   ↓
Insert element at top
   ↓
END
```

### Pop

```text
START
   ↓
Check if stack is empty
   ↓
If empty → Stack Underflow
   ↓
Otherwise access top element
   ↓
Decrease top
   ↓
END
```

## 👨‍💻 Language

* **C**

## 📄 License

This project is intended for educational and learning purposes.
