#include <stdio.h>
#include <stdlib.h>

// Node structure for linked list
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Queue structure with pointers to front and rear nodes
typedef struct {
    Node *front;
    Node *rear;
} Queue;

// Function to initialize the queue
void initializeQueue(Queue *q) {
    q->front = NULL;
    q->rear = NULL;
}

// Function to check if the queue is empty
int isEmpty(Queue *q) {
    return (q->front == NULL);
}

// Function to enqueue (add) an element to the queue
void enqueue(Queue *q, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation error\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
    if (q->rear) {
        q->rear->next = newNode;
    }
    q->rear = newNode;
    if (!q->front) {
        q->front = newNode;
    }
    printf("Enqueued %d\n", value);
}

// Function to dequeue (remove) an element from the queue
int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue Underflow\n");
        return -1;
    }
    Node *temp = q->front;
    int value = temp->data;
    q->front = q->front->next;
    if (!q->front) {
        q->rear = NULL;
    }
    free(temp);
    return value;
}

// Function to display the queue's contents
void display(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    Node *temp = q->front;
    printf("Queue elements: ");
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    Queue q;
    initializeQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    display(&q);

    printf("Dequeued %d\n", dequeue(&q));
    display(&q);

    enqueue(&q, 40);
    display(&q);

    return 0;
}
