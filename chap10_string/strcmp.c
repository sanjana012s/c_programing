//strcmp are used to compair the two string if both string is same than condition is true and output is zero otherwise false
#include<stdio.h>
#include<string.h>
int main()
{
  char str1[20]="annu";
  printf("\nyour first string is: %s",str1);
  char str2[30]="annu";
  printf("\nyour second string is: %s",str2);
   int comp=strcmp(str1,str2);
  printf("\ncombination of two string is : %d",comp);
}