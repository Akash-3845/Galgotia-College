#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct queue
{
    int size;
    int front;
    int rear;
    struct node **Q;
};

void createQueue(struct queue *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q = (struct node **)malloc(q->size * sizeof(struct node *));
}

void enqueue(struct queue *q, struct node *x)
{
    if (q->rear == q->size - 1)
        printf("Queue is Full");
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}

struct node *dequeue(struct queue *q)
{
    if (q->front == q->rear)
        printf("Queue is Empty");
    else
    {
        q->front++;
        return q->Q[q->front];
    }
    return 0;
}

void BFS(struct node *root)
{
    struct queue q;
    createQueue(&q, 100);

    struct node *temp;
    enqueue(&q, root);

    while (q.front != q.rear)
    {
        temp = dequeue(&q);
        printf("%d ", temp->data);

        if (temp->left != NULL)
            enqueue(&q, temp->left);

        if (temp->right != NULL)
            enqueue(&q, temp->right);
    }
}

int main()
{
    struct node *root = (struct node *)malloc(sizeof(struct node));
    root->data = 1;
    root->left = (struct node *)malloc(sizeof(struct node));
    root->left->data = 2;
    root->right = (struct node *)malloc(sizeof(struct node));
    root->right->data = 3;
    root->left->left = (struct node *)malloc(sizeof(struct node));
    root->left->left->data = 4;
    root->left->right = (struct node *)malloc(sizeof(struct node));
    root->left->right->data = 5;

    BFS(root);

    return 0;
}