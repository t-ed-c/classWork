#include <stdio.h>
#include <stdlib.h>

#define MAX 5

struct Queue {
    int items[MAX];
    int front;
    int rear;
};

void enqueue(struct Queue* q, int value) {
    if (q->rear == MAX - 1) return;  // Queue is full
    q->items[++q->rear] = value;
}

void printQueue(struct Queue* q) {
    if (q->rear == -1) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = 0; i <= q->rear; i++) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

int main() {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = 0;
    q->rear = -1;

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    printQueue(q);
    
    return 0;
}
