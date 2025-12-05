#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char name[40];
    int roll;
    float marks;
    struct Date dob;
};

int main(void)
{
    struct Student s;
    int i = 0;

    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

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

    printf("Enter DOB (day month year): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("\nStudent Details:\n");
    printf("Name : %s\n", s.name);
    printf("Roll : %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    printf("DOB  : %02d/%02d/%04d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}
