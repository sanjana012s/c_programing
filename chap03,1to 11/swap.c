#include<stdio.h>
int main(){
int a,b;
printf("enter the first number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
printf("before swaping a=%d b=%d\n",a,b);
int temp=a;
a=b;
b=temp;
printf("after swaping a=%d b=%d\n",a,b);

return 0;


}