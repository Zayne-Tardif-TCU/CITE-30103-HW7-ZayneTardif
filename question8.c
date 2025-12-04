#include <stdio.h>

int main(void)
{
    int n, i;
    int arr[100];
    int even = 0, odd = 0;

    printf("How many integers? ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even count = %d\n", even);
    printf("Odd count  = %d\n", odd);

    return 0;
}
