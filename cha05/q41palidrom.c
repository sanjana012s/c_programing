#include<stdio.h>
#include<math.h>  // pow() ke liye

int main()
{
    int n, i, rev=0, ld;
    printf("Enter the number: ");
    scanf("%d", &n);
    int temp = n;
    while (n != 0)
    {
        ld = n % 10;
        rev = rev* 10 + ld;
        n = n / 10;
    }
    if (rev == temp)
        printf("Number is Palindrome");
    else
        printf("Number is not Palindrome");
}