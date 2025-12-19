#include<stdio.h>
int main()
{
  int arr[5];
  int n=arr.length();
  for(int i=0;i<n;i++)
  {
    printf("enter your marks %d are: %d",(i+1),arr[i]);
    scanf(" %d",&arr[i]);
  }
for(int i=0;i<n;i++)
{
printf("\n your marks %d are : %d",(i+1),arr[i]);
}
return 0;
}