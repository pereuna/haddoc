#include <X11/Xlib.h>
#include <X11/Xcms.h>
#include <X11/X.h>
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include "color_names.h"
#include "glob.h"
//#include "attr.h"

#define CTXP(a) ((a)/coord_res)
#define MAX(a,b) (a) > (b) ? (a) : (b)
#define MIN(a,b) (a) < (b) ? (a) : (b)
#define LEN(I,J) hypot((area_points[I].x - area_points[J].x),(area_points[I].y - area_points[J].y))
#define MID(a,b) ((a+b)/2)

int narepoints;
static int xdl;			//XDisLocation
static int ydl;
int isfirst;			//for PD(0); calls
int isCI = 0;
int radius;
int cgpoint_x=0;
int cgpoint_y=0;
XPoint ppo;
XPoint cpo;
extern Pixmap omap;
float dire = 0;
enum FTYP { A = 3, L = 2, P = 1 };
 
extern int mode;
extern int attrib[ATTRCNT];
extern Pixmap dmap[10];
extern int map_size_x;
extern int map_size_y;
extern XPoint *area_points;

/* functions */
void draw_complex_point(int pno); /* complex line procedure */
void finish_obj(void); /* draw lines to drawable */
void calc_disl(void); /* move object to zero point */ 
void rotate_point_x(XPoint * points); /* rotate complex line point */
void move_point(int i); /* move point to right place */
void calculate_cg(void); /* center of gravity for areas */
void rotate_point(int i); /*rotate single point around origo */

int xxx = 0;

void draw_complex_point(int pno)
{
    register int i = 0, j, k, l = 0;
    float tmp_x, tmp_y, tmp_l, tmp_t;
    int close = 0;
    int ftime = 1;
    int tmp_attr = CTXP(attr[2] + attr[4] - attr[0]);	//FIXME
    
    for (i = 0; i < narepoints - 1; i++) {
	dire = atan((float) (area_points[i + 1].y - area_points[i].y) /
		      (float) (area_points[i + 1].x - area_points[i].x));
	if (area_points[i + 1].x < area_points[i].x) {
	    dire += M_PI;
	}
	tmp_t = LEN(i + 1, i);
      taas:
	tmp_x = cos(dire) * tmp_attr;
	tmp_y = sin(dire) * tmp_attr;
	tmp_l = hypot(tmp_x, tmp_y);
	l = (int) (tmp_t / tmp_l);

	ppo = points[pno - 1];
	cpo = points[pno];
	rotate_point_x(&ppo);
	rotate_point_x(&cpo);
	ppo.x += area_points[i].x;
	ppo.y += area_points[i].y;
	cpo.x += area_points[i].x;
	cpo.y += area_points[i].y;
	
	//k käy objektit viivoissa tai viivassa, symbols on boundary or line 
	for (k = 0; k < l; k++) {
	    if (isCI) {
		XDrawArc(display, dmap[0], gc,
			 cpo.x - radius / 2,
			 cpo.y - radius / 2, radius, radius, 0, 360 * 64);
	    } else {
		XDrawLine(display, dmap[0], gc, ppo.x, ppo.y, cpo.x, cpo.y);
		//printf("draw line no = %d\n", xxx++);
	    }
	    ppo.x += tmp_x;
	    ppo.y += tmp_y;
	    cpo.x += tmp_x;
	    cpo.y += tmp_y;

	}
	//FIXME Conncet missaligned complexlines s. 19 S52-Manual
        
	if (close) {
	    isCI = 0;
	    return;
	}
    }
    if ((area_points[0].x != area_points[narepoints-1].x) ||
	(area_points[0].y != area_points[narepoints-1].y)) {
	close = 1;
	dire = atan((float) (area_points[narepoints-1].y - area_points[0].y) /
		      (float) (area_points[narepoints-1].x - area_points[0].x));
	if (area_points[0].x <= area_points[narepoints-1].x) {
	    dire += M_PI;
	}
	tmp_t = LEN(i, 0);
	//printf("taas\n");
	//goto taas; //FIXME singlelines not work
    }
    isCI = 0;

}

