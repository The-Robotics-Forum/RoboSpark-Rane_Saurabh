#include <stdio.h>
struct student {
    char name[50];
    int stud_id_num;
    float cgpa;
    int year;
} ;

int main() {
    struct student s1;
    struct student s2;
    struct student s3;
    struct student s4;
    struct student temp;
   
    
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%[^\n]",s1.name);

    printf("Enter Student id number: ");
    scanf("%d", &s1.stud_id_num);
    printf("Enter cgpa: ");
    scanf("%f", &s1.cgpa);
    printf("Enter year of student in number: ");
    scanf("%d",&s1.year);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s\n", s1.name);
    printf("Roll number: %d\n", s1.stud_id_num);
    printf("Marks: %.1f\n", s1.cgpa);
    printf("Year of student: %d\n",s1.year);

     printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%c",&temp);
    scanf("%[^\n]",s2.name);

    printf("Enter Student id number: ");
    scanf("%d", &s2.stud_id_num);
    printf("Enter cgpa: ");
    scanf("%f", &s2.cgpa);
    printf("Enter year of student in number: ");
    scanf("%d",&s2.year);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s\n", s2.name);
    printf("Roll number: %d\n", s2.stud_id_num);
    printf("Marks: %.1f\n", s2.cgpa);
    printf("Year of student: %d\n",s2.year);
    

       printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%c",&temp);
    scanf("%[^\n]",s3.name);

    printf("Enter Student id number: ");
    scanf("%d", &s3.stud_id_num);
    printf("Enter cgpa: ");
    scanf("%f", &s3.cgpa);
    printf("Enter year of student in number: ");
    scanf("%d",&s3.year);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s\n", s3.name);
    printf("Roll number: %d\n", s3.stud_id_num);
    printf("Marks: %.1f\n", s3.cgpa);
    printf("Year of student: %d\n",s3.year);

      printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%c",&temp);
    scanf("%[^\n]",s4.name);

    printf("Enter Student id number: ");
    scanf("%d", &s4.stud_id_num);
    printf("Enter cgpa: ");
    scanf("%f", &s4.cgpa);
    printf("Enter year of student in number: ");
    scanf("%d",&s4.year);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s\n", s4.name);
    printf("Roll number: %d\n", s4.stud_id_num);
    printf("Marks: %.1f\n", s4.cgpa);
    printf("Year of student: %d\n",s4.year);
    return 0;
}