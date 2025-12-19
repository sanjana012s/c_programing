//value copy:paase arument copy not actual value
//separate memory location




#include<stdio.h>
int swap(int*a,int*b);
int main()
  {
    printf("Before swapping a and b\n");
    int a=4,b=5;
    printf("a=%d b=%d\n",a,b);
    printf("After swapping a and b\n");
    printf("swap is:",swap(&a,&b));
    printf(" actual value of a,b is: a=%d b=%d\n",a,b);
    return 0;
  }
int swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("a=%d b=%d\n",a,b);
}