void finish_obj(void)
{
	if(prim == A){
		dire = 0;
	}
    if (pm_mode == 2) {
	if (attrsize == SY_MOD) {
	    if (isfirst) {	//for PD(0); calls.
		XDrawPoints(display, dmap[0], gc, points, npoints, mode);
	    } else {
		XDrawLines(display, dmap[0], gc, points, npoints, mode);
	    }
	} else if (attrsize == PT_MOD) {
	    if (isfirst) {	//for PD(0); calls.
		XDrawPoints(display, pattern_win, gc, points, npoints, mode);
	    } else {
		//printf("finish_obj:%d\n", xxx++);
		XDrawLines(display, pattern_win, gc, points, npoints, mode);
	    }
	}

    }
	
}

void move_point(int i)
{
    if(prim == 1){
    points[i].x += area_points[0].x;
    points[i].y += area_points[0].y;
    }else if (prim == 3){
    points[i].x += cgpoint_x;
    points[i].y += cgpoint_y;
    }
	

}

/* center of gravity , at the moment not a real mass center*/
void calculate_cg(void)
{
    int i;
    int x = 0, y = 0, lx = 0, len;

    for (i = 1; i < narepoints; i++) {
	len = LEN((i - 1), i);
	x += (len * MID(area_points[i - 1].x, area_points[i].x));
	y += (len * MID(area_points[i - 1].y, area_points[i].y));
	lx += len;
    }
    /* check if area isn't closed */
    if ((area_points[0].x != area_points[narepoints - 1].x) ||
	(area_points[0].y != area_points[narepoints - 1].y)) {
	x += ((LEN(0, narepoints-1) * 
		MID(area_points[0].x, area_points[narepoints - 1].x)));
	y += ((LEN(0, narepoints-1) * 
		MID(area_points[0].y, area_points[narepoints - 1].y)));
	lx += len;
    }

    if(x)
    	cgpoint_x = x / lx;
    if(y)
    	cgpoint_y= y / lx;
	
    
}


void rotate_point_x(XPoint * points)
{
    register int i;
    register float h, a;

    h = hypot(points->x, points->y);
    a = dire + atan2(points->y, points->x);
    points->x = (short) (cos(a) * h);
    points->y = (short) (sin(a) * h);
}
void rotate_point(int i)
{
    float h, a;
    h = hypot(points[i].x, points[i].y);
    a = ((float)attrib[ORIENT]*2*M_PI)/360 + atan2(points[i].y, points[i].x);
    points[i].x = (short) (-cos(a) * h);
    points[i].y = (short) (sin(a) * h);
}

