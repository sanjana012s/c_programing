// strcpy are used to copy the string including null charecter from source to destination
#include<stdio.h>
#include<string.h>
int main()
{
  char name[40];
  printf("enter the your name:");
  fgets(name,40,stdin);
  char new_name[70];
  strcpy(new_name,name);//strcpy usage strcpy(copy_in,copy_out)
  printf("%s has beeen copird to %s ",name,new_name);
  
}




