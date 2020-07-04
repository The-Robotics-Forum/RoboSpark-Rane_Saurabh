#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student_record
{
    int roll_no;
    char name[30];
};

struct queue
{
    int roll_no;
    char name[30];
    int front , rear;
};

void init( struct queue* q){
    q->front=0;
    q->rear=0;

}
 void print(struct queue *q)
 {
     printf("\n Roll No: %d Name : %s", q->roll_no, q-> name);
 }

void enqueue(struct student_record *p , struct queue *q)
{
    q->roll_no=p->roll_no;
    strcpy(q->name , p->name);
    (q->rear) ++;
    print(q);

}

int main()
{
    int no_stud , i;
    struct student_record *p ;
    struct queue *q;

    printf("\n Enter total number of students : ");
    scanf("%d" , &no_stud);

    p = (struct student_record *)malloc(no_stud*sizeof(struct student_record));
    q = (struct queue *)malloc(no_stud*sizeof(struct queue));
    init(q);

    printf("\n Enter the details of student - \n ");
    for ( i=0 ; i<no_stud ; i++)
    {
        printf("\n Enter Roll No of student %d : ", i+1);
        scanf("%d" , &(p+i)->roll_no);
        fflush(stdin);

        printf(" Enter name of student %d : ", i+1);
        gets((*(p+i)).name);
        fflush(stdin);

    }

    for ( i=0 ; i<no_stud ; i++)
    {
        if( ((p+i)->roll_no) % 2 == 0)
        {
            enqueue(p+i , q);
        }
    }

   return 0;
}
