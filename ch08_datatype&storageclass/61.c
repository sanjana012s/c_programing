#include<stdio.h>
int main()
{ 
  char chars;
char *ptr= &chars;
  printf("enter the value");
  scanf("%c",ptr);
  printf("\n the value of char % c is",chars);//it is hold the value
  printf("\n the value of char % c is",ptr);// it is hold the address
  printf("\n the value of char % c is",*ptr);// it is hold the address

}