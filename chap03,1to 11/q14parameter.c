//parameter of rectangle is abcd=a+b+c+d
#include<stdio.h>
int main()
{
  float a,b,c,d;
  float parameter;
  printf("enter the value of a");
  scanf("%f",&a);
  printf("enter the value of b");
  scanf("%f",&b);
  printf("enter the value of c");
  scanf("%f",&c);
  printf("enter the value of d");
  scanf("%f",&d);
  parameter=a+b+c+d;
  printf("rectangle parameter is%f",parameter);
  return 0;
}