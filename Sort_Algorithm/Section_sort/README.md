# Selection Sort in C

This repository contains a simple implementation of the **Selection Sort algorithm** using the C programming language.

## 📌 About Selection Sort

**Selection Sort** is a simple comparison-based sorting algorithm that divides the array into two parts:

* **Sorted portion**
* **Unsorted portion**

The algorithm repeatedly finds the smallest element from the unsorted portion and places it at the beginning of that portion.

## ⚙️ How It Works

The algorithm works as follows:

1. Start from the first element of the array.
2. Compare it with the remaining elements.
3. Find the smallest element in the unsorted portion.
4. Swap the smallest element with the first element of the unsorted portion.
5. Move the boundary of the sorted portion one position forward.
6. Repeat until the entire array is sorted.

### Example

**Input:**

```text
5
64 25 12 22 11
```

**Output:**

```text
Sorted array: 11 12 22 25 64
```

## 🔄 Example of the Sorting Process

Consider the following array:

```text
64 25 12 22 11
```

The sorting process:

```text
64 25 12 22 11
↓
11 25 12 22 64
↓
11 12 25 22 64
↓
11 12 22 25 64
↓
11 12 22 25 64
```

At each step, the smallest element from the unsorted portion is moved to its correct position.

## ⏱️ Complexity

| Case         | Time Complexity |
| ------------ | --------------- |
| Best Case    | `O(n²)`         |
| Average Case | `O(n²)`         |
| Worst Case   | `O(n²)`         |

**Space Complexity:** `O(1)`

## ⭐ Characteristics

* **In-place:** Yes
* **Stable:** No
* **Adaptive:** No
* **Comparison-based:** Yes
* **Extra Space:** `O(1)`
* **Number of swaps:** Relatively low compared to Bubble Sort

## 📂 File Structure

```text
selection_sort/
│
├── selection_sort.c
└── README.md
```

## 🛠️ Compilation and Execution

Compile the program using GCC:

```bash
gcc selection_sort.c -o selection_sort
```

Run the program:

```bash
./selection_sort
```

On Windows:

```bash
selection_sort.exe
```

## 🎯 Learning Objectives

* Understand the Selection Sort algorithm
* Learn how to find the minimum element in an array
* Understand swapping elements
* Practice array manipulation in C
* Analyze time and space complexity
* Understand the difference between sorted and unsorted portions

## 📚 Algorithm

```text
START
   ↓
Input number of elements
   ↓
Input array elements
   ↓
Start from the first unsorted element
   ↓
Compare with remaining elements
   ↓
Find the smallest element
   ↓
Swap with the first unsorted element
   ↓
Move to the next position
   ↓
Repeat until the array is sorted
   ↓
Print sorted array
   ↓
END
```

## 👨‍💻 Language

* **C**

## 📄 License

This project is intended for educational and learning purposes.
