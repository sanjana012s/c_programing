// simple interest=p*r*t/100
#include<stdio.h>
int main()
{
  float p,r,t,res;
printf("enter the principal amount:\n");
 scanf("%f",&p);
 printf("enter the rate:\n");
  scanf("%f",&r);
   printf("enter the time:\n");
  scanf("%f",&t);
  res=(p*r*t)/100;
  printf("simple interest is %f",res);

}