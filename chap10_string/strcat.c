//strcat are use to combine the two string
//syntax:strcat(str1,str2)
#include<stdio.h>
#include<string.h>
int main()
{
  char str1[20]="sanjana";
  printf("\nyour first string is: %s",str1);
  char str2[30]="annu";
  printf("\nyour second string is: %s",str2);
  strcat(str1,str2);
  printf("\ncombination of two string is : %s",str1);
}