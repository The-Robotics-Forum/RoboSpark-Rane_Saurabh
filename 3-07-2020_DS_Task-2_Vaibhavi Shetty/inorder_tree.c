#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node* newNode(int data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp -> data = data;
    temp -> right = NULL;
    temp -> left = NULL;
}
// code for postorder traversal

void postorder(struct node* root)
{
    if(root == NULL)
        return;

    postorder(root-> left);
    postorder(root-> right);

    printf("%d " , root->data);
}

int main()
{
     struct node *root  = newNode(25);
     root -> left = newNode(15);
     root -> right= newNode(50);
     root -> left -> left = newNode(10);
     root -> left ->right = newNode(22);
     root -> left ->left -> left = newNode(4);
     root -> left ->left -> right = newNode(12);
     root -> left ->right-> left = newNode(18);
     root -> left ->right -> right = newNode(24);
     root -> right -> left= newNode(35);
     root -> right -> right= newNode(70);
     root -> right -> left -> left= newNode(31);
     root -> right -> left -> right = newNode(44);
     root -> right -> right -> left= newNode(60);
     root -> right -> right -> right= newNode(90);

     printf("\nPostorder traversal of binary tree is \n");
     postorder(root);
}
