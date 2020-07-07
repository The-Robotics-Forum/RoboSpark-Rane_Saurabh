#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

//insert node at beginning
void insert_beg(int data, struct node **head)
{
     struct node *new_node = (struct node*)malloc(sizeof(struct node));
      new_node ->data =data;

      if (*head == NULL)
    {
       *head = new_node;
       return;
    }
        new_node -> next = *head;
      *head = new_node;
}

//insert node in between
void insert_mid(int data,struct node* prev_node)
{
    if (prev_node == NULL)
    {
       printf("The previous node cannot be NULL");
       return;
    }
    struct node* new_node =(struct node*) malloc(sizeof(struct node));
    new_node->data  = data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

//insert node at the last
 void insert_last(int data, struct node **head)
 {
      struct node *new_node = (struct node*)malloc(sizeof(struct node));

      new_node ->data =data;
      new_node->next = NULL;

      struct node *temp = *head;

    if (*head == NULL)
    {
       *head = new_node;
       return;
    }

        while (temp->next != NULL)
        temp = temp->next;

    temp ->next = new_node;
    return;
 }


 //delete node
 void delete_node(struct node **head, int data)
 {
     struct node * temp = *head;
     struct node * prev = *head  ;

     if(temp-> data == data)
     {
         *head = temp->next;
        free(temp);
        return;
     }
     while(temp != NULL && temp-> data != data)
     {
         prev= temp;
         temp= temp-> next;
     }

     if (temp== NULL)
        return;

     else
         prev-> next= temp->next;

 free(temp);

 }
 void print(struct node *head)
 {
     struct node *temp = head;
    while(temp ->next !=NULL)
    {
        printf("%d ",temp->data);
        temp= temp->next;
    }
    printf("%d ",temp->data);
 }


int main()
{
    //Creating Nodes
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));
    struct node *fourth = (struct node*)malloc(sizeof(struct node));

    head -> data =100;
    second -> data = 200;
    third -> data = 300;
    fourth -> data = 400;

    head ->next = second;
    second-> next= third;
    third-> next = fourth;
    fourth->next = NULL;

    //FUNCTION CALLING
       insert_beg(50, &head);
       insert_mid(250, second );
       insert_last(500,&head);
       delete_node(&head,100);

    print(head);

}
