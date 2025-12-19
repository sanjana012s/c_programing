//string: string is the  sequence of charecter and it is terminated by null charecter ('\0)
// "hello": string length is 5 but memory allocated by  6 bit  because in this condition null charecter are included
// string initilization is : char c[]="abcd"; OR char c [50]="abcd"; OR char c[]={'a','b','c','d'}; OR char c[5]={'a','b','c','d','\0'};


// the bigest disadvantage of  a string is if string got void space than in this case occurs string are turnicate
//scanf("%4s",c) output is:hell

#include<stdio.h>
int main()
{
  char c[5]="hello";
  for(int i=0;i<5;i++)
  {
    printf("\nstring is %c ",c[i]);
  }
  printf("\n");
   for(int i=0;i<5;i++)
  {
    printf("\nstring is %d ",c[i]);
  }
}