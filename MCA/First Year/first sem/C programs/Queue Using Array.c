#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Structure for the queue
typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
} Queue;

// Function prototypes
void initializeQueue(Queue *q);
int isEmpty(Queue *q);
int isFull(Queue *q);
void enqueue(Queue *q, int value);
int dequeue(Queue *q);
void displayQueue(Queue *q);

// Initialize the queue
void initializeQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

// Check if the queue is empty
int isEmpty(Queue *q) {
    return (q->front == -1 && q->rear == -1);
}

// Check if the queue is full
int isFull(Queue *q) {
    return (q->rear + 1) % MAX_SIZE == q->front ? 1 : 0;
}

// Add an element to the queue
void enqueue(Queue *q, int value) {
    if (isFull(q)) {
     q->rear = 0;
     q->front = (q->front + 1) % MAX_SIZE;
    } else if (isEmpty(q)) {
        q->front = 0;
        q->rear = 0;
    } else {
        q->rear = (q->rear + 1) % MAX_SIZE;
    }
    q->items[q->rear] = value;
}

// Remove an element from the queue
int dequeue(Queue *q) {
    int value;
    if (isEmpty(q)) {
        printf("Queue is empty, cannot dequeue.\n");
        return -1;
    } else if (q->front == q->rear) {
        value = q->items[q->front];
        q->front = -1;
        q->rear = -1;
    } else {
        value = q->items[q->front];
        q->front = (q->front + 1) % MAX_SIZE;
    }
    return value;
}

// Display the elements of the queue
void displayQueue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue: ");
    int i = q->front;
    while (i != q->rear) {
        printf("%d ", q->items[i]);
        i = (i + 1) % MAX_SIZE;
    }
    printf("%d\n", q->items[q->rear]);
}

// Main function
int main() {
    Queue q;
    initializeQueue(&q);

    // Example usage
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    displayQueue(&q);
    printf("Dequeued: %d\n", dequeue(&q));
    displayQueue(&q);

    return 0;
}
