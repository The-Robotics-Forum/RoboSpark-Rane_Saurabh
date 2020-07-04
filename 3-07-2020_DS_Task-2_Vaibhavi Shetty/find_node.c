#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

int flag = 0;

struct node* newNode(int data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp -> data = data;
    temp -> right = NULL;
    temp -> left = NULL;
}

void searchNode(struct node *temp, int value){

    if(root == NULL){
        printf("Tree is empty\n");
    }
    else{

        if(temp->data == value){
            flag = 1;
             return;
        }

        if(flag == 0 && temp->left != NULL){
        searchNode(temp->left, value);
        }

        if(flag == 0 && temp->right != NULL){
        searchNode(temp->right, value);
        }
    }
}

int main()
{
    root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->right->left = newNode(5);
    root->right->right = newNode(6);

    searchNode(root, 7);

    if(flag)
        printf("Element is present in the binary tree");
    else
        printf("Element is not present in the binary tree");
    return 0;
}
