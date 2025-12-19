#include<stdio.h>
int main(){
int a,b;
printf("enter the first number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
printf("before swaping a=%d b=%d\n",a,b);
printf("without using third variable");
a=a+b;
b=a-b;
a=a-b;
printf("after swaping a=%d b=%d\n",a,b);
return 0;
}