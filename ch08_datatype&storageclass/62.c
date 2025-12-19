//input=5bw6
//min is 5 and max is 6
#include<stdio.h>
void min_max( int*,int*,int*,int*);
int main()
{
  int n1,n2,min,max;
  printf("enter the value of n1 is:");
  scanf("%d",&n1);
  printf("enter the value of n1 is:");
  scanf("%d",&n2);
  printf( "the value bet %d and %d are min is %d and max is %d",n1,n2,min,max);

}
void min_max( int *a,int *b,int *min,int *max)
{
  if(*a>*b)
  {
    int *max=*a;
    int *min=*b;
  }
  else{
    int *max= *b;
    int *min=*a;
  }

}