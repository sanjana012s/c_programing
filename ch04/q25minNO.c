#include<stdio.h>
int main()
{
  int n1,n2;
  printf("enter the no:");
  scanf("%d",&n1);
  printf("enter the no:");
  scanf("%d",&n2);
  n1>n2 ? printf("n2is min %d",n2):printf("n1 is min %d",n1);
}