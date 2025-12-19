//int size=sizeof(myarray)/sizeof(myarray[0])
#include<stdio.h>
void sum_marks();
int arr[5];
int sum=0;
int main()
{
sum_marks();
return 0;
}
void sum_marks()
{
  for(int i=0;i<5;i++)
  {
    printf("enter your marks %d are: %d",(i+1),arr[i]);
    scanf(" %d",&arr[i]);
    sum=sum+arr[i];
  }
  printf("sum is: %d",sum);
for(int i=0;i<5;i++)
{
printf("\n your marks %d are : %d",(i+1),arr[i]);
}
}
