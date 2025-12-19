//0 and null value are false value whle all other values are true value
#include<stdio.h>
int main(){
  int age;
  printf("enter the your age:");
  scanf("%d",&age);
  if(age>=18){
    printf("adult\n");
  }
  else{
  printf("not audult");
  }
}