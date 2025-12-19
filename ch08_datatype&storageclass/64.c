#include<stdio.h>
int main()
{
  long long n;
  long long fact=1;
  printf("enter the no of n is:");
  scanf("%lld",&n);
  for(long long i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  printf("the factorial %lld is %lld :",n,fact);
}