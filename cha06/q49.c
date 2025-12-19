//print the squer of each no enter by user, and user exit from loop enter by -1
#include<stdio.h>
int main()
{
  int i,n,res;
  while(n!=-1)
  {
    printf("enter the no enter by the user:\n");
    scanf(" %d",&n);
    if(n!=0)
    {
      res=n*n;
      printf(" %d",res);
      printf("\n");
    }
  }
}