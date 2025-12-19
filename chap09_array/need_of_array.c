#include<stdio.h>
int main()
{
  int marks[5];


  printf("enetr the no of marks1:\n");
  scanf("% d", &marks[0]);
  printf("enetr the no of marks2:\n");
  scanf("% d", &marks[1]);
  printf("enetr the no of marks3:\n");
  scanf("% d", &marks[2]);
  printf("enetr the no of marks4:\n");
  scanf("% d", &marks[3]);
  printf("enetr the no of marks5:\n");
  scanf("% d", &marks[4]);
  


  printf("your mark is: % d\n",marks[0]);
  printf("your mark is: % d\n",marks[1]);
  printf("your mark is: % d\n",marks[2]);
  printf("your mark is: % d\n",marks[3]);
  printf("your mark is: % d\n",marks[4]);
  return 0;
}