#include <stdio.h>

int main(void)
{
    char s1[200], s2[100];
    int i = 0, j = 0;

    printf("Enter first string (no spaces): ");
    scanf("%199s", s1);

    printf("Enter second string (no spaces): ");
    scanf("%99s", s2);

    while (s1[i] != '\0')
        i++;

    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';

    printf("Concatenated string: %s\n", s1);

    return 0;
}
