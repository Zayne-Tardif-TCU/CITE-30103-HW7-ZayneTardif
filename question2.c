#include <stdio.h>

int maxOfThree(int a, int b, int c)
{
    int max = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;

    return max;
}

int main(void)
{
    int x, y, z;

    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);

    int result = maxOfThree(x, y, z);

    printf("The maximum value is: %d\n", result);

    return 0;
}
