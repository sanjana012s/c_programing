#include<stdio.h>
int pal(int n,int rev);
int main()
{
  int n;
  printf("enter the no is:");
  scanf(" %d",&n);
  int rev==pal(n,0);
  if(n==rev)
  {
    printf("%d is palidrom",n)
  }
  else{
    printf("%d is not palidrom",n)
  }
}
int pal(int n,int rev){
  if(n==0)
  {
    return rev;
  }
  
    int ld=n%10;
     int new_n=n/10;
    int rev=rev*10+ld;
    return pal(new_n,rev);
}
