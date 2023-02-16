#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xcms.h>
#include "attr.h"

/* vector symbol language
* SP colour - single letter
* ST transparency 1/4 steps (only affects the polycon fill FP inst.)
* SW pen width in 0.3 mm units
* PU pen up to coord x,y...x,y
* PD pen down to coord x,y...x,y
* CI circle, radius
* AA x,y,arc angle
* PM polycon mode
*      PM 0 -> enter to pm_mode
*      PM 1 -> subpolycon
*      PM 2 -> exit pm_mode
* EP outlines polycon
* FP fills polycon
* SC call another symbol definition
*/

#define COORD_UNITS 0.01
#define PEN_UNITS   0.3
#define COORD_RANGE 32767

/*line/pattern/symbol module  types  */
#define LS_MOD 28
#define PT_MOD 48
#define SY_MOD 32



extern int npoints;
extern XPoint points[256];
extern Display *display;
extern Colormap cmap;
extern Window win;
extern GC gc;
extern Pixmap pattern_win;
extern int s_num;

extern float coord_res;
extern float pen_res;

extern int color_theme;
extern int *attr;
extern int attrsize;
extern short obj_place_x;
extern short obj_place_y;
extern int obj_type;
extern int prior;
extern int overradar;
extern int lookupset;
extern int pm_mode;
extern int attrib[ATTRCNT];
extern int prim;
extern int safety_contour;

/*  Name of the addressed Look Up Table Set */
enum TNAM { PLAIN_BOUNDARIES, SYMBOLIZED_BOUNDARIES, SIMPLIFIED,
	PAPER_CHART, LINES };
/* Pattern definitions */
enum p { V, R, STG, LIN, CON, SCL };

extern int LUCM;
/*
'SOLD'  (_________)  
'DASH'  (- - - - -) dash: 3.6 mm; space: 1.8 mm  
'DOTT'  (.........) dott: 0.6 mm; space: 1.2 mm  
*/
enum PSTYLE { SOLD, DASH, DOTT };

#define DISPLAYBASE	// assigns the object to the Display Base
#define STANDARD	// assigns the object to the Standard Display
#define OTHER		// assigns the object to Other Information
#define MARINERSSTANDARD// assigns the object to Standard Display,
			// or which ever category the 
#define MARINERSOTHER	// mariner assigns them to
extern int safety_contour;

void init_pattern(void);
void create_pattern(void);
int alloc_colors(Display *display, Colormap cmap);
void calculate_cg(void);

void PU(int i, ...);
void PD(int i, ...);
void EP(void);
void FP(void);
void SC(void);
void CI(int r);
void SW(int w);
void SP(XcmsColor a);
void ST(int a);
void PM(int i);

void LS(int type, int toka, XcmsColor * c);
void AC(XcmsColor * c);
void AC_T(XcmsColor * c, int t);
void CS(int i, ...);

//S-52 IHO ECDIS RESENTATION LIBRARY USERS' MANUAL  page 40.

void TX(char *string, int hjust, int vjust, int space, char *chars, int xoffs, int yoffs, XcmsColor * colur, int displ);

void TE(const char *format, ...);
//	int hjust,
//	int vjust,
//	int space,
//	char *chars, int xoffs, int yoffs, XcmsColor * colur, int displ);
