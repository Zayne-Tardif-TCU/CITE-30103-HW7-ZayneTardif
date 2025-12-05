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
    int maxIndex = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Student %d name: ", i + 1);
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

    for (i = 1; i < 5; i++)
    {
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }

    printf("\nTop Student:\n");
    printf("Name : %s\n", s[maxIndex].name);
    printf("Roll : %d\n", s[maxIndex].roll);
    printf("Marks: %.2f\n", s[maxIndex].marks);

    return 0;
}
