# Insertion Sort in C

This repository contains a simple implementation of the **Insertion Sort algorithm** using the C programming language.

## 📌 About Insertion Sort

**Insertion Sort** is a simple comparison-based sorting algorithm that builds the sorted array one element at a time.

It works similarly to how we arrange playing cards in our hand. Each new element is compared with the elements before it and inserted into its correct position.

## ⚙️ How It Works

The algorithm works as follows:

1. Start from the second element of the array.
2. Store the current element as the `key`.
3. Compare the key with the elements before it.
4. Shift elements that are greater than the key one position to the right.
5. Insert the key into its correct position.
6. Repeat the process until all elements are sorted.

### Example

**Input:**

```text
5
64 34 25 12 22
```

**Output:**

```text
Sorted array: 12 22 25 34 64
```

## 🔄 Example of the Sorting Process

Consider the following array:

```text
5 3 4 1 2
```

The sorting process can be visualized as:

```text
5 3 4 1 2
↓
3 5 4 1 2
↓
3 4 5 1 2
↓
1 3 4 5 2
↓
1 2 3 4 5
```

At each step, the next element is inserted into its correct position within the already-sorted portion of the array.

## ⏱️ Complexity

| Case         | Time Complexity |
| ------------ | --------------- |
| Best Case    | `O(n)`          |
| Average Case | `O(n²)`         |
| Worst Case   | `O(n²)`         |

**Space Complexity:** `O(1)`

## ⭐ Characteristics

* **In-place:** Yes
* **Stable:** Yes
* **Adaptive:** Yes
* **Comparison-based:** Yes
* **Extra Space:** `O(1)`

## 📂 File Structure

```text
insertion_sort/
│
├── insertion_sort.c
└── README.md
```

## 🛠️ Compilation and Execution

Compile the program using GCC:

```bash
gcc insertion_sort.c -o insertion_sort
```

Run the program:

```bash
./insertion_sort
```

On Windows:

```bash
insertion_sort.exe
```

## 🎯 Learning Objectives

* Understand the Insertion Sort algorithm
* Learn how elements can be shifted within an array
* Understand how to insert an element into its correct position
* Practice array manipulation in C
* Analyze algorithm time and space complexity

## 📚 Algorithm

```text
START
   ↓
Input number of elements
   ↓
Input array elements
   ↓
Start from the second element
   ↓
Store current element
   ↓
Compare with previous elements
   ↓
Shift larger elements to the right
   ↓
Insert current element
   ↓
Repeat until all elements are processed
   ↓
Print sorted array
   ↓
END
```

## 👨‍💻 Language

* **C**

## 📄 License

This project is intended for educational and learning purposes.
