#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0, j;

    printf("Enter a word (no spaces): ");
    scanf("%99s", str);

    // find length
    while (str[i] != '\0')
        i++;
    j = i - 1;  // last index

    // check palindrome
    i = 0;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            printf("Not Palindrome\n");
            return 0;
        }
        i++;
        j--;
    }

    printf("Palindrome\n");
    return 0;
}
