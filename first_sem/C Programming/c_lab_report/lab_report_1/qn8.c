#include<stdio.h>
#define PI 3.14
int main (){
    float r,v,h;
    printf("Enter radius of cylinder:");
    scanf("%f",&r);
    printf("Enter height of cylinder:");
    scanf("%f",&h);
    v=PI*r*r*h;
    printf("The volume of cylinder is %.2f",v);
    return 0;
}