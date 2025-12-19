//
//print the squer of int
#include<stdio.h>
int squer(int a);
int main()
{
  int a;
  
  printf("enter the first no is:");
  scanf(" %d",&a);
  printf("sequer is % d are %d",a,squer(a*a));
}
int squer(int a)
{
  return a*a;
}