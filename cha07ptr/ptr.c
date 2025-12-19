//& address operator
//*ptr operator or value at adddress
#include<stdio.h>
int main()
{
  int i =6;
  int *j, **k;
  k=&j;
  j=&i;
  printf("value of i is: %d\n",**k);
  printf("value of i is: %d \n",i);
  printf("value of i is: %d\n",*j);
  printf("value of i is: %d\n",*(&i));
  printf("value of i is: %d\n",*j);
  printf("address of i is: %p \n",&i);
  printf("address of i is: %p\n",j);
  printf("address of i is: %p\n",*k);
  printf(" address of j is: %p\n",&j);
  printf("address of j is: %p \n",k);
  printf("address of k is: %p\n",&k);
 
   
   
}

