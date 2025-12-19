//return max float no
#include<stdio.h>
float max( int n, int n1);
int main()

{
  int n;
  int res;
  printf("enter the no:");
  scanf(" %d ",&n);
  int n1;
  printf("enter the no :");
  scanf(" %d",&n1);
  printf("the max no of between two no %d and % d are %d",n,n1,max(n,n1));

}
float max(int n,int n1){
if(n>n1){
  return n;
 
}
else{
  return n1;
  
}
}