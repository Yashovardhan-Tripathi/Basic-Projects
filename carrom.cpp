#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main() {
    // Graphics driver and mode
    int gd = DETECT, gm;
    
    // Initialize graphics mode in the BGI path
    initgraph(&gd, &gm, NULL);

    printf("CARROM BOARD DESIGN\n");
    delay(500);
    printf("BY SAMRAT SUBEDI\n");
    delay(1000);

    // Draw outer rectangle of the carrom board
    setcolor(YELLOW);
    rectangle(200, 100, 450, 350);

    // Draw four corner circles (holes)
    setcolor(WHITE);
    circle(215, 115, 10); // top-left
    circle(215, 335, 10); // bottom-left
    circle(435, 115, 10); // top-right
    circle(435, 335, 10); // bottom-right

    // Center circle
    circle(325, 225, 30);

    // Borders (four white lines around the carrom board)
    setcolor(WHITE);
    line(230, 150, 230, 300); // left vertical border
    line(240, 150, 240, 300); // left vertical border (parallel)
    line(420, 150, 420, 300); // right vertical border
    line(410, 150, 410, 300); // right vertical border (parallel)
    line(260, 305, 390, 305); // bottom horizontal border
    line(260, 315, 390, 315); // bottom horizontal border (parallel)
    line(260, 145, 390, 145); // top horizontal border
    line(260, 135, 390, 135); // top horizontal border (parallel)

    // Inclined lines (green)
    setcolor(GREEN);
    line(235, 130, 260, 160); // top-left to border
    line(235, 320, 260, 290); // bottom-left to border
    line(415, 130, 390, 160); // top-right to border
    line(415, 320, 390, 290); // bottom-right to border

    // Circles on inclined lines
    circle(260, 160, 8);
    circle(260, 290, 8);
    circle(390, 160, 8);
    circle(390, 290, 8);

    // Additional border circles
    setcolor(WHITE);
    circle(235, 150, 5); // top-left
    circle(235, 300, 5); // bottom-left
    circle(415, 150, 5); // top-right
    circle(415, 300, 5); // bottom-right
    circle(260, 140, 5); // top border-left
    circle(390, 140, 5); // top border-right
    circle(260, 310, 5); // bottom border-left
    circle(390, 310, 5); // bottom border-right

    delay(1000);

    // Coins (red and white circles)
    setcolor(RED);
    circle(325, 225, 5); // central coin
    delay(1000);

    setcolor(WHITE);
    circle(325, 248, 5); // white coins
    delay(1000);
    circle(325, 238, 5);
    delay(1000);
    circle(336, 219, 5);
    delay(1000);
    circle(314, 219, 5);
    delay(1000);
    circle(307, 212, 5);
    delay(1000);
    circle(343, 212, 5);
    delay(1000);

    // Blue coins
    setcolor(BLUE);
    circle(337, 232, 5);
    delay(1000);
    circle(314, 231, 5);
    delay(1000);
    circle(312, 245, 5);
    delay(1000);
    circle(337, 243, 5);
    delay(1000);
    circle(347, 225, 5);
    delay(1000);
    circle(302, 225, 5);
    delay(1000);
    circle(325, 213, 5);
    delay(1000);
    circle(335, 205, 5);
    delay(1000);
    circle(315, 205, 5);
    delay(1000);

    // Additional white coins
    setcolor(WHITE);
    circle(348, 236, 5);
    delay(1000);
    circle(305, 236, 5);
    delay(1000);
    circle(325, 201, 5);
    delay(1000);

    // Final circle to floodfill
    circle(335, 295, 7);
    floodfill(335, 295, WHITE);

    // Wait for user input and close graphics
    getch();
    closegraph();

    return 0;
}
