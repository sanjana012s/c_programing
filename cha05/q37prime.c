#include<stdio.h>
int main()
{
int n,i;
int ld,rev =0;
  printf("enter the no:");
  scanf("%d",&n);
while(n!=0)
  {
    ld=n%10;
    rev=rev*10+ld;
    n=n/10;
  }
  printf("revese no is: %d \n",rev);
}