#include <stdio.h>
#include <X11/Xlib.h>
#include <unistd.h>
//#include <asm/msr.h>

#include "obj.h"
#include "color_names.h"
#include "attr.h"
#define COORD_UNITS 0.01
#define PEN_UNITS   0.3
#define COORD_RANGE 32767
#define DRAW_MAP 0 
//#define tic() rdtscll(bB)
//#define toc() rdtscll(aA);printf("toc:%f\n", (double)(aA-bB)/(364000000))

extern unsigned long long aA;
extern unsigned long long bB;
extern Display *display;
extern Window win;
extern Pixmap chartmap;
extern GC gc;

enum TNAM { PLAIN_BOUNDARIES, SYMBOLIZED_BOUNDARIES, SIMPLIFIED,
    PAPER_CHART, LINES
};
enum FTYP { A = 3, L = 2, P = 1 };
enum RPRI { O = 0, S = 0 };


int npoints;
int pm_mode = 2;
int obj_type;
XPoint points[256];
Colormap cmap;
Pixmap pattern_win;
Pixmap omap;
Pixmap dmap[10];
int s_num;
int map_size_x = 640;
int map_size_y = 480;
float coord_res;
float pen_res;

int color_theme = DAY_BRIGHT;
int attrib[ATTRCNT];
int attrsize;
int *attr;
int prior = 0;
int prim = 0;

struct point {
    short x;
    short y;
};


void create_pattern(void);
int alloc_colors(Display * d, Colormap cmap);

int mode = CoordModeOrigin;

int draw_obj(int ono)
{
    obj[ono].fun(DRAW_MAP);
    obj_type = ono+1;
    return 0;
}

Pixmap finish_map(Display * d)
{
    //int i, j, list, cnt;

    XCopyArea(d, dmap[0], chartmap, gc, 0, 0, map_size_x, map_size_y, 0, 0);
    XSetForeground(display, gc, ~0);
    XSetFillStyle(display, gc, FillSolid);
    XFillRectangle(display, dmap[0], gc, 0, 0, map_size_x, map_size_y);
    return chartmap;
}

int init_preslib(Display * d, Window w, int x, int y)
{
    int i;
    //_Xdebug = 1;
    win = w;
    display = d;
 
    map_size_x = x;
    map_size_y = y;
    
    s_num = DefaultScreen(display);
    
    cmap = DefaultColormap(display, s_num);

    chartmap = XCreatePixmap(display, win,
			     x, y, DefaultDepth(display, s_num));

    //gc = XCreateGC(display, win, 0, NULL);

    XSetForeground(display, gc, WhitePixel(display, s_num));
    XFillRectangle(display, chartmap, gc, 0, 0, x, y);

    XSetForeground(display, gc, ~0);
    XSetFillStyle(display, gc, FillSolid);

    for (i = 0; i < 10; i++) {
	dmap[i] = XCreatePixmap(display, win,
				map_size_x, map_size_y,
				DefaultDepth(display, s_num));
	XFillRectangle(display, dmap[i], gc, 0, 0, map_size_x, map_size_y);
    }
    /*
       XSetForeground(display, gc, 0);
     */
    omap = XCreatePixmap(display, win,
			 map_size_x, map_size_y,
			 DefaultDepth(display, s_num));
    XFillRectangle(display, omap, gc, 0, 0, map_size_x, map_size_y);
    /* create and clear temporary drawing area for pattern symbols */
    pattern_win = XCreatePixmap(display, win,
				map_size_x, map_size_y,
				DefaultDepth(display, s_num));
    XFillRectangle(display, pattern_win, gc, 0, 0, map_size_x, map_size_y);

    /* trying to find true coefficients for drawing */
    coord_res = ((float) (DisplayHeightMM(display, s_num) + 25) /
		 DisplayHeight(display, s_num)) / COORD_UNITS;
    pen_res = ((float) (DisplayHeightMM(display, s_num) + 25) /
	       DisplayHeight(display, s_num)) / PEN_UNITS;

    /* alloc.c */
    alloc_colors(display, cmap);
    return 0;
}

int set_illumination(int ct)
{
    color_theme = ct;
    return 0;
}

