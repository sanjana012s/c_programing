//structure is used to grouping the similar type of dataa 
#include<stdio.h>
int main()
{
  char name[4][20]={"sanjana","anu","neha","ram"};
  int roll_no[4]={1,2,3,4};
  int marks[4]={ 10,30,50,99};
  for(int i=0;i<4;i++)
  {
    printf("\n your name is : %s  , your roll_no is : %d , your marks is %d ",name[i],roll_no[i],marks[i]);
  }
}
// above problem remove by structure
// structure decaleration:
