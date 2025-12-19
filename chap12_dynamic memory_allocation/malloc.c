//it is alocated the memory without initilization is 0
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,sum=0;
  int size;
  int n;
  printf("enter the value of element");
  scanf("%d",&size);
  int *arr=(int*)malloc(sizeof(int)*size);
  if(arr==NULL)
  {
    printf("memory allocation failed");
    return 1;
  }
  for(i=0;i<size;i++)
  {
    printf("enter the element:");
    scanf("%d",&n);
    sum=sum+n;
  }
  printf("%d",sum);
  return 0;

}