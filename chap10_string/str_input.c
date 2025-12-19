//fgets and puts  function are use to take input and show output


//1.fgets()
//*safe input:read a string from a file or stdin safely into a buffer
//*limit length: take the maximum size to read , preventing buffer overflow
//*includes newline:can include the newline charecter (\n) if its fits in the buffer 


//2.puts()
//*simple output: writes astring to stdout and appends a newline automatically
//*no formate specifier: directly prints the string without formating  optional


//3.get()(not recommended):
//* unsafe input:
//*buffer overflow:
//*deprecated: removed from the c11 standard due to its risk



// get and put are used to print a void space 

#include<stdio.h>
int main()
{
  char name[40];
  printf("please enter you name");
  gets(name);
  printf("good morning\n");
  puts(name);
  printf("now enter your name:");
  fgets(name, sizeof(name),stdin);
  printf("good morning");
  puts(name);

}