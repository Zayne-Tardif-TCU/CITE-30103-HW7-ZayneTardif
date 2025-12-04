#include <stdio.h>

long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main(void)
{
    int n;
    long result;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Error: factorial is not defined for negative numbers.\n");
    }
    else
    {
        result = factorial(n);
        printf("%d! = %ld\n", n, result);
    }

    return 0;
}
