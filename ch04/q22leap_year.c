#include<stdio.h>
int main()
{
  int year;
  printf("enter the year:");
  scanf("%d",&year);
  if (year%4==0 && year%100==0 && year%400==0){
    printf("leap centuary year:%d",year);
  }
  else if(year%4==0 && year%100==0){
       printf("centuary year not leap year:%d",year);

  }
  else if(year%4==0){
    printf("leap year:%d",year);
  }
  else{
    printf("not a leap year:%d",year);
  }
}