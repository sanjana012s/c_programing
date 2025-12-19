#include<stdio.h>
int main()
{
  int arr[3][2];
  int i,j;
  for(i=0;i<3;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("enter the student:%d for subject: %d ",(i+1),(j+1));
      scanf(" %d",&arr[i][j]);
    }
  }
   for(i=0;i<3;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("\nyour marks %d : %d ",(i+1), arr[i][j]);
      
    }
  }

}