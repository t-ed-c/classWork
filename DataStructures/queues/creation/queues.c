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

int main() {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = -1;
    q->rear = -1;

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    return 0;
}
