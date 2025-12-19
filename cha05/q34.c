#include<stdio.h>
int main()
{
int n,i;
int  sum=0;
 int count =0;
  printf("enter the no:");
  scanf("%d",&n);
  for( i=1;i<=n;i++)
  {
  printf("enter the  count of sum no:");
  scanf("%d",&count);
  sum=sum+count;
  }
 printf("sum is %d ",sum);
}