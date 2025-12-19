//increment with function
#include<stdio.h>
void increment(int);
int main()
{
  int n;
  printf("\nenter the no of n:");
  scanf("%d",&n);
  increment(n);
  printf("\nbefore increment the value is %d\n",n);
  
  printf("after dcrement %d\n",n);
  return 0;

}
void increment(int a){
  printf("\nbefore increment the value %d is\n",a);
  a++;
  printf("\nafter decrement the value %d is\n",a);
  
}
