#include<stdio.h>
int main()
{
  int multi_arr[3][3][2][2];//scho0l,class,student,marks
  int i,j,k,l;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      for(k=0;k<2;k++)
      {
        for(l=0;l<2;l++)
        {
          printf("school are: %d and class are: %d and student are: %d and marks is %d ",(i+1),(j+1),(k+1),(l+1),multi_arr[i][j][k][l]);
          scanf(" %d",&multi_arr[i][j][k][l]);
        }

      }
    }
  }
   for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      for(k=0;k<2;k++)
      {
        for(l=0;l<2;l++)
        {
          printf(" \nyour school are: %d and your class are: %d and your student are: %d and  your marks is %d ",(i+1),(j+1),(k+1),(l+1),multi_arr[i][j][k][l]);
        }

      }
    }
  }
}