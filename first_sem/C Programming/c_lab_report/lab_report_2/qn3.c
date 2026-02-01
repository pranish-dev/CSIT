#include<stdio.h>
int main (){
    float salary,hra,da,gross;
    printf("Enter Basic Salary:");
    scanf("%f",&salary);
    gross=salary+(0.2*salary)+(0.5*salary);
    printf("The Gross Salary is %.2f",gross);
    return 0;
}