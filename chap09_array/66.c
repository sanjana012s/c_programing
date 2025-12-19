#include <stdio.h>

int main()
{
    int arr[40];
    int sum = 0;
    float avg;
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input elements
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to sum
    }

    avg = (float)sum / n;

    printf("\nSum of elements = %d", sum);
    printf("\nAverage of elements = %.2f\n", avg);

    return 0;
}
