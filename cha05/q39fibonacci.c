#include<stdio.h>
int main()
{
int n,i;
  printf("enter the no:");
  scanf("%d",&n);
 int f0=0;
 int f1=1;
 int fn;
 printf("fab %d  %d  ",f0,f1);
 for(i=2;i<=n-1;i++)
 {
  fn=f0+f1;
  f0=f1;
  f1=fn;
  printf("  %d",fn);
 }
}