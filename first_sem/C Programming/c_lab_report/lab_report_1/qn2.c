#include<stdio.h>
int main(){
    int a,b,c,avg;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("The Average of given numbers is %d",avg);
    return 0;
}
