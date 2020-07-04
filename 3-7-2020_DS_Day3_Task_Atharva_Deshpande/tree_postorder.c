#include <stdio.h> 
#include <stdlib.h>
  

struct node 
{ 
     int data; 
     struct node* left; 
     struct node* right; 
}; 

struct node* newNode(int data) 
{ 
     struct node* node = (struct node*) 
     malloc(sizeof(struct node)); 
     node->data = data; 
     node->left = NULL; 
     node->right = NULL; 
  
     return(node); 
} 
void printPostorder(struct node* node) 
{ 
     if (node == NULL) 
        return; 
     printPostorder(node->left);  
     printPostorder(node->right); 
     printf("%d ", node->data); 
} 

int BST_post(struct node* node, int min, int max);  
int BST(struct node* node)  
{  
  return(BST_post(node, -20000, 2000));  
}  
int BST_post(struct node* node, int min, int max)  
{  
  if (node==NULL)  
     return 1; 
  if (node->data < min || node->data > max)  
     return 0;  
  return 
    BST_post(node->left, min, node->data-1) && BST_post(node->right, node->data+1, max);  
}  
int main() 
{ 
     struct node *root  = newNode(11); 
     root->left             = newNode(12); 
     root->right           = newNode(13); 
     root->left->left     = newNode(14); 
     root->left->right   = newNode(15);  
     printf("\nPostorder traversal of binary tree is \n"); 
     printPostorder(root); 
     if(BST(root)) 
        printf("\nTree is BST"); 
    else
        printf("\nTree is not a BST"); 
  
     return 0; 
} 