#include <stdio.h>
struct employee
{
    int id;
    char name[50];
    char address[100];
    float salary;
};

int main()
{
    struct employee e[5];
    FILE *fp;
    int i;

    fp = fopen("employee.txt","w");

    for(i=0;i<5;i++)
    {
        printf("Enter ID Name Address Salary: ");
        scanf("%d %s %s %f",&e[i].id,e[i].name,e[i].address,&e[i].salary);
        fprintf(fp,"%d %s %s %f\n",e[i].id,e[i].name,e[i].address,e[i].salary);
    }

    fclose(fp);
    fp = fopen("employee.txt","r");

    printf("\nEmployee Records:\n");

    while(fscanf(fp,"%d %s %s %f",&e[i].id,e[i].name,e[i].address,&e[i].salary)!=EOF)
    {
        printf("%d %s %s %.2f\n",e[i].id,e[i].name,e[i].address,e[i].salary);
    }

    fclose(fp);

    return 0;
}