// area of triangle=0.5(base*hight)
#include<stdio.h>
int main()
{
float base,height,res;
printf("enter the base of triangle:\n");
scanf("%f",&base);
printf("enter the height of triangle:\n");
scanf("%f",&height);
res=0.5*base*height;
printf("area of triangle is %f",res);
}