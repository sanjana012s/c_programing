//print the max noo
#include<stdio.h>
 float max_fun(float , float );
 int main()

 {
  float a,b;
  printf("enter the no a:\n");
  scanf(" %f",&a);
  printf("enter the no b:\n");
  scanf(" %f",&b);
  printf("max no bw %fand %f are %f",a,b, max_fun(a,b));
  return 0;

 }
  float max_fun(float a, float b)
  {
    
        return a>b ? a : b;
       
  }