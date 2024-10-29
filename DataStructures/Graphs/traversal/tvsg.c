#include <stdio.h>
#include <stdlib.h>

#define V 5

struct Node {
    int data;
    struct Node* next;
};

struct Node* graph[V];

void addEdge(int src, int dest) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = dest;
    newNode->next = graph[src];
    graph[src] = newNode;
}

void printGraph() {
    for (int v = 0; v < V; v++) {
        struct Node* temp = graph[v];
        printf("Vertex %d: ", v);
        while (temp) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {
    for (int i = 0; i < V; i++) graph[i] = NULL;

    addEdge(0, 1);
    addEdge(0, 4);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 3);
    addEdge(3, 4);

    printGraph();
    
    return 0;
}
