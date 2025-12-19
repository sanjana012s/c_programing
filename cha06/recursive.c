#include<stdio.h>
int rec(int n);
int main(){
 int n=4;
  int result = rec(n);   // function call and store result
  printf("Factorial of %d is: %d\n", n, result);

}
int rec(int n){
  if(n==0)
  {
    return 1;
  }
 else{
  return n*rec(n-1);
}
}
