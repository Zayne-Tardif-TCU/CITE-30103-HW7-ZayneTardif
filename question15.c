#include <stdio.h>

int main(void)
{
    char line[101];
    int i = 0;
    int inWord = 0;
    int count = 0;

    printf("Enter a line of text (up to 100 chars): ");
    fgets(line, sizeof(line), stdin);

    while (line[i] != '\0')
    {
        char c = line[i];

        if (c != ' ' && c != '\t' && c != '\n')
        {
            if (!inWord)
            {
                inWord = 1;
                count++;
            }
        }
        else
        {
            inWord = 0;
        }

        i++;
    }

    printf("Word count: %d\n", count);

    return 0;
}
