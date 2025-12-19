#include<stdio.h>
 struct students{
  char name[20];
  int rollno;
  int marks;
};
int main()
{
  struct students s1[5]={
    {"sanjan",1,99.4},
    {"ram",2,75.4},
    {"rita",3,96.4},
    {"maya",4,78.5},
    {"sita",5,99.4}
  };
  for(int i=0;i<4;i++)
  {
    printf(" \n student rollno is %d :student name is %s :student marks is %f",s1[i].rollno,s1[i].name,s1[i].marks);
}
}