void create_pattern(void)
{
    Pixmap pmap;
    GC andgc;
    int shape = Nonconvex;
    int box_x = CTXP(attr[7]) + CTXP(attr[3]);
    int box_y = CTXP(attr[8]) + CTXP(attr[3]);
    /*
    Pixmap omap = XCreatePixmap(display, dmap[0],
	              map_size_x, map_size_y, DefaultDepth(display, s_num));
    */
    if (!box_x)
	box_x = 5;

    if (!box_y)
	box_y = 5;

    andgc = XCreateGC(display, win, 0, NULL);
    /* clear teporary pattern area */ 
    XSetForeground(display, andgc, 0);
    XSetFillStyle(display, andgc, FillSolid);
    XFillRectangle(display, omap, andgc, 0, 0, map_size_x, map_size_y);
   
    //printf("Haloo\n");
    if (attr[1] == LIN) {
	//box_x += 2;
	box_y += 1;
	pmap = XCreatePixmap(display, win, box_x, box_y, 
				DefaultDepth(display, s_num));

	XSetForeground(display, gc, BlackPixel(display, s_num));
	XSetFillStyle(display, gc, FillSolid);
	XFillRectangle(display, pmap, gc, 0, 0, box_x, box_y);

    } else if(attr[1] == STG) {
	box_x *= 2;
	box_y *= 2;
        
	pmap = XCreatePixmap(display, win, box_x, box_y,
			     DefaultDepth(display, s_num));
        
	XSetForeground(display, gc, BlackPixel(display, s_num));
	XSetFillStyle(display, gc, FillSolid);
	XFillRectangle(display, pmap, gc, 0, 0, box_x, box_y);
				
	XCopyArea(display, pattern_win, pmap, gc,
		   CTXP(attr[9]),
		   CTXP(attr[10]),
		   CTXP(attr[7]) + 2,
		   CTXP(attr[8]) + 2,
		   CTXP(attr[7]) + CTXP(attr[3]),
		   CTXP(attr[8]) + CTXP(attr[3]));
		    
    }
    XCopyArea(display, pattern_win, pmap, gc,
	       CTXP(attr[9]),
	       CTXP(attr[10]), CTXP(attr[7]) + 2, CTXP(attr[8]) + 2, 0, 0);
    
    
    XSetTile(display, andgc, pmap);
    XSetFillStyle(display, andgc, FillTiled);
    
    /* copy area shape with pattern  to omap */
    XFillPolygon(display, omap, andgc, area_points, narepoints, shape, mode);
    
    XSetFunction(display, andgc, GXand);
    XSetForeground(display, andgc, 0);
    XSetBackground(display, andgc, ~0);
    XCopyPlane(display, omap, dmap[0], andgc, 0, 0, 
		    map_size_x, map_size_y, 0, 0, 1L);
    XSetFunction(display, andgc, GXxor); 
    XCopyArea(display, omap, dmap[0], andgc, 0, 0, 
		    map_size_x, map_size_y, 0, 0);
    
    /* clear pattern symbol drawing area */
    XSetFunction(display, andgc, GXcopy); 
    XSetForeground(display, andgc, 0);
    XSetFillStyle(display, andgc, FillSolid);
    XFillRectangle(display, pattern_win, andgc, 0, 0, map_size_x, map_size_y);

    XFreeGC(display, andgc);
    XFreePixmap(display, pmap);
    //XFreePixmap(display, omap);
    
    return;
}

void calc_disl()
{
    switch(attrsize){
	    case SY_MOD:
	xdl = CTXP(attr[1]);
	ydl = CTXP(attr[2]);
	return;
	    case LS_MOD:
	xdl = CTXP(attr[0]);
	ydl = CTXP(attr[1]);
	return;
	    case PT_MOD:
	xdl = CTXP(attr[5]);
	ydl = CTXP(attr[6]);
    return;
    }
}

/* vector symbol language
 * SP colour - single letter
 * ST transparency 1/4 steps (only affects the polycon fill FP inst.)
 * SW pen width in 0.3 mm units
 * PU pen up to coord x,y...x,y
 * PD pen down to coord x,y...x,y
 * CI circle, radius
 * AA x,y,arc angle
 * PM polycon mode 
 * 	PM 0 -> enter to pm_mode
 * 	PM 1 -> subpolycon
 * 	PM 2 -> exit pm_mode
 * EP outlines polycon
 * FP fills polycon 
 * SC call another symbol definition
 */

void SW(int w)
{
    w = (int) (floor(w * pen_res));
    if (w == 0)
	w = 1;
    ////printf("SW(%d);\n", w);
    XSetLineAttributes(display, gc, w, LineSolid, CapRound, JoinRound);
    
}

void CI(int r)
{
    radius = (float) r / (coord_res / 2);
    calc_disl();
    //printf("CI(%d)\n", radius);
    if (attrsize == SY_MOD) {
	
	XDrawArc(display, dmap[0], gc,
		 points[0].x - radius / 2,
		 points[0].y - radius / 2, radius, radius, 0, 360 * 64);
	//XFlush(display);
    } else if (attrsize == LS_MOD) {
	isCI = 1;
	draw_complex_point(0);
    } else {
	XDrawArc(display, pattern_win, gc,
		 points[0].x - radius / 2,
		 points[0].y - radius / 2, radius, radius, 0, 360 * 64);
    }
    
	
}

void PM(int i)
{
    //printf("PM(%d)\n", i);
    pm_mode = i;
}

