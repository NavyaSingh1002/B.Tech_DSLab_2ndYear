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

int largestNode(Node *root) {
    if(root==NULL)
        return INT_MIN;
    int leftMax=largestNode(root->left);
    int rightMax=largestNode(root->right);
    int max=root->data;
    if(max<leftMax)
        max=leftMax;
    if(max<rightMax)
        max=rightMax;
    return max;
}

int main() {
    Node *root;
    root=createTree();
    printf("Largest Node = %d", largestNode(root));
    return 0;
}