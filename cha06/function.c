//if you can want define function  any where in your program than we can use function prototype
#include <stdio.h>
//function prototype
void greet(); 
int sum(int a, int b);
int main() {
    greet();// function call
    int add=sum(4,8);//argument
    printf("Sum is: %d\n",add);
    return 0;
} 
void greet()//function definition
  {
    printf("Hello, World!\n");
  }
  int sum(int a,int b){//parameter
    return a+b;

  }

