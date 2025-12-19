#include<stdio.h>
#include<math.h>  // pow() ke liye
int main()
{
    int n, i, sum = 0, ld;
    printf("Enter the number: ");
    scanf("%d", &n);
    int temp = n;
    int digits = 0;
    // Count number of digits
    int t = n;
    while (t != 0)
    {
        digits++;
        t = t / 10;
    }
    // Calculate sum of digits^digits
    while (n != 0)
    {
        ld = n % 10;
        sum = sum + pow(ld, digits);
        n = n / 10;
    }
    // Compare
    if (sum == temp)
        printf("Number is Armstrong");
    else
        printf("Number is not Armstrong");
    return 0;
}
