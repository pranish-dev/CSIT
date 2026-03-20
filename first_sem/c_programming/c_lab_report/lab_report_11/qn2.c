#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char*)"");
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(200, 200, 70);
    floodfill(200,200,YELLOW);
    setcolor(BLACK);
    circle(170,185,7);
    circle(235,185,7);
    arc(200,210,200,340,40);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(170,185,BLACK);
    floodfill(235,185,BLACK);
    getch();
    closegraph();
    return 0;
}