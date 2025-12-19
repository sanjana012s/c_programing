
//print all no enter by user and exit if and only if user enter by 0

#include <stdio.h>

int main()
{
    int n1;
    int sum = 0;
while(n1!=0)
    {
      printf("enter the no: ");
        scanf("%d", &n1); // added &
        if(n1!=0)
        {
        sum = sum + n1;
        }
        else{
            break;
        }
    }
    printf("sum is %d\n", sum);

    return 0;
}
