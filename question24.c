#include <stdio.h>

int square(int x)
{
    return x * x;
}

int main(void)
{
    int n;
    int (*funcPtr)(int);  // function pointer
    int result;

    funcPtr = square;

    printf("Enter an integer: ");
    scanf("%d", &n);

    result = funcPtr(n);

    printf("Square of %d is %d\n", n, result);

    return 0;
}
