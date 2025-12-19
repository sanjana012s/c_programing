#include<stdio.h>
int ocurrence(int arr[],int size,int element);
int main()
{
  int arr[10]={10,3,3,4,4,5,6,7,9,10};
  int res=ocurrence(arr,10,3);
  printf("the element % d is occcerence time",res); 
}
int ocurrence(int arr[],int size,int element)
{
  int count=0;
 for(int i=0;i<size;i++)
 {
  if(arr[i]==element)
  {
    count++;
  }
 }
return 0;
}