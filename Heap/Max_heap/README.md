# Max Heap in C

This repository contains an implementation of a **Max Heap** using an array and dynamic memory allocation in the C programming language.

## 📌 About Max Heap

A **Max Heap** is a complete binary tree in which the value of every parent node is greater than or equal to the values of its children.

Therefore, the **largest element is always stored at the root** of the heap.

A Max Heap can be efficiently represented using an array.

### Max Heap Example

```text
        156
       /   \
     134    142
    /  \    /
   1    2  3
```

The corresponding array representation is:

```text
156 134 142 1 2 3
```

## ⚙️ Array Representation

For an element at index `i`, its positions are:

| Relationship | Formula       |
| ------------ | ------------- |
| Parent       | `(i - 1) / 2` |
| Left Child   | `2 * i + 1`   |
| Right Child  | `2 * i + 2`   |

This allows the complete binary tree to be represented without using explicit tree nodes.

---

# 🔧 Operations Implemented

## 1. Initialize Heap

Creates the heap and dynamically allocates memory according to the specified capacity.

The heap maintains:

* `arr` — Array containing heap elements
* `size` — Number of elements currently in the heap
* `totalSize` — Maximum capacity of the heap

---

## 2. Insert

A new element is initially placed at the end of the heap.

The element is then moved upward using **Heapify Up** until the Max Heap property is restored.

### Example

Before insertion:

```text
        3
       / \
      1   2
```

Insert `10`:

```text
        3
       / \
      1   2
     /
    10
```

After Heapify Up:

```text
        10
       /  \
      3    2
     /
    1
```

The largest element moves toward the root.

---

## 3. Print Heap

Displays the elements of the heap in their array representation.

For example:

```text
156 134 142 1 2 3
```

> Note that the printed array represents the heap structure. It is **not necessarily sorted**.

---

## 4. Heapify

**Heapify** restores the Max Heap property starting from a specified index.

The implementation uses **Heapify Down**:

1. Compare the current node with its left child.
2. Compare it with its right child.
3. Find the largest value.
4. Swap if a child is larger than the current node.
5. Continue recursively until the heap property is restored.

---

## 5. Delete Root

The root of a Max Heap contains the largest element.

The deletion process is:

1. Remove the root element.
2. Move the last element to the root.
3. Decrease the heap size.
4. Perform Heapify Down.
5. Restore the Max Heap property.

### Example

Before deletion:

```text
        156
       /   \
     134    142
    /  \    /
   1    2  3
```

After deleting `156`:

```text
        3
       / \
     134  142
    /  \
   1    2
```

After Heapify Down:

```text
        142
       /   \
     134    3
    /  \
   1    2
```

---

## 6. Destroy Heap

The dynamically allocated memory is released using `free()`.

This prevents the allocated heap memory from remaining unused after the program finishes.

---

# ⏱️ Complexity

| Operation    | Time Complexity |
| ------------ | --------------: |
| Initialize   |          `O(n)` |
| Insert       |      `O(log n)` |
| Heapify      |      `O(log n)` |
| Delete Root  |      `O(log n)` |
| Print Heap   |          `O(n)` |
| Destroy Heap |          `O(1)` |

**Space Complexity:** `O(n)`

---

# ⭐ Characteristics

* **Data Structure:** Complete Binary Tree
* **Implementation:** Array
* **Heap Type:** Max Heap
* **Root:** Largest element
* **Insertion:** Uses Heapify Up
* **Deletion:** Removes the root
* **Deletion Restoration:** Heapify Down
* **Memory:** Dynamically allocated
* **Access to Maximum:** `O(1)`

---

# 💻 Example

The program initializes a Max Heap with a capacity of `6`.

It then inserts:

```text
1
2
3
134
142
156
```

After all insertions, the heap representation becomes:

```text
156 134 142 1 2 3
```

The program then deletes the root twice.

After deleting `156`:

```text
142 134 3 1 2
```

After deleting `142`:

```text
134 2 3 1
```

The exact internal arrangement of equal-priority elements can vary, but the Max Heap property must always be maintained.

---

# 📚 Max Heap Property

For every node in a Max Heap:

```text
Parent >= Children
```

For example:

```text
        100
       /   \
      50    80
     / \    / \
    20 30  60 70
```

Every parent is greater than its children, so this is a valid Max Heap.

---

# 🔄 Heap Operations

### Insertion

```text
Insert at the end
       ↓
Heapify Up
       ↓
Compare with parent
       ↓
Swap if parent is smaller
       ↓
Repeat until correct position
```

### Deletion

```text
Remove root
     ↓
Move last element to root
     ↓
Heapify Down
     ↓
Find largest child
     ↓
Swap if child is larger
     ↓
Repeat until heap property is restored
```

---

# 📂 File Structure

```text
Max_heap/
│
├── max_heap.c
└── README.md
```

---

# 🛠️ Compilation and Execution

Compile the program using GCC:

```bash
gcc max_heap.c -o max_heap
```

Run the program on Linux/macOS:

```bash
./max_heap
```

On Windows:

```bash
max_heap.exe
```

---

# 🎯 Learning Objectives

This implementation helps understand:

* Max Heap data structure
* Complete Binary Trees
* Array representation of heaps
* Heapify Up
* Heapify Down
* Insertion into a heap
* Deletion from a heap
* Recursive functions
* Pointers and structures in C
* Dynamic memory allocation
* Time and space complexity

---

# 🧠 Applications of Max Heap

Max Heaps are commonly used in:

* Priority Queues
* Heap Sort
* Scheduling systems
* Finding maximum elements efficiently
* Graph algorithms
* Task prioritization

---

# 👨‍💻 Language

* **C**

## 📄 License

This project is intended for educational and learning purposes.
