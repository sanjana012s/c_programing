//in string modification is allow but in pointer string modification are not allow
#include<stdio.h>
int main()
{
 char str[30]="sanjana";
 printf("befor modify string: % s",str);
 str[0]='A';
 printf("\nafter modify string: %s ",str);
 printf("\n\n");
}
 
 // modify are not allow with string pointer
 /*char *str[30]="sanjana";
 printf("befor modify string: % s",*str);
 *str[0]='A';
 printf("\nafter modify string: %s ",*str);

}
 */