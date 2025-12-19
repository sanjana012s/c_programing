
#include<stdio.h>

  struct student // structure keyword and structure tag
  {
    int rollno;//member of element of structure
    char name[10];
    float marks;
  };
int main()
{
  //create a student variable
  struct student student1;
  

  //nested access: school.class.student.roollno

  // accessing structure element
  printf("enter the student details\n");
  printf("enter the rollno");
  scanf("%d", &student1.rollno);
  printf("enter the your name");
  scanf("%s",& student1.name);
  printf("enter the your marks");
  scanf("%f",&student1.marks);
  printf("here the student details \n");
  printf(" \n student rollno is %d :student name is %s :student marks is %f",student1.rollno, student1.name,student1.marks);
}