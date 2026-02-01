#include<stdio.h>
int main () {
    int days,year,months,day,temp1;
    printf("Enter number of days:");
    scanf("%d",&days);
    year=days/365;
    temp1=days%365;
    months=temp1/30;
    day=temp1%30;
    printf("%d Days is equal to %d years %d months and %d days",days,year,months,day);
    return 0;
    
}