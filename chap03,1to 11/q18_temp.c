#include<stdio.h>
int main()
{
  float c,F;
  printf("enter the value of temp in fahrenheit:\n");
  scanf("%f",&F);
  c=(F-32)*5/9;
  printf("the value of temp in celsius is %f\n",c);
}