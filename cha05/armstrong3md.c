// working for four  digit  because ld is multiply by 4 time 
#include<stdio.h>
int main()
{
    int n, i, sum = 0, ld;
    printf("Enter the number: ");
    scanf("%d", &n);
    int temp = n;
    while (n != 0)
    {
        ld = n % 10;
        sum = sum + ld*ld*ld*ld;
        n = n / 10;
    }
    // Compare
    if (sum == temp)
        printf("Number is Armstrong");
    else
        printf("Number is not Armstrong");
    return 0;
}
