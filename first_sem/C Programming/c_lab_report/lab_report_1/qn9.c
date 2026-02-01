#include<stdio.h>
#include<math.h>
int main(){
    float p,t,r,i;
    printf("Enter Principle, Rate, Time:");
    scanf("%f%f%f",&p,&r,&t);
    i=p*(pow((1+r/100),t)-1);
    printf("The Compound Intrest is %.2f",i);
    return 0;
}