#include<stdio.h>
#define PI 3.14
int main () {
    float r, c, a;
    printf("Enter Radius of Circle:");
    scanf("%f",&r);
    c=2*PI*r;
    a=PI*r*r;
    printf("The Circrumference is %.2f and Area is %.2f",c,a);
    return 0;
}
