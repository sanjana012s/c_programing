#include<stdio.h>
int main()
{
  int n;
  int *ptr=&n;
  printf("ple enter the value");
  scanf("%d",ptr);
  printf("\n the value of n  % d is",n);
  printf("\n the value of n is %s is",ptr);//hold the address of n
  printf("\n the value of n is % d is",*ptr);// value at vallue
  printf("\n the value of n is % s is",&(*ptr));// hold the address
  printf("\n the value of n is % s is",&ptr);// pointer address
   printf("\n the value of n is % s is",&n);

}