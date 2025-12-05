#include <stdio.h>

struct Student
{
    char name[40];
    int roll;
    float marks;
};

int main(void)
{
    struct Student s[5];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("Student %d name: ", i + 1);
        // clear leftover newline
        getchar();
        fgets(s[i].name, sizeof(s[i].name), stdin);

        j = 0;
        while (s[i].name[j] != '\0')
        {
            if (s[i].name[j] == '\n')
            {
                s[i].name[j] = '\0';
                break;
            }
            j++;
        }

        printf("Student %d roll: ", i + 1);
        scanf("%d", &s[i].roll);

        printf("Student %d marks: ", i + 1);
        scanf("%f", &s[i].marks);
    }

    printf("\n%-20s %-10s %-10s\n", "Name", "Roll", "Marks");
    for (i = 0; i < 5; i++)
    {
        printf("%-20s %-10d %-10.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
