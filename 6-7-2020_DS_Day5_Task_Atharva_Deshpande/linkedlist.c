#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void insert_first(struct node** head, int value){
    struct node* new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = value;
    new_node ->next = *head;
    *head = new_node;
}
void insert_after(struct node* prev_node,int value){
    struct node* new_node =(struct node*) malloc(sizeof(struct node)); 
    new_node->data  = value; 
    new_node->next = prev_node ->next; 
    prev_node ->next = new_node; 
}
void insert_end(struct node* head, int value){
    struct node* new_node = (struct node*) malloc(sizeof(struct node)); 
    struct node *last = head;  
    new_node->data  = value; 
    new_node->next = NULL; 
    if (head == NULL)   // in this case head is not null so no need of this condition
    { 
       head = new_node; 
       return; 
    } 
    while (last->next != NULL) 
        last = last->next; 
    last->next = new_node;
}
void display(struct node* node)
{ 
  while (node-> next != NULL) 
  { 
     printf(" %d ->", node->data); 
     node = node->next; 
  } 
  printf("%d ->NULL",node->data);
} 

void delete_node(struct node **head, int del) 
{ 
    
    struct node* temp = *head, *prev; 
    if (temp != NULL && temp->data == del) 
    { 
        *head = temp->next;   
        free(temp);               
        return; 
    } 
    while (temp != NULL && temp->data != del) 
    { 
        prev = temp; 
        temp = temp->next; 
    }  
    if (temp == NULL) return; 
    prev->next = temp->next; 
    if(temp -> data!=del){
        printf("Value is not present");
    } 
    free(temp);
    
} 
 
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second_link =  (struct node *)malloc(sizeof(struct node));
    struct node *third_link = (struct node *)malloc(sizeof(struct node));
    struct node *fourth_link = (struct node *)malloc(sizeof(struct node));

    head->data=100;
    head->next=second_link;;
    second_link->data = 150;
    second_link->next=third_link;
    third_link -> data = 200;
    third_link ->next = fourth_link;
    fourth_link -> data = 250;
    fourth_link -> next = NULL;

    struct node *temp = (struct node*) malloc(sizeof(struct node));
    printf("Full linked list : \n");
    temp = head;
    while(temp->next!=NULL)
    {
        printf("%d ->",temp ->data);
        temp = temp->next;
    } 
    printf("%d -> NULL",temp->data);

    int new_node_pos;
    printf("\n Enter the position of node (1/2/3/4/5) : ");
    scanf("%d",&new_node_pos);
    int value;
    printf("\n Value to be inserted :");
    scanf("%d",&value);
    struct node * temp2= NULL;
    if(new_node_pos==1){
        insert_first(&head,value);
    }
    else if(new_node_pos==2){
        insert_after(head,value);
    }
    else if(new_node_pos==3){
        insert_after(second_link,value);
    }
    else if(new_node_pos==4){
        insert_after(third_link,value);
    }
    else if(new_node_pos==5){
        insert_end(head,value);
    }
    else
    {
        printf("\nInappropriate position");
    }
    printf("\nList after insertion :\n"); 
    display(head);
    int del;
    printf("\nValue to be deleted : ");
    printf("\nEnter the value present in the list only......\n");
    scanf("%d",&del);
    delete_node(&head,del);
    printf("\nList after deletion :\n");
    display(head);

}