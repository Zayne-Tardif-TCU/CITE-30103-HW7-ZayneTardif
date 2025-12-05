#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char line[101];
    int i = 0;
    int vowels = 0, consonants = 0, digits = 0;

    printf("Enter a line of text (up to 100 chars): ");
    fgets(line, sizeof(line), stdin);

    while (line[i] != '\0')
    {
        char c = line[i];

        if (c == '\n')
        {
            i++;
            continue;
        }

        if (c >= '0' && c <= '9')
        {
            digits++;
        }
        else if (isalpha((unsigned char)c))
        {
            char lower = tolower((unsigned char)c);
            if (lower == 'a' || lower == 'e' || lower == 'i' ||
                lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }

        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);

    return 0;
}