void PU(int i, ...)
{
    int k;
    va_list args;
    va_start(args, i);
    npoints = 0;
    calc_disl();
    if (prim == A && attrsize == PT_MOD) {
	points[0].x = CTXP(i);
    } else {
	points[0].x = CTXP(i) - xdl;
    }
    //printf("PU(%d,", i);
    k = va_arg(args, int);
    if (prim == A && attrsize == PT_MOD) {
	points[0].y = CTXP(k);
    } else {
	points[0].y = CTXP(k) - ydl;
	if (attrsize != LS_MOD) {
	    if(attrib[ORIENT]){
		rotate_point(0);
	    }
	    move_point(0);
	}
    }
    //printf("%d);\n", k);
    va_end(args);
    npoints++;
}

void PD(int i, ...)
{
    int k;
    va_list args;
    //printf("PD (");
    calc_disl();
    isfirst = 1;		//for PD(0); calls
    va_start(args, i);
    k = i;
    for (;;) {
	if (!k)
	    goto pois;
	isfirst = 0;
	//printf("%d, ", k);
	if (prim == A && attrsize == PT_MOD) {
	    points[npoints].x = CTXP(k);
	} else {
	    points[npoints].x = CTXP(k) - xdl;
	}
	k = va_arg(args, int);

	if (!k)
	    goto pois;
	//printf("%d, ", k);
	if (prim == A && attrsize == PT_MOD) {
	    points[npoints].y = CTXP(k);
	} else {
	    points[npoints].y = CTXP(k) - ydl;
	    if (attrsize == LS_MOD) {
		draw_complex_point(npoints);
	    } else {
		if(attrib[ORIENT]){
		    rotate_point(npoints);
		}
		move_point(npoints);
	    }
	}
	k = va_arg(args, int);
	npoints++;
    }
  pois:
    finish_obj();
    va_end(args);
    //printf(");\n");
}

void EP(void)
{
    npoints = 0;
}

void FP()
{
    int shape = Nonconvex;
    int mode = CoordModeOrigin;
    //printf("FP();\n");
    XFillPolygon(display, dmap[0], gc, points, npoints, shape, mode);
    //XFlush(display);
    npoints = 0;
    
	
}

void SC()
{
}
void SP(XcmsColor a)
{
    XSetForeground(display, gc, a.pixel);
    
}

void ST(int a)
{
}

void AA(int x, int y, int a)
{
}

/*lookup calls*/
void LS(int line_type, int w, XcmsColor * c)
{
    char dash[2] = { 10, 5};
    char dott[2];
    int i; 
    XSetForeground(display, gc, c[color_theme].pixel);
    
    w = (int) (floor(w * pen_res));
    dott[0] = w+1;
    dott[1] = w+1;

    switch(line_type){
	    case SOLD:
    		XSetLineAttributes(display, gc, w, 
				LineSolid, CapRound, JoinRound);
		break;
	    case DASH:
		XSetDashes(display, gc, 0, dash, 2); 
    		XSetLineAttributes(display, gc, w, 
				LineOnOffDash, CapRound, JoinRound);
		break;
	    case DOTT:
		XSetDashes(display, gc, 0, dott, 2); 
    		XSetLineAttributes(display, gc, w, 
				LineOnOffDash, CapRound, JoinRound);
		break;
    }
    for(i=1; i<narepoints; i++){
    XDrawLine(display, dmap[0], gc, area_points[i-1].x,
		                area_points[i-1].y,
				area_points[i].x,
				area_points[i].y);
	//printf("viiva:%d\n", i);
    }
    

}

void AC(XcmsColor * c)
{
    int shape = Nonconvex;
    XSetForeground(display, gc, c[color_theme].pixel);
    XSetFillStyle(display, gc, FillSolid);
    XFillPolygon(display, dmap[0], gc, area_points, narepoints, shape, mode);
    
}
void AC_T(XcmsColor * c, int t)
{
}

void TX(char *string, int hjust, int vjust, int space, char *chars,
	int xoffs, int yoffs, XcmsColor * colur, int displ)
{
}
void TE(const char *format, ...)
{
}
