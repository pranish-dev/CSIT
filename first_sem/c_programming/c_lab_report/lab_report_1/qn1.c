#include<stdio.h>
int main () {
    float p, t, r, i;
    printf("Enter Principle Time and Rate:");
    scanf("%f%f%f",&p ,&t ,&r);
    i=(p*t*r)/100.0;
    printf("The Intrest is %.2f",i);
    return 0;
}
