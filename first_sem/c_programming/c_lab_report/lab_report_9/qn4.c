#include <stdio.h>

struct student
{
    int RollNo;
    char Name[50];
    char Address[100];
    int Age;
    float physics;
    float math;
};

void display(struct student *s)
{
    printf("\nStudent Details:\n");
    printf("RollNo: %d\n", s->RollNo);
    printf("Name: %s\n", s->Name);
    printf("Address: %s\n", s->Address);
    printf("Age: %d\n", s->Age);
    printf("Physics: %.2f\n", s->physics);
    printf("Math: %.2f\n", s->math);
}

int main()
{
    struct student s;

    printf("Enter Roll No: ");
    scanf("%d", &s.RollNo);

    printf("Enter Name: ");
    scanf("%s", s.Name);

    printf("Enter Address: ");
    scanf("%s", s.Address);

    printf("Enter Age: ");
    scanf("%d", &s.Age);

    printf("Enter Physics Marks: ");
    scanf("%f", &s.physics);

    printf("Enter Math Marks: ");
    scanf("%f", &s.math);

    display(&s);

    return 0;
}