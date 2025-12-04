#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0;

    printf("Enter a string (no spaces): ");
    scanf("%s", str);

    while (str[i] != '\0')
        i++;

    printf("Length = %d\n", i);

    return 0;
}
