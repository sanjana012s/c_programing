#include<stdio.h>
#include<time.h>
void print_date();
int main()
{
  print_date();
}
void print_date(){
  time_t current_time;//datatype and variable
  time(&current_time);
  char* stringdata=asctime(localtime(&current_time));
  printf("current time is %s",stringdata);
}
