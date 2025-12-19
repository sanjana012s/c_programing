#include <stdio.h>

int main()
{
    int i, n;
    int sum = 0;
    int n1;
while(n1!=0)
    {
     printf("enter the no: ");
     scanf("%d", &n1); // added &
        if(n!=0)
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
