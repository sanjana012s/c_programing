#include<stdio.h>
int main()
  {
    int n;
    printf("enter the no is:");
    scanf("%d",&n);
    if(n==0)
    {
       printf(" no is zero:");
    }
    else if(n>0){
       printf(" no is positive:");
    }
    else{
      printf("no is negative:");
    }
  }
