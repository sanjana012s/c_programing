//long data type used for storing the large amount of memory
#include<stdio.h>
int main()
{
int n;
int i;
long long fact =1;
printf("enter the no of fact is:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  fact =fact*i;
}
printf("fact is %d ",fact);
}//fact is -898433024