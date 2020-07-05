#include <stdio.h>
#include <stdlib.h>

 
struct node
{
    int value;
    struct node *l;
    struct node *r;
};
 
struct node *root = NULL;
int flag;
 

void in_order_traversal(struct node *);
void in_order_search(struct node *,int);
struct node *newnode(int);
 
void main()
{ 
    
    int search_val;
    root = newnode(50);
    root->l = newnode(20);
    root->r = newnode(30);
    root->l->l = newnode(70);
    root->l->r = newnode(80);
    root->l->l->l = newnode(10);
    root->l->l->r = newnode(40);
    root->l->r->r = newnode(60);
 
    printf("The elements of Binary tree are:");
    in_order_traversal(root);
    printf("Enter the value to be searched:");
    scanf("%d", &search_val);
    in_order_search(root, search_val);
    if (flag  ==  0)    
    {
        printf("Element not present in the binary tree\n");
    }
}
 

struct node* newnode(int value)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->value = value;
    temp->l = NULL;
    temp->r = NULL;
    return temp;
}
 

 
void in_order_traversal(struct node *p)
{
    if (!p)
    {
        return;
    }
    in_order_traversal(p->l);
    printf("%d->", p->value);
    in_order_traversal(p->r);
}
 

void in_order_search(struct node *p, int val)
{
    if (!p)
    {
        return;
    }
    in_order_search(p->l, val);
    if(p->value == val)
    {
        printf("\nElement present in the binary tree.\n");
        flag = 1;
    }
    in_order_search(p->r, val);
}