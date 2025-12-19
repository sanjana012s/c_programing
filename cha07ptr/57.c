// febanicy series
#include<stdio.h>
int fev(int);
int main()
{
  int n;
  printf("enter the no is:");
  scanf(" %d",&n);
  for(int i=0;i<n;i++)
  {
    printf("%d ",fev(i));
  }

}
int fev(int n){
  if(n<=1)
  {
    return n;
  }
  else
  {
    int  res=fev(n-1)+fev(n-2);
  }
}