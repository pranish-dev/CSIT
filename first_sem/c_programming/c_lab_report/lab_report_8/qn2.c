#include<stdio.h>
#include<math.h>
struct distance
{
   float x1,x2,y1,y2,distance;
}p;
int main(){
    printf("Enter point x1,y1:");
    scanf("%f%f",&p.x1,&p.y1);
    printf("Enter point x2,y2:");
    scanf("%f%f",&p.x2,&p.y2);
    p.distance=sqrt(pow(p.x2-p.x1,2)+pow(p.y2-p.y1,2));
    printf("Distance between (%.2f,%.2f) and (%.2f,%.2f) is %.2f\n",p.x1,p.y1,p.x2,p.y2,p.distance);
    return 0;

}
