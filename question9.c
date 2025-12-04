#include <stdio.h>

int main(void)
{
    int arr[5];
    int i, temp;

    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < 5 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }

    printf("Reversed array: ");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
