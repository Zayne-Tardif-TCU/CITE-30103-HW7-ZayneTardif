#include <stdio.h>

int main(void)
{
    int n;
    int arr[100];
    int i;
    int sum = 0;
    double avg;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid n.\n");
        return 0;
    }

    printf("Enter %d integers: ", n);
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (double)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
