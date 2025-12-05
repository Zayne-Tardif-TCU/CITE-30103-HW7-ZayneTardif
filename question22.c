#include <stdio.h>

int main(void)
{
    int arr[5];
    int i;
    int *p = arr;

    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);   // normal indexing for input is allowed
    }

    printf("You entered: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));   // pointer arithmetic for printing
    }
    printf("\n");

    return 0;
}
