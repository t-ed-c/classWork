#include <stdio.h>
#include <stdlib.h>

#define V 5  // Number of vertices

struct Node {
    int data;
    struct Node* next;
};

// Array of pointers to nodes (Adjacency List)
struct Node* graph[V];

void addEdge(int src, int dest) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = dest;
    newNode->next = graph[src];
    graph[src] = newNode;
}

int main() {
    // Initialize all adjacency lists as empty
    for (int i = 0; i < V; i++) graph[i] = NULL;

    addEdge(0, 1);
    addEdge(0, 4);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 3);
    addEdge(3, 4);

    // No traversal or printing
    return 0;
}
