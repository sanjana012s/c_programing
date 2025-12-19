//0=positive
//1=negative
//singed no represent 0 and positive no in one bit and 7 bit are used to represent the data
//unsinged char are used to represent the non singed no including 0 and positive no in this condition occurs  total 8 bit and 8 bit are used to represent the data



//EXAMPLE:
#include<stdio.h>
int main()
{
  // unsigned used for calculate the area of triangle and formulaa is (area = length*breath) here  length and breath are never negative than in this condition we can used unsinged int
  unsigned length;
  unsigned breath;
  int temprature=-15;//temp may be positive and negative according to requriment
  printf("enter the no of length:\n");
  scanf("%u",&length);
  printf("\n");
  printf("\nenter the no of breath");
  scanf("%u",&breath);
  unsigned area= length*breath;
  printf("area is: %d ", area);
  printf("\n");
  printf("temprature is % d",temprature);
}