#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5 


struct CircularQueue {
    int *arr;
    int front, rear;
    int capacity;
};


struct CircularQueue* createQueue(int capacity) {
    struct CircularQueue* queue = (struct CircularQueue*)malloc(sizeof(struct CircularQueue));
    queue->capacity = capacity;
    queue->front = queue->rear = -1;
    queue->arr = (int*)malloc(queue->capacity * sizeof(int));
    return queue;
}


int isFull(struct CircularQueue* queue) {
    return (queue->front == 0 && queue->rear == queue->capacity - 1) ||
           (queue->rear == (queue->front - 1) % (queue->capacity - 1));
}


int isEmpty(struct CircularQueue* queue) {
    return queue->front == -1;
}


void enqueue(struct CircularQueue* queue, int item) {
    if (isFull(queue)) {
        printf("Queue is full\n");
        return;
    }

    if (queue->front == -1)
        queue->front = queue->rear = 0;
    else
        queue->rear = (queue->rear + 1) % queue->capacity;

    queue->arr[queue->rear] = item;
    printf("%d enqueued to the queue\n", item);
}


int dequeue(struct CircularQueue* queue) {
    int item;
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1;
    }

    item = queue->arr[queue->front];
    if (queue->front == queue->rear)
        queue->front = queue->rear = -1;
    else
        queue->front = (queue->front + 1) % queue->capacity;

    return item;
}


void display(struct CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }

    int i;
    printf("Elements in the queue are: ");
    for (i = queue->front; i != queue->rear; i = (i + 1) % queue->capacity)
        printf("%d ", queue->arr[i]);
    printf("%d\n", queue->arr[i]);
}

int main() {
    struct CircularQueue* queue = createQueue(MAX_SIZE);

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    enqueue(queue, 50);

    display(queue);

    printf("Dequeued element: %d\n", dequeue(queue));

    display(queue);

    enqueue(queue, 60);

    display(queue);

    return 0;
}
