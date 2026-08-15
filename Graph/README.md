# Graph Implementation in C

A simple and efficient implementation of a **Graph** using an **Adjacency List** in C. This project demonstrates fundamental graph operations along with **Depth-First Search (DFS)** and **Breadth-First Search (BFS)** traversals, making it suitable for Data Structures and Algorithms (DSA) practice.

## Features

- Create a graph with any number of vertices
- Add undirected edges
- Display the graph as an adjacency list
- Perform **Depth-First Search (DFS)**
- Perform **Breadth-First Search (BFS)**
- Free allocated memory to prevent memory leaks

## Graph Representation

The graph is represented using an **Adjacency List**, where each vertex maintains a linked list of its neighboring vertices.

Example:

```text
0 → 1 → 2
1 → 0 → 2 → 3
2 → 0 → 1 → 4
3 → 1 → 4
4 → 2 → 3
```

## Project Structure

```text
graph.c      # Graph implementation using adjacency lists
README.md    # Project documentation
```

## How to Compile

Using **GCC**:

```bash
gcc graph.c -o graph
```

## How to Run

```bash
./graph
```

On Windows:

```bash
graph.exe
```

## Example Input

```text
Enter number of vertices: 5
Enter number of edges: 6
Enter edges (source destination):
0 1
0 2
1 2
1 3
2 4
3 4
```

## Example Output

```text
Adjacency List:
0 -> 2 1
1 -> 3 2 0
2 -> 4 1 0
3 -> 4 1
4 -> 3 2

DFS: 0 2 4 3 1

BFS: 0 2 1 4 3
```

## Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Add Edge | O(1) |
| Print Graph | O(V + E) |
| DFS | O(V + E) |
| BFS | O(V + E) |

Where:

- **V** = Number of vertices
- **E** = Number of edges

## Concepts Covered

- Graph Data Structure
- Adjacency List Representation
- Linked Lists
- Dynamic Memory Allocation
- Depth-First Search (DFS)
- Breadth-First Search (BFS)
- Queue Implementation

## Learning Outcomes

This project helps in understanding:

- How graphs are represented efficiently using adjacency lists.
- How DFS explores vertices recursively.
- How BFS visits vertices level by level using a queue.
- Basic graph traversal techniques commonly used in DSA and competitive programming.

## License

This project is open-source and available for educational and personal use.