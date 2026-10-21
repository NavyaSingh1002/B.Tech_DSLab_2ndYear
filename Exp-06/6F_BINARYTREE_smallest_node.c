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

int smallestNode(Node *root) {
    if(root==NULL)
        return INT_MAX;
    int leftMin=smallestNode(root->left);
    int rightMin=smallestNode(root->right);
    int min=root->data;
    if(min>leftMin)
        min=leftMin;
    if(min>rightMin)
        min=rightMin;
    return min;
}

int main() {
    Node *root;
    root=createTree();
    printf("Smallest Node = %d", smallestNode(root));
    return 0;
}