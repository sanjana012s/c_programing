#include<stdio.h>
void show_marks();
int arr[5];
int main()
{
  
show_marks();
return 0;
}
void show_marks()
{
  for(int i=0;i<5;i++)
  {
    printf("enter your marks %d are: %d",(i+1),arr[i]);
    scanf(" %d",&arr[i]);
  }
for(int i=0;i<5;i++)
{
printf("\n your marks %d are : %d",(i+1),arr[i]);
}
}
