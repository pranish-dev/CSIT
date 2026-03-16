#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char*)"");
    setfillstyle(SOLID_FILL,RED);
    bar(20,200,50,50);
    getch();
    closegraph();
    return 0;
}