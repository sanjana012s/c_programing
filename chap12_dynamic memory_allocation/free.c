//free methode:
//memory released: free deallocated previously allocated memory, making it available for future aalocations
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int *p= (int*)malloc(sizeof(int));
 if(p==NULL)
 {
  printf("memory is allocation failed.\n");
  return 1;
 }
 *p=40;//assigen value
 printf("value: %d",*p);
 free(p);//free the aallocated memory
 p=NULL;//Avoid donglling pointer
  return 0;

}