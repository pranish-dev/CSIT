#include<stdio.h>
struct company
{
    char name[20],address[20];
    long int number;
    int no_of_employee;
}c;
int main (){
    printf("Enter Company name:");
    gets(c.name);
    printf("Enter Company address:");
    gets(c.address);
    printf("Enter Company phone number:");
    scanf("%ld",&c.number);
    printf("Enter number of employee:");
    scanf("%d",&c.no_of_employee);
    printf("Company name:%s\n",c.name);
    printf("Company address:%s\n",c.address);
    printf("Company phone number:%d\n",c.number);
    printf("number of employee:%d\n",c.no_of_employee);
    return 0;
}
