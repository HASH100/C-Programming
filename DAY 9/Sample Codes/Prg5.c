//Apply background color to screen.
#include<graphics.h> 
#include<conio.h>
 
main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
 
   
   setbkcolor (GREEN);
 
   getch();
   closegraph();
   return 0;
}