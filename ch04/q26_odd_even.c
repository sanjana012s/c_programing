#include<stdio.h>
int main()
{
  int n1;
  printf("enter the no:");
  scanf("%d",&n1);
  n1%2==0 ? printf("even %d",n1):printf("odd %d",n1);
}