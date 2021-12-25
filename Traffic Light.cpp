#include<graphics.h>
#include<conio.h>
#include<dos.h>//for handling interrupts, producing sound, date and time functions etc.
#include<stdlib.h>//standard library
main()
{
    int i,j=0,gd = DETECT, gm, midx, midy,x=0;

    initgraph(&gd, &gm, "C:\\TC\\BGI");//The Borland Graphics Interface, also known as BGI. //gd=graphics driver, gm=graphics mode.

    midx = getmaxx()/2;
    midy = getmaxy()/2;

    setcolor(GREEN);
    settextstyle(BOLD_FONT, HORIZ_DIR, 3);//DEFAULT,TRIPLEXSMALLSANS_SERIF,GOTHIC,SCRIPT,SIMPLEX ,TRIPLEX,SCRCOMPLEX,EUROPEAN,BOLD
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    outtextxy(midx, midy-10, "Traffic Light Simulation");
    outtextxy(midx, midy+10, "Press any key to start");
    getch();
    cleardevice();//clears the screen in graphics mode and sets the current position
    // cleardevice();//clears the screen in graphics mode and sets the current position

    for( i = 0 ; i <= 420 ; i = i+10, j++ )
    {
setcolor(WHITE);
      line(0,2,650,2);
        line(0,5,650,5);
        line(0,420,650,420);
        line(0,421,650,421);
        line(0,422,650,422);
        line(0,423,650,423);
        line(0,429,650,429);
        line(0,425,650,425);
        line(0,427,650,427);
        line(0,431,650,431);
        line(0,433,650,433);
        line(0,434,650,434);
        line(0,435,650,435);
        rectangle(50+i,275,150+i,400);
        rectangle(150+i,350,200+i,400);
        circle(75+i,410,10);
        circle(175+i,410,10);
        setcolor(j);
        delay(100);

        if( i == 20 )
            break;
        if ( j == 15 )
            j = 2;
        {
            setcolor(WHITE);
            settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
            rectangle(midx-30,midy-80,midx+30,midy+80);
            rectangle(midx-5,midy-1000,midx+5,midy-80);
            circle(midx, midy-50, 22);
            setfillstyle(SOLID_FILL,RED);
            floodfill(midx, midy-50,WHITE);
            setcolor(BLUE);

            outtextxy(midx,midy-50,"STOP");
            delay(1000);//1 second = 1000 miliseconds
            graphdefaults();
            cleardevice();
            setcolor(WHITE);
            rectangle(midx-30,midy-80,midx+30,midy+80);
            rectangle(midx-5,midy-1000,midx+5,midy-80);
            circle(midx, midy, 20);
            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(midx, midy,WHITE);
            setcolor(BLUE);
            outtextxy(midx-18,midy-3,"READY");
        }

    }

    delay(4000);
    cleardevice();
    setcolor(WHITE);
    rectangle(midx-30,midy-80,midx+30,midy+80);
    rectangle(midx-5,midy-1000,midx+5,midy-80);
    circle(midx, midy+50, 22);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(midx, midy+50,WHITE);
    setcolor(BLUE);
    outtextxy(midx-7,midy+48,"GO");
  setcolor(RED);
    settextstyle(BOLD_FONT, HORIZ_DIR, 3);

    for( i = 0 ; i <= 420 ; i = i+10, j++ )
    {
        line(0,420,650,420);
        line(0,421,650,421);
        line(0,422,650,422);
        line(0,423,650,423);
        line(0,429,650,429);
        line(0,425,650,425);
        line(0,427,650,427);
        line(0,431,650,431);
        line(0,433,650,433);
        line(0,434,650,434);
        line(0,435,650,435);
        rectangle(50+i,275,150+i,400);
        rectangle(150+i,350,200+i,400);
        circle(75+i,410,10);
        circle(175+i,410,10);
        setcolor(j);
        delay(100);

        if( i == 420 )
            break;
        if ( j == 15 )
            j = 2;

        cleardevice(); // clear screen
    }

    outtextxy(midx-210, midy+30, "[Press any key to exit..]");
    getch();

    closegraph();
    return 0;
}
