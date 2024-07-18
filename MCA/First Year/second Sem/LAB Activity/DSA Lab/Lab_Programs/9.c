#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void preorderDfs(struct node *root)
{
    if (root == NULL)
    {
        return;
    }

    printf("%d-> ", root->data);
    preorderDfs(root->left);
    preorderDfs(root->right);
}
void inorderDfs(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderDfs(root->left);
    printf("%d->", root->data);
    inorderDfs(root->right);
}
void postorderDfs(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorderDfs(root->left);
    postorderDfs(root->right);

    printf("%d->", root->data);
}

int main()
{
    struct node *root = (struct node *)malloc(sizeof(struct node));
    root->data = 1;
    root->left = (struct node *)malloc(sizeof(struct node));
    root->left->data = 2;
    root->left->left = NULL;
    root->left->right = NULL;
    root->right = (struct node *)malloc(sizeof(struct node));
    root->right->data = 3;
    root->right->left = NULL;
    root->right->right = NULL;
    printf("Inorder:-");
    inorderDfs(root);
    printf("Preorder:-");
    preorderDfs(root);
    printf("Postorder:-");
    postorderDfs(root);

    return 0;
}