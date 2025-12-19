#include<stdio.h>
struct student{
  char name[40];
  int rollno;
  int marks;
};
int main()
{
  int a=6;
  int *ptr=&a;
  struct student s1={"sanjana",1,99};
  struct student *struct_ptr=&s1;//structure with pointer
  printf(" \n student rollno is %d :student name is %s :student marks is %d",(*struct_ptr).rollno,(*struct_ptr).name,(*struct_ptr).marks);
  //OR
  printf(" \n student rollno is %d :student name is %s :student marks is %d",struct_ptr->rollno,struct_ptr->name,struct_ptr->marks);// (->):this is the array operator
}