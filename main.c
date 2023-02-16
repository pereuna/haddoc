#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xcms.h>
#include <X11/keysymdef.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//#include <asm/msr.h>
#include <preslib.h>
#include <8211.h>
#include "main.h"

#define COORD_UNITS 0.01
#define PEN_UNITS   0.3
#define COORD_RANGE 32767
#define READ_PRIOR 1

//#define tic() rdtscll(B)
//#define toc() rdtscll(A);printf("toc:%d ms\n", (A-B)/250000)
#define MAX(a,b) ((a) < (b)) ? (b) : (a)
#define MIN(a,b) ((a) > (b)) ? (b) : (a)
#define FLIP(a) (-(a) + maph)

struct spatial_point {
    PPoint xp;
    struct obj *fobj;
};

struct obj *feature_obj;
struct spatial_point *spati;
struct edges ed;
struct dspm_ dspm;

char *data_set_file;
int ZOOM = 10000;
float zoom = 1, zoom_old = 1;
int mapw, maph;
int box_x1 = 0, box_y1 = 0, box_x2 = 0, box_y2 = 0, gap_x = 0, gap_y = 0;
int gap_x_old = 0, gap_y_old = 0;
double zoom_x = 0, zoom_y = 0, zoom_real = 1;
long long A, B;
extern int floating_symbol = 1;
double display_height_deg;
double pixel_deg;
int bot_lat;
Pixmap chartmap;
XPoint *area_points;
Display *display;
Window win;
GC gc;

int safety_contour = 30;

/*funct prototypos*/

int test_paint(int spcnt);
int read_file(void);
void read_map(void);
int do_spatial(void);
void qs(struct spatial_point v[], int n);
int read_attrib(int i);
int copy_points(int i);


