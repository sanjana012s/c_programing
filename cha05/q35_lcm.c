#include<stdio.h>
int main()
{
  int n1,n2,res;
  printf("enter the no of first lcm:");
  scanf(" %d",&n1);
  printf("enter the no of second lcm:");
  scanf(" %d",&n2);
  int min=n1<n2?n1:n2;
  int i,max2=n1*n2;
  for(i=min;i<=max2;i++)
  {
if(i%n1==0 && i%n2==0)
{
  printf("the lcm is %d and %d are %d",n1,n2,i);;
  break;
}
  }
}