#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node *next;
};

void printLinkedList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

struct Node *insertAtHead(struct Node *head, int d)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->value = d;
    temp->next = head;
    head = temp;
    return head;
}

int main()
{
    int input = 0;
    struct Node *head = NULL;
    printf("Enter the value in linked list: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &input);
        head = insertAtHead(head, input);
    }

    printf("Linked list: ");
    printLinkedList(head);

    return 0;
}
