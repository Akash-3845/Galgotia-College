#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Structure to represent the stack
typedef struct {
    int arr[MAX_SIZE];
    int top;
} Stack;

// Function to initialize the stack
void initializeStack(Stack *stack) {
    stack->top = -1; // Set top to -1 to indicate an empty stack
}

// Function to check if the stack is empty
bool isEmpty(Stack *stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
bool isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(Stack *stack, int element) {
    if (isFull(stack)) {
        printf("Error: Stack is full, cannot push element.\n");
        return;
    }
    stack->top++;
    stack->arr[stack->top] = element;
}

// Function to pop an element from the stack
int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack is empty, cannot pop element.\n");
        return -1; // Return -1 to indicate an empty stack
    }
    int poppedElement = stack->arr[stack->top];
    stack->top--;
    return poppedElement;
}

// Function to peek at the top element of the stack
int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack is empty, cannot peek.\n");
        return -1; // Return -1 to indicate an empty stack
    }
    return stack->arr[stack->top];
}

int main() {
    Stack stack;
    initializeStack(&stack);

    // Example usage of the stack operations
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Top element of the stack: %d\n", peek(&stack));

    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));

    printf("Top element of the stack: %d\n", peek(&stack));

    return 0;
}
