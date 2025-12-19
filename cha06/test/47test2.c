//print all  positive no ignor to negative ,by user input

#include <stdio.h>

int main()
{
    int n1;
    int sum = 0;
while(n1!=0)
    {
      printf("enter the no: ");
        scanf("%d", &n1); 
        if(n1>0)
        {
           sum = sum + n1;
        }
        else
        {
          continue;
        }
    }
    printf("sum is %d\n", sum);

    return 0;
}
