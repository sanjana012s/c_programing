#include <stdio.h>
int main()
{
int i,n;
int count=0;
printf("enter the no for table:");
scanf("%d",&n);
if(n==1)
{
  printf("no is prime");
}
    for(i=1;i<=n;i++)
    {
      if(n%i==0)
      count++;
    }
    if(count==2)
    {
      printf("no is prime");
    }
    else
     {
        printf("no is not prime");
    }
}