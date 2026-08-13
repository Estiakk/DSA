# Naive String Matching Algorithm in C

A simple implementation of the **Naive String Matching Algorithm** in C. This program searches for all occurrences of a given pattern within a text by comparing the pattern with every possible position in the text.

## 📌 Features

- Searches for all occurrences of a pattern in a text.
- Displays the starting index of each match.
- Handles multiple pattern occurrences.
- Prevents empty pattern searches.
- Removes newline characters from user input for accurate matching.

## 🛠️ Algorithm

The Naive String Matching Algorithm works as follows:

1. Calculate the lengths of the text and pattern.
2. Compare the pattern with every possible substring of the text.
3. If all characters match, print the starting index.
4. Continue searching until the end of the text.

This algorithm checks every possible alignment, making it straightforward but less efficient for large texts.

## ⏱️ Time Complexity

| Case | Complexity |
|------|------------|
| Best | O(n) |
| Average | O(n × m) |
| Worst | O(n × m) |

Where:
- `n` = length of the text
- `m` = length of the pattern

**Space Complexity:** `O(1)`

## 📂 File Structure

```
String_matching/
│── string_matching.c
└── README.md
```

## ▶️ How to Compile and Run

### Using GCC

```bash
gcc naive_string_matching.c -o naive_string_matching
./naive_string_matching
```

## 💻 Example

### Input

```
Enter the text: ABABDABACDABABCABAB
Enter the pattern to search: ABAB
```

### Output

```
Pattern found at index 0
Pattern found at index 10
Pattern found at index 15
```

## 📖 Functions Used

| Function | Description |
|----------|-------------|
| `string_length()` | Calculates the length of a string. |
| `remove_newline()` | Removes the newline character from user input. |
| `naive_string_match()` | Performs the naive pattern matching and prints all matching indices. |
| `main()` | Takes user input and calls the matching function. |

## 📚 Applications

- Basic text searching
- Pattern matching demonstrations
- Learning string algorithms
- Educational Data Structures and Algorithms (DSA) projects

## ⚠️ Limitations

- Inefficient for very large texts.
- Performs repeated comparisons.
- More advanced algorithms like **KMP**, **Rabin-Karp**, and **Boyer-Moore** provide better performance for large-scale searching.

## 👨‍💻 Author

Created as part of a **Data Structures and Algorithms (DSA)** practice repository using the C programming language.