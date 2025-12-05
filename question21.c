#include <stdio.h>

int main(void)
{
    int x;
    int *p;

    printf("Enter an integer: ");
    scanf("%d", &x);

    p = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void *)&x);
    printf("Value through pointer *p: %d\n", *p);

    return 0;
}
