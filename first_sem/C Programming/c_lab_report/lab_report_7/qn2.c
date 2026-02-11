#include<stdio.h>
float surfarea(float l, float b, float h){
    float sarea;
    sarea=2*(l*b+b*h+l*h);
    return sarea;
}
int main (){
    float l,b,h,sarea;
    printf("Enter Length, Breadth, Height Respectively:");
    scanf("%f%f%f",&l,&b,&h);
    sarea=surfarea(l,b,h);
    printf("The surface area is %.2f",sarea);
    return 0;
}