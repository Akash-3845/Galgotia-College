#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c\\tc\\bgi");
    circle(200, 200, 100);
    getch();
    closegraph();
    return 0;
}