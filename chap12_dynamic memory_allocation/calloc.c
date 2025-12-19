#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,sum=0;
  int size;
  int n;
  printf("enter the value of element");
  scanf("%d",&size);
  int *arr=(int*)calloc(size,sizeof(int));
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
  // will free the memory
  //free(n);
  //n==NULL;
  printf("%d",sum);
  return 0;

}
//it is allocated the memory with initilization 0