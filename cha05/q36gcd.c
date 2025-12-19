#include<stdio.h>
int main()
{
  int n1,n2,res;
  printf("enter the no of first lcm:");
  scanf(" %d",&n1);
  printf("enter the no of second lcm:");
  scanf(" %d",&n2);
  int max1=n1<n2?n1:n2;
  int i;
  for(i=max1;i>1;i--)
  {
if(n1%i==0 && n2%i==0)
{
  printf("the lcm is %d and %d are %d",n1,n2,i);;
  break;
}
  }
}