//print the value of x and chang the value of x using * operator
#include<stdio.h>
int main()
{
  int n =5;
  int *ptr=&n;
  n=78;
  ptr=&n;
  printf("\n the value of n  % d is",n);

}