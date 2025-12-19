#include <stdio.h>

int main()
 {
    int n;
    while (n != 10)
     {
        printf("Please enter the number: ");
        scanf("%d", &n);
    }
    printf("Congratulations! You entered the correct number: %d\n", n);
    return 0;
}
