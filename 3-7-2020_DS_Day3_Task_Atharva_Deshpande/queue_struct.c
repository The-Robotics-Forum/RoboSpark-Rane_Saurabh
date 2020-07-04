#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct student {
    char name[50];
    int roll_num;
    
} ;
int que[4],front= -1,rear =-1;
void enque(int val)
{
if (rear==3)
    printf("Queue is full");
else {
if (front==-1)
    {
    front =0;
    }

    rear++;
    que[rear]=val;
    printf("Insertion was successful");
}
}
void display(){
if(rear==-1)
    printf("Queue is empty\n");
else{
int i;
printf("Queue elements are:\n");
for(i=front;i<=rear;i++)
{
printf("%d",que[i]);
}
}
}
int main() {
    struct student s1;
    struct student s2;
    struct student s3;
    struct student s4;
    struct student temp;
   
    
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%[^\n]",s1.name);

    printf("Enter Student roll number: ");
    scanf("%d", &s1.roll_num);
    

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s\n", s1.name);
    printf("Roll number: %d\n", s1.roll_num);

     printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%c",&temp);
    scanf("%[^\n]",s2.name);

    printf("Enter Student roll number: ");
    scanf("%d", &s2.roll_num);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s\n", s2.name);
    printf("Roll number: %d\n", s2.roll_num);
   \
    

       printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%c",&temp);
    scanf("%[^\n]",s3.name);

    printf("Enter Student roll number: ");
    scanf("%d", &s3.roll_num);

    

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s\n", s3.name);
    printf("Roll number: %d\n", s3.roll_num);
   

      printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%c",&temp);
    scanf("%[^\n]",s4.name);

    printf("Enter Student roll number: ");
    scanf("%d", &s4.roll_num);
  

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s\n", s4.name);
    printf("Roll number: %d\n", s4.roll_num);
    
    if(s1.roll_num%2==0)
        enque(s1.roll_num);
    if(s2.roll_num%2==0)
        enque(s2.roll_num);
    if(s3.roll_num%2==0)
        enque(s3.roll_num);
    if(s4.roll_num%2==0)
        enque(s4.roll_num);
    display();

    
}


