#include <stdio.h>
#include <stdlib.h>

// Node for adjacency list
typedef struct Node {
    int vertex;
    struct Node *next;
} Node;

// Graph structure
typedef struct Graph {
    int vertices;
    Node **adjList;
} Graph;

// Queue for BFS
typedef struct Queue {
    int *arr;
    int front, rear;
} Queue;

// Create a new node
Node *createNode(int vertex) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->vertex = vertex;
    newNode->next = NULL;
    return newNode;
}

// Create graph
Graph *createGraph(int vertices) {
    Graph *graph = (Graph *)malloc(sizeof(Graph));
    graph->vertices = vertices;

    graph->adjList = (Node **)malloc(vertices * sizeof(Node *));
    for (int i = 0; i < vertices; i++)
        graph->adjList[i] = NULL;

    return graph;
}

// Add undirected edge
void addEdge(Graph *graph, int src, int dest) {
    Node *newNode = createNode(dest);
    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;

    newNode = createNode(src);
    newNode->next = graph->adjList[dest];
    graph->adjList[dest] = newNode;
}

// Print graph
void printGraph(Graph *graph) {
    printf("\nAdjacency List:\n");
    for (int i = 0; i < graph->vertices; i++) {
        printf("%d -> ", i);
        Node *temp = graph->adjList[i];
        while (temp != NULL) {
            printf("%d ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}

// DFS helper
void DFSUtil(Graph *graph, int vertex, int visited[]) {
    visited[vertex] = 1;
    printf("%d ", vertex);

    Node *temp = graph->adjList[vertex];
    while (temp != NULL) {
        if (!visited[temp->vertex])
            DFSUtil(graph, temp->vertex, visited);
        temp = temp->next;
    }
}

// DFS traversal
void DFS(Graph *graph, int start) {
    int *visited = (int *)calloc(graph->vertices, sizeof(int));

    printf("\nDFS: ");
    DFSUtil(graph, start, visited);
    printf("\n");

    free(visited);
}

// Queue functions
Queue *createQueue(int size) {
    Queue *q = (Queue *)malloc(sizeof(Queue));
    q->arr = (int *)malloc(size * sizeof(int));
    q->front = q->rear = -1;
    return q;
}

int isEmpty(Queue *q) {
    return q->front == -1;
}

void enqueue(Queue *q, int value) {
    if (q->front == -1)
        q->front = 0;
    q->arr[++q->rear] = value;
}

int dequeue(Queue *q) {
    int value = q->arr[q->front];
    if (q->front == q->rear)
        q->front = q->rear = -1;
    else
        q->front++;
    return value;
}

// BFS traversal
void BFS(Graph *graph, int start) {
    int *visited = (int *)calloc(graph->vertices, sizeof(int));
    Queue *q = createQueue(graph->vertices);

    visited[start] = 1;
    enqueue(q, start);

    printf("\nBFS: ");

    while (!isEmpty(q)) {
        int current = dequeue(q);
        printf("%d ", current);

        Node *temp = graph->adjList[current];
        while (temp != NULL) {
            if (!visited[temp->vertex]) {
                visited[temp->vertex] = 1;
                enqueue(q, temp->vertex);
            }
            temp = temp->next;
        }
    }

    printf("\n");

    free(visited);
    free(q->arr);
    free(q);
}

// Free graph memory
void freeGraph(Graph *graph) {
    for (int i = 0; i < graph->vertices; i++) {
        Node *temp = graph->adjList[i];
        while (temp != NULL) {
            Node *next = temp->next;
            free(temp);
            temp = next;
        }
    }
    free(graph->adjList);
    free(graph);
}

// Main function
int main() {
    int vertices, edges;

    printf("Enter number of vertices: ");
    scanf("%d", &vertices);

    Graph *graph = createGraph(vertices);

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    printf("Enter edges (source destination):\n");
    for (int i = 0; i < edges; i++) {
        int src, dest;
        scanf("%d %d", &src, &dest);

        if (src >= 0 && src < vertices && dest >= 0 && dest < vertices)
            addEdge(graph, src, dest);
        else
            printf("Invalid edge ignored.\n");
    }

    printGraph(graph);

    DFS(graph, 0);
    BFS(graph, 0);

    freeGraph(graph);

    return 0;
}