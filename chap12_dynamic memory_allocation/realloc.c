/*

*USING REALLOC:
1.RESIZE MEMORY: realloc is used to resize previously allocated memory without losing the data
2.NEW ALLOCATION: if passed  a null pointer ,it behave like mallloc 
3.FREEING: if the new size is 0,it behave like free, dealocating the memory
4.DATA PRESERVATION: attempts to preserve the original data ,even when moving a new location.


*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
//allocate the memory for two integer
int* arr=malloc(2*sizeof(int));
arr[0]=1;
arr[1]=2;
//resize array two hold the three integer
arr=realloc(arr,3*sizeof(int));
arr[2]=3;//initilization new element
for(int i=0;i<3;i++)
{
  printf("%d",arr[i]);

}
printf("\n");
free(arr);//free the allocate the memory
return 0;
}