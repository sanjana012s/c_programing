#include<stdio.h>
int main()
{
  int age;
  printf("enter your age\n");
  scanf("%d",&age);
  if(age>=18){
    printf("audult");
  }
  else{
    printf("not audult");
  }
}