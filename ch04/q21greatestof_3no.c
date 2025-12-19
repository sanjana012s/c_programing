#include<stdio.h>
int main()

  {
    int n1,n2,n3;
    printf("enter the n1 is:");
    scanf("%d",&n1);
    printf("enter the n2 is:");
    scanf("%d",&n2);
    printf("enter the n3 is:");
    scanf("%d",&n3);
    if(n1>n2 && n1>n3)
    {
       printf(" n1 is max:%d",n1);
    }
    if(n2>n1 && n2>n3){
      printf(" n2 is max:%d",n2);
    }
    if(n3>n1 && n3>n2){
       printf(" n3 is max:%d",n3);
    }
    else{
      printf("no is equal:");
    }
  }