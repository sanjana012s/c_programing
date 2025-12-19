#include<stdio.h>

  struct student // structure keyword and structure tag
  {
    int rollno;//member of element of structure
    char name[10];
    float marks;
  };
  int main()
  { //direct initilization
    struct student s1={10,"sanjana",70};
    //designated initilialization
    struct student s2= {.rollno=20,.name="anu",.marks=50};
    //zero initilization
    struct student s3={0};
    //copy initilization
    struct student s4=s1;
    printf(" \n student rollno is %d :student name is %s :student marks is %f",s1.rollno, s1.name,s1.marks);
    printf(" \n student rollno is %d :student name is %s :student marks is %f",s2.rollno, s2.name,s2.marks);
    printf(" \n student rollno is %d :student name is %s :student marks is %f",s3.rollno, s3.name,s3.marks);
    printf(" \n student rollno is %d :student name is %s :student marks is %f",s4.rollno, s4.name,s4.marks);


  }