#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Set color to red
    setcolor(RED);

    // Draw a line
    line(100, 100, 200, 100);

    // Draw a rectangle
    rectangle(150, 150, 300, 250);

    // Fill the rectangle with red color
    setfillstyle(SOLID_FILL, RED);
    floodfill(151, 151, RED);

    // Draw a circle
    circle(400, 200, 50);

    // Fill the circle with red color
    floodfill(400, 200, RED);

    getch();
    closegraph();
    return 0;
}