int main(int argc, char **argv)
{

    Colormap cmap;
    int s_num;
    KeyCode pan_key;

    XEvent event;
    int dh, dw, old_x, old_y;
    int sptcnt = 0;
    int is_pan = 0, is_zoom = 2;
    double zoom_orginal;
    long mask;
    Pixmap tmpmap;
#include "attrib_type.h"
//    _Xdebug = 1;
    if (argc < 2) {
	printf("usage: ./test <data set file> <sc>\n");
	exit(0);
    }

    data_set_file = argv[1];
    safety_contour = atoi(argv[2]);

    printf("Reading file ... ");
    read_file();
    printf("ready\n");
    printf("safety contour = %dm\n", safety_contour);
    printf("area N:%d S:%d\n", ed.NLAT, ed.SLAT);
    printf("area h:%f nm\n",
	   ((float) (ed.NLAT - ed.SLAT) / dspm.comf) * 60);
    printf("dspm.comf:%d\n", dspm.comf);

    sptcnt = do_spatial();
    printf("sptcnt:%d  objcnt:%d\n", sptcnt, objcnt);

    display = XOpenDisplay(NULL);
    s_num = DefaultScreen(display);
    cmap = DefaultColormap(display, s_num);

    dh = DisplayHeight(display, s_num);
    dw = DisplayWidth(display, s_num);
    mapw = dw;
    maph = dh;
    printf("dw:%d\tdh:%d\n", dw, dh);
    win = XCreateSimpleWindow(display, RootWindow(display, s_num),
			      0, 0,
			      dw,
			      dh,
			      0,
			      BlackPixel(display, s_num),
			      WhitePixel(display, s_num));


    gc = XCreateGC(display, win, 0, NULL);

    XSetForeground(display, gc, WhitePixel(display, s_num));
    XFillRectangle(display, win, gc, 0, 0, mapw, maph);

    XSetFillStyle(display, gc, FillSolid);

    init_preslib(display, win, mapw, maph);

    XMapRaised(display, win);

    mask =
	ExposureMask | ButtonPressMask | ButtonReleaseMask |
	Button1MotionMask | KeyPressMask | KeyReleaseMask;

    XSelectInput(display, win, mask);

    tmpmap = XCreatePixmap(display, win,
			   dw, dh, DefaultDepth(display, s_num));


    display_height_deg = ((double) DisplayHeightMM(display, s_num) + 25) / (1856874 * 60);	//FIXME this is for LAT 60 deg
    pixel_deg = display_height_deg / dh;
    zoom = (float) dh / (ed.NLAT - ed.SLAT);
    zoom_orginal = zoom;
    zoom_real = 1.000 / (((ed.NLAT - ed.SLAT) * zoom * pixel_deg) / 0.25);
    bot_lat = scale_y(ed.NLAT);
    printf("pixel_deg:%.20f\n", pixel_deg);
    printf("zoom:%.20f\n", zoom);
    printf("zoom_real:%.20f\n", zoom_real);

    test_paint(sptcnt);
    XCopyArea(display, win, tmpmap, gc, 0, 0, dw, dh, 0, 0);

    //keyboard init
    pan_key = XKeysymToKeycode(display, XK_Shift_L);

    while (1) {
	XNextEvent(display, &event);



	switch (event.type) {
	case KeyPress:
	    if (event.xkey.keycode == pan_key) {
		is_pan = 1;
		is_zoom = 0;
	    }
	    break;
	case KeyRelease:
	    if (event.xkey.keycode == pan_key) {
		is_pan = 0;
		is_zoom = 2;
	    }
	    break;
	case Expose:
	    XCopyArea(display, tmpmap, win, gc, 0, 0, dw, dh, 0, 0);
	    XFlush(display);
	    break;
	case ButtonPress:
	    box_x1 = event.xbutton.x;
	    box_y1 = event.xbutton.y;
	    if (is_zoom == 2)
		is_zoom = 1;
	    break;
	case MotionNotify:
	    if (is_pan) {
		gap_x += event.xbutton.x - box_x1;
		gap_y += event.xbutton.y - box_y1;
	    } else if (is_zoom) {
		if (box_x1 != event.xbutton.x && box_y1 != event.xbutton.y) {
		    XCopyArea(display, tmpmap, win, gc,
			      MIN(event.xbutton.x,
				  MIN(box_x1, old_x)) - 100,
			      MIN(event.xbutton.y,
				  MIN(box_y1, old_y)) - 100,
			      (int) abs(event.xbutton.x - box_x1) + 200,
			      (int) abs(event.xbutton.y - box_y1) + 200,
			      MIN(event.xbutton.x,
				  MIN(box_x1, old_x)) - 100,
			      MIN(event.xbutton.y,
				  MIN(box_y1, old_y)) - 100);


		    XDrawRectangle(display, win, gc,
				   MIN(box_x1, event.xbutton.x),
				   MIN(box_y1, event.xbutton.y),
				   (int) abs(event.xbutton.x - box_x1),
				   (int) abs(event.xbutton.y - box_y1));
		}

		old_x = event.xbutton.x;
		old_y = event.xbutton.y;
	    }
	    break;
	case ButtonRelease:
	    if (event.xbutton.button == 2) {
		if ((int) (1.000 / zoom) < (int) (1.000 / zoom_orginal)) {
		    zoom = zoom_orginal;
		} else {
		    zoom *= 0.75;
		}
		gap_x = 0;
		gap_y = 0;
		zoom_real =
		    1.000 / (((ed.NLAT - ed.SLAT) * zoom * pixel_deg) /
			     0.25);
		test_paint(sptcnt);
		XCopyArea(display, win, tmpmap, gc, 0, 0, dw, dh, 0, 0);
		break;
	    }

	    if (is_zoom == 1) {
		gap_x_old = gap_x;
		gap_y_old = gap_y;
		zoom_old = zoom;
		box_x2 = event.xbutton.x;
		box_y2 = event.xbutton.y;

		gap_x += (MIN(box_x1, box_x2));
		gap_y += (MIN(box_y1, box_y2));

		zoom_x = (double) dw / abs(box_x1 - box_x2);
		zoom_y = (double) dh / abs(box_y1 - box_y2);

		if ((int) (zoom_x * 100) <= (int) (zoom_y * 100)) {
		    gap_x *= zoom_x;
		    gap_y *= zoom_x;
		    zoom *= zoom_x;
		} else {
		    gap_x *= zoom_y;
		    gap_y *= zoom_y;
		    zoom *= zoom_y;
		}

		zoom_real =
		    1.000 / (((ed.NLAT - ed.SLAT) * zoom * pixel_deg) /
			     0.25);
		test_paint(sptcnt);
		XCopyArea(display, win, tmpmap, gc, 0, 0, dw, dh, 0, 0);
		is_zoom = 2;
	    } else if (is_pan) {
		test_paint(sptcnt);
		XCopyArea(display, win, tmpmap, gc, 0, 0, dw, dh, 0, 0);
	    }

	    break;
	default:
	    break;
	}
    }
    XFreeGC(display, gc);
    //XFreePixmap(display, chartmap);
    XDestroyWindow(display, win);
    XCloseDisplay(display);
    exit(0);
    return 0;
}

