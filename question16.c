#include <stdio.h>

struct Student
{
    char name[40];
    int roll;
    float marks;
};

int main(void)
{
    struct Student s;

    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    // remove newline if present
    int i = 0;
    while (s.name[i] != '\0')
    {
        if (s.name[i] == '\n')
        {
            s.name[i] = '\0';
            break;
        }
        i++;
    }

    printf("Enter roll: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printf("Name : %s\n", s.name);
    printf("Roll : %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
