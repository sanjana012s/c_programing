//unsingend no  ke max me 1 add karane pr 0 ho jata hai baki sab ka negative

#include<stdio.h>
#include<limits.h>
int main()
{
  unsigned int  positive= UINT_MAX;
  int normal=INT_MAX;
  printf("\nenter the value of unsigned is %u",positive);
  printf("\nenter the value of normal int is %d",normal);
  positive++;
  normal++;
  printf("\n\n\nenter the value of unsigned is %u",positive);
  printf("\nenter the value of normal int is %d",normal);


}