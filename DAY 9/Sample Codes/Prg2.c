//Making a Rectangle and Applying Background color to it
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
 
void main()
{
   int gd = DETECT, gm;
   clrscr();
   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
   setcolor(BLUE);
   rectangle(50,50,100,100);
   getch();
   closegraph();
}