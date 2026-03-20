#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    setlinestyle(SOLID_LINE, 0, 1);
    line(20, 30, 200, 30);
    setlinestyle(DOTTED_LINE, 0, 1);
    line(20, 50, 200, 50);
    setlinestyle(DASHED_LINE, 0, 1);
    line(20, 70, 200, 70);
    setlinestyle(CENTER_LINE, 0, 1);
    line(20, 90, 200, 90);
    for (int i = 0; i < 7; i++) {
        setcolor(i);
        rectangle(20 + i * 40, 140, 50 + i * 40, 170);
    }
    for (int i = 0; i < 6; i++) {
        setfillstyle(i, i + 1);
        bar(20 + i * 50, 210, 60 + i * 50, 250);
    }
    getch();
    closegraph();
    return 0;
}