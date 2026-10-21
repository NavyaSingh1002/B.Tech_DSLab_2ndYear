#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
}Node;

Node *createNode(int data) {
    Node *newNode=(Node*)malloc(sizeof(Node));
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

Node *createTree() {
    int data;
    printf("\nEnter value: ");
    scanf("%d", &data);
    if(data==-1)
        return NULL;
    Node *newNode=createNode(data);
    printf("Left child of %d", data);
    newNode->left=createTree();
    printf("Right child of %d", data);
    newNode->right=createTree();
    return newNode;
}

void display(Node *root) {
    if(root==NULL)
        return;
    display(root->left);
    printf("%d ", root->data);
    display(root->right);
}

int main() {
    Node *root;
    root=createTree();
    printf("Binary Tree created:- ");
    display(root);
    return 0;
}
