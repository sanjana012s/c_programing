#include<stdio.h>
int main()
{
  int n1;
  printf("enter the no:");
  scanf("%d",&n1);
  n1>=0? printf("absolute %d",(n1)):printf("absolute %d",-n1);
}