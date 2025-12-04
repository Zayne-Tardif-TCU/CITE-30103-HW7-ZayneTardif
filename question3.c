#include <stdio.h>

int isEven(int n)
{
    return (n % 2 == 0);
}

int main(void)
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isEven(num))
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);

    return 0;
}
