#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char*)"");

    circle(200, 200, 50);
    line(150,150,250,150);
    rectangle(50,50,200,200);
    ellipse(250,250,90,250,50,25);
    getch();
    closegraph();
    return 0;
}