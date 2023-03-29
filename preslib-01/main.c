#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xcms.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "preslib.h"
#include "attr.h"
#include "color_names.h"


unsigned long long aA = 0;
unsigned long long bB = 0;
Display *display;
Window win;
Pixmap chartmap;
GC gc;

int safety_contour = 30;
extern int attrib[ATTRCNT];     
extern int narepoints;
XPoint *area_points;

int main(int argc, char **argv)
{
    //Colormap cmap;
    //GC gc;

    Pixmap map;
    //Window win;
    //Display *display;

    int s_num;
    XEvent event;
    
    XPoint apo[] = { {100, 100}, {270, 110}, {200, 300}, {100, 300}, {100,100} };
    //XPoint apo2[] = { {1, 1}, {500, 1}, {500, 500}, {1, 500}, {1,1} };
    
    display = XOpenDisplay(NULL);
    s_num = DefaultScreen(display);
    //cmap = DefaultColormap(display, s_num);

    win = XCreateSimpleWindow(display, RootWindow(display, s_num), 0, 0,
			      400, 400, 0,
			      BlackPixel(display, s_num),
			      WhitePixel(display, s_num));
    
    
    gc = XCreateGC(display, win, 0, NULL);
    
    XSetForeground(display, gc, WhitePixel(display, s_num));
    XFillRectangle(display, win, gc, 0, 0, 400, 400);
	
    XSetFillStyle(display, gc, FillSolid);
    
    init_preslib(display, win, 400, 400);
    XMapRaised(display, win);
    XSelectInput(display, win, ExposureMask);
    attrib[TRAFIC] = 4;
    /*
    narepoints = 4;
    area_points = apo;
    prim = 3;
    draw_obj(1);
    map = finish_map(display);
    */
    area_points = apo;
    narepoints = 5;
    prim = 2;
    draw_obj(108);
    map = finish_map(display);
    
    while (1) {
	XNextEvent(display, &event);
	switch (event.type) {
	case Expose:
	    XCopyArea(display, map, win, gc, 0, 0, 400, 400, 0, 0);
	    XFlush(display);
	    //draw_obj(108);
	    //LS__RECTRC09();
	    //LS__RECTRC09();
	    //map = finish_map(display);
            
	    break;
	default:

	    break;
	}
    }
  //pois:
    XFreeGC(display, gc);
    XDestroyWindow(display, win);
    XCloseDisplay(display);
    exit(0);
    return 0;
}
