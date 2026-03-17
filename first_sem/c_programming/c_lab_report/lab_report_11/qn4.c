#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
for (int i = 0; i < 600; i+=5)
{
    cleardevice();
    line(0,260,650,260);
    rectangle(130+i,170,220+i,200);
    rectangle(100+i,200,250+i,250);
    circle(130+i,250,10);
    circle(220+i,250,10);
    delay(20);
    }
    getch();
    closegraph();
    return 0;
}