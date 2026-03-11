#include <stdio.h>

int main()
{
    char name[10][50];
    int roll[10];
    float marks[10];
    FILE *fp;
    int i;

    fp = fopen("student.txt","w");

    for(i=0;i<10;i++)
    {
        printf("Enter Name Roll Marks of %d Student: ",i+1);
        scanf("%s %d %f", name[i], &roll[i], &marks[i]);
        fprintf(fp,"%s %d %f\n", name[i], roll[i], marks[i]);
    }

    fclose(fp);

    fp = fopen("student.txt","r");

    printf("\nStudent Records:\n");

    for(i=0;i<10;i++)
    {
        fscanf(fp,"%s %d %f", name[i], &roll[i], &marks[i]);
        printf("%s %d %.2f\n", name[i], roll[i], marks[i]);
    }

    fclose(fp);

    return 0;
}