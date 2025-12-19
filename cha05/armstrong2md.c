#include <stdio.h>
int main()
{
    int n, i, sum = 0, count = 0, ld;
    int t, digits;
    printf("Enter the number: ");
    scanf("%d", &n);
    int temp = n; 
    t = n;
    // Count digits
    while (t != 0)
    {
        count++;
        t = t / 10;
    }
    t = n; // reset t to original number
    while (t != 0)
    {
        ld = t % 10;
        int power = 1;
        for (i = 1; i <= count; i++)
        {
            power = power * ld;
        }
        sum = sum + power;
        t = t / 10;
    }
    // Compare sum with original number
    if (sum == n)
        printf("Number is Armstrong");
    else
        printf("Number is not Armstrong");

    return 0;
}