int test_paint(int spcnt)
{
    register int i = 0, j = 0, k = 0;
    int tmp_x, tmp_y;
    int prior = 0;

    for (j = 0; j < 10; j++) {

	for (i = 0; i < spcnt; i++) {

	    tmp_x = spati[i].xp.x * zoom * 0.5 - gap_x;
	    tmp_y = spati[i].xp.y * zoom;
	    tmp_y = -tmp_y + scale_y(ed.NLAT) * zoom;
	    tmp_y = tmp_y - gap_y;

	    if ((tmp_y >= 0) && (tmp_x >= 0) && (tmp_y <= maph)) {
		while (((spati[i].xp.x * zoom * 0.5 - gap_x) <= mapw) &&
		       (i < spcnt)) {
		    if (!spati[i].fobj->plotted) {
			if (read_attrib(i)) {
			    prim = spati[i].fobj->primitive;
			    prior =
				obj[spati[i].fobj->obj_type -
				    1].fun(READ_PRIOR);
			    if (prior == j) {
				copy_points(i);
				draw_obj(spati[i].fobj->obj_type - 1);
				free(area_points);
				narepoints = 0;
				spati[i].fobj->plotted = 1;
			    }
			}
			for (k = 0; k < spati[i].fobj->nattr; k++) {
				attrib[spati[i].fobj->attr[k]] = 0;
		        }
		    }
		    i++;
		}
	    }
	}
    }
    for (k = 0; k < objcnt; k++) {
	feature_obj[k].plotted = 0;
    }

    chartmap = finish_map(display);
    XCopyArea(display, chartmap, win, gc, 0, 0, mapw, maph, 0, 0);
    return 0;
}

int do_spatial(void)
{
    int i, j, cnt = 0;
    
    spati = (struct spatial_point *) malloc(sizeof(struct spatial_point));

    for (i = 0; i < objcnt; i++) {
	for (j = 0; j < feature_obj[i].npoints[0]; j++) {
	    spati = (struct spatial_point *) realloc(spati, (cnt + 1) * sizeof(struct spatial_point));
	    spati[cnt].xp.x = scale_x(feature_obj[i].points[0][j].x);
	    spati[cnt].xp.y = scale_y(feature_obj[i].points[0][j].y);
	    spati[cnt].fobj = feature_obj + i;
	    cnt++;
	}
    }
    qs(spati, cnt);
    return cnt;

}

int icmp(const void *p1, const void *p2)
{
    int v1 = *(int *) p1;
    int v2 = *(int *) p2;
    return v1 - v2;
}

void swap(struct spatial_point v[], int i, int j)
{
    struct spatial_point tmp;
    tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
}

void qs(struct spatial_point v[], int n)
{
    int i, last;

    if (n <= 1)
	return;
    swap(v, 0, rand() % n);
    last = 0;
    for (i = 0; i < n; i++) {
	if (v[i].xp.y < v[0].xp.y) {
	    swap(v, ++last, i);
	} else if ((v[i].xp.y == v[0].xp.y) && (v[i].xp.x < v[0].xp.x)) {
	    swap(v, ++last, i);
	}
    }
    swap(v, 0, last);
    qs(v, last);
    qs(v + last + 1, n - last - 1);
}

int read_attrib(int i)
{
    int tmp_attr_nro = 0, j;
    int k;
#include "attrib_type.h"

    for (j = 0; j < spati[i].fobj->nattr; j++) {
	tmp_attr_nro = spati[i].fobj->attr[j];
	switch (attrib_type[tmp_attr_nro]) {
	case 1:
	    attrib[tmp_attr_nro] = atoi(spati[i].fobj->attrval[j]);
	    break;
	case 2:
	    attrib[tmp_attr_nro] = atof(spati[i].fobj->attrval[j]);
	    break;
	case 3:
	    attrib[tmp_attr_nro] = (int) spati[i].fobj->attrval[j];
	    break;
	}
    }
    if ((attrib[SCAMIN]) && (attrib[SCAMIN] < (int) zoom_real)) {
	for (k = 0; k < spati[i].fobj->nattr; k++) {
	    attrib[spati[i].fobj->attr[k]] = 0;
	}
	return 0;
    } else {
	return 1;
    }
}

int copy_points(int i)
{
    register int j, tmp_x = 0, tmp_y = 0;
    int bot_lat_tmp;

    area_points = (XPoint *) malloc(sizeof(XPoint) *
				    spati[i].fobj->npoints[0] + 1);

    for (j = 0; j < spati[i].fobj->npoints[0]; j++) {
	if ((scale_y(spati[i].fobj->points[0][j].y) * zoom - gap_y) >= 0);
	break;
    }				//TODO binary search or some else

    bot_lat_tmp = bot_lat * zoom;

    for (; j < spati[i].fobj->npoints[0]; j++) {

	tmp_x =
	    scale_x(spati[i].fobj->points[0][j].x) * zoom * 0.5 - gap_x;

	tmp_y = scale_y(spati[i].fobj->points[0][j].y) * zoom;
	tmp_y = -tmp_y + bot_lat_tmp;
	tmp_y = tmp_y - gap_y;
//      if ((tmp_x >= 0) && (tmp_x <= mapw)) {
	area_points[narepoints].x = tmp_x;
	area_points[narepoints].y = tmp_y;
	narepoints++;
//      if(tmp_y > maph){
//              return 0;
//      }
    }

    return 0;
}
