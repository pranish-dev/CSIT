#include<stdio.h>
struct company
{
    char name[20],address[20];
    long int number;
    int no_of_employee;
}c;
int main (){
    printf("Enter Company name:");
    fgets(c.name, sizeof(c.name), stdin);
    printf("Enter Company address:");
    fgets(c.address, sizeof(c.address), stdin);
    printf("Enter Company phone number:");
    scanf("%ld",&c.number);
    printf("Enter number of employee:");
    scanf("%d",&c.no_of_employee);
    printf("\nCompany details:\n");
    printf("Company name:%s",c.name);
    printf("Company address:%s",c.address);
    printf("Company phone number:%ld\n",c.number);
    printf("number of employee:%d\n",c.no_of_employee);
    return 0;
}
