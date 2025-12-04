#include <stdio.h>

int main(void)
{
    int arr[10];
    int i;
    int min, max;

    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    min = max = arr[0];

    for (i = 1; i < 10; i++)
    {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("Smallest = %d\n", min);
    printf("Largest  = %d\n", max);

    return 0;
}