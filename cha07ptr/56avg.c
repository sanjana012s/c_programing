#include<stdio.h>
int avg(int,int,int,int);
int main()
{
  int n1,n2,n3,n4;
  printf("enter the value of n:\n");
  scanf("%d",&n1);
  printf("enter the value of n:\n");
  scanf("%d",&n2);
  printf("enter the value of n:\n");
  scanf("%d",&n3);
  printf("enter the value of n:\n");
  scanf("%d",&n4);
  printf("the avg is %d",avg(2,4,5,6));

}
int avg(int a,int b,int c,int d){
  int sum = a+b+c+d;
  int avg=sum/4;
  return avg;

}