#include<stdio.h>
int main(){
  char first_name[39];
  char last_name[39];
  int age;
  printf("enter your first name:\n %s",first_name);
  scanf("%s",first_name);
  printf("enter your last name:\n %s",last_name);
  scanf("%s",last_name);
  printf("enter your age:\n %d",age);
  scanf("%d",&age);
  printf("your first name is:%s\n",first_name);
  printf("your last name is:%s\n",last_name);
  printf("your age is:%d\n",age);
}