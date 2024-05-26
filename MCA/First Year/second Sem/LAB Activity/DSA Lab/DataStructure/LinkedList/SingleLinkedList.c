#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->val = data;
    newNode->next = NULL;
    return newNode;
}
void add(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct Node *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}
void removeNode(struct Node **head, int key)
{
    struct Node *temp = *head, *prev = NULL;
    // if head node itself holds the key
    if (temp != NULL && temp->val == key)
    {
        *head = temp->next;
        free(temp);
        return;
    }
    // search key in linkedlist
    while (temp != NULL && temp->val != key)
    {
        prev = temp;
        temp = temp->next;
    }
    // if key was not present in linklist
    if (temp == NULL)
        return;
    prev->next = temp->next;
    free(temp);
}
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d->", node->val);
        node = node->next;
    }
    printf("NULL\n");
}
int main()
{
    struct Node *head = NULL;

    add(&head, 1);
    add(&head, 2);
    add(&head, 3);
    add(&head, 4);
    add(&head, 5);
    add(&head, 6);
    add(&head, 7);

    printf("List: ");
    printList(head);
    removeNode(&head, 3);
    printf("after removing node the list is: ");
    printList(head);
}
