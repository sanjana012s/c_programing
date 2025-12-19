//add the 4 no with the help of fun
#include<stdio.h>
int add(int a,int b ,int c, int d);
int main()
{ 
   printf("%d", add(3,5,7,8));
}
int add(int a,int b, int c,int d){
  return a+b+c+d;
}
