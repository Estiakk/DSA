# Bubble Sort in C

This repository contains a simple implementation of the **Bubble Sort algorithm** using the C programming language.

## 📌 About Bubble Sort

**Bubble Sort** is a simple comparison-based sorting algorithm. It repeatedly compares adjacent elements and swaps them if they are in the wrong order.

After each pass, the largest unsorted element moves to its correct position at the end of the array.

## ⚙️ How It Works

The algorithm works as follows:

1. Take an array of `n` elements.
2. Compare each pair of adjacent elements.
3. If the left element is greater than the right element, swap them.
4. Repeat the process for multiple passes.
5. After each pass, one of the largest unsorted elements reaches its correct position.
6. The array becomes sorted in ascending order.

### Example

**Input:**

```text
5
64 34 25 12 22
```

**Output:**

```text
The sorted array: 12 22 25 34 64
```

## ⏱️ Complexity

| Case         | Time Complexity |
| ------------ | --------------- |
| Best Case    | `O(n²)`         |
| Average Case | `O(n²)`         |
| Worst Case   | `O(n²)`         |

**Space Complexity:** `O(1)`

> Note: This implementation does not include the optimized Bubble Sort condition that stops early when no swaps occur.

## 📂 File Structure

```text
bubble_sort/
│
├── bubble_sort.c
└── README.md
```

## 🛠️ Compilation and Execution

Compile the program using GCC:

```bash
gcc bubble_sort.c -o bubble_sort
```

Run the program:

```bash
./bubble_sort
```

On Windows:

```bash
bubble_sort.exe
```

## 🎯 Learning Objectives

* Understand the Bubble Sort algorithm
* Learn how nested loops are used in sorting
* Understand element swapping in C
* Analyze time and space complexity
* Practice array manipulation

## 📚 Algorithm

```text
START
   ↓
Input number of elements
   ↓
Input array elements
   ↓
Compare adjacent elements
   ↓
Is left element > right element?
   ├── Yes → Swap elements
   └── No  → Continue
   ↓
Repeat for all required passes
   ↓
Print sorted array
   ↓
END
```

## 👨‍💻 Language

* **C**

## 📄 License

This project is intended for educational and learning purposes.
