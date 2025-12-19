#include<stdio.h>
#include<math.h>  // pow() ke liye

int main()
{
    int n, i,j;
    printf("Enter the number: ");
    scanf("%d", &n);
   for(i=1;i<=n;i++)
   {
    for(j=i;j<=n;j++)
    {
      printf(" ");
     
    }
     printf("\n"); 
   }

   for(i=1;i<=n;i++)
   {
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
     printf("\n"); 
   }

}

