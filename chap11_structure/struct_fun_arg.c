#include<stdio.h>
struct student{
  char name[40];
  int rollno;
  int marks;
};
void print_student(struct student s1);
void student(struct student  *struct_ptr);
int main()
{
  int a=6;
  int *ptr=&a;
  struct student s1={"sanjana",1,99};
  print_student(s1);

  struct student *struct_ptr=&s1;//structure with pointer
    student(struct_ptr);
       printf(" \n student rollno is %d :student name is %s :student marks is %d",s1.rollno, s1.name,s1.marks);
  printf(" \n student rollno is %d :student name is %s :student marks is %d",(*struct_ptr).rollno,(*struct_ptr).name,(*struct_ptr).marks);
}
void print_student(struct student s1)
{
  s1.rollno=6;
   printf(" \n student rollno is %d :student name is %s :student marks is %d",s1.rollno, s1.name,s1.marks);
}
void student(struct student *struct_ptr )
{
  struct_ptr->rollno=7;
  printf(" \n student rollno is %d :student name is %s :student marks is %d",(*struct_ptr).rollno,(*struct_ptr).name,(*struct_ptr).marks);
}
