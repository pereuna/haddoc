#include <X11/Xlib.h>
#include <X11/X.h>
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include <objst.h>
#include "attr.h"

#define scale_x(a) (int)((a) - (ed.WLON))
#define scale_y(a) (int)((a) - (ed.SLAT))

struct _obj {
	        int (*fun) (int read_prior);
};
	
extern int objcnt;
extern int prim;
extern int attrib[ATTRCNT];
extern struct _obj obj[504];
