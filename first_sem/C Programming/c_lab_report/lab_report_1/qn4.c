#include<stdio.h>
#include<math.h>
int main () {
    float a, b, c, s, ar;
    printf("Enter Three Sides of Triangle:");
    scanf("%f%f%f",&a ,&b ,&c);
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The Area of Triangle is %.2f",ar);
    return 0;
}
