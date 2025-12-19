//typedef are used to add the new name in structure or and it is make aeasy namicature:typedef int myint,where typedef is keyword and int is data type  and myint is new name
#include<stdio.h>
typedef struct //student//{
  char name[40];
  int rollno;
  int marks;
}stu;
int main()
{
 // struct// student student={"sanjana",1,99};
  stu sana={"sana",1,99};
}
//OR
typedef struct {
  char name[40];
  int rollno;
  int marks;
}stu;
