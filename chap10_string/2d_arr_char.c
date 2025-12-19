#include<stdio.h>
#include<string.h>
int main()
{
  char name[4][45]={ "sanjan","abhi","aksh","stm"};//a[][]
  printf("2d array is %s \n",name);
  printf("\n\n");
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<45;j++)
    {
    printf("2d array is %s \n",name[i][j]);
    }
  }
}