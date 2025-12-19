#include<stdio.h>
#include<string.h>
int main()
{
  char c[40];
  printf("enter the your name:");
  fgets(c,40,stdin);
  int size=strlen(c);
  printf("the length of your name is %d",size);
}
//strlen are used to find out the lenght of string without including null charecter