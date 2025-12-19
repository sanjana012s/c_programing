#include<stdio.h>
int main()

  {
    int n1;
    printf("enter the n1 is:");
    scanf("%d",&n1);
    if(n1>90)
    {
       printf(" A grades:%d",n1);
    }
     else if(n1>75 && n1<=90){
      printf("B grade:%d",n1);
    }
    else if(n1>60 && n1<=75){
       printf(" C grade:%d",n1);
    }
     else if(n1>30 && n1<=60){
       printf(" D grade:%d",n1);
    }
    else{
      printf("F grade:%d",n1);
    }
  }