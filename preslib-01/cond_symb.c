#include <X11/Xlib.h>
#include <X11/Xcms.h>
#include <stdio.h>
#include "color_names.h"
#include "symbols.h"
#include "glob.h"
enum FTYP { AREA = 3, LINE = 2, POINT = 1 };
int floating_symbol;

int CS__SEABED01(void);

int CS__RESTRN01(void)
{
    return 0;
}
int CS__DEPARE01(void)
{
    if (attrib[DRVAL1] && attrib[DRVAL2]) {
	CS__SEABED01();
	return 0;
    }
    if (!attrib[DRVAL2]) {
	attrib[DRVAL2] = attrib[DRVAL1] + 0.01;
    }
    CS__SEABED01();
    return 0;
}

int CS__SEABED01(void)
{
    XcmsColor *color;

    color = DEPIT;

    if ((attrib[DRVAL1] >= 0) && (attrib[DRVAL2] > 0)) {
	color = DEPVS;
    }
    if ((attrib[DRVAL1] >= safety_contour) &&
	(attrib[DRVAL2] > safety_contour)) {
	color = DEPDW;
    }
    AC(color);
    return 0;
}

int CS__DEPCNT02(void)
{
    int safe = 0;
    
    if ((obj_type == 42) && (prim == LINE)) {	//DEPARE=42 => 42-1=41
	if (attrib[DRVAL1] <= safety_contour) {
	    if (attrib[DRVAL2] >= safety_contour) {
	//	 safe = 1;
	    }
	}

    }
    if ((obj_type == 42)||(obj_type==46)){	//DEPARE=42 => 42-1=41
	if (attrib[DRVAL1] < safety_contour) {
//	     safe = 1;
	}

    }

    if (attrib[VALDCO] == safety_contour) {
	safe = 1;
    }


    if (attrib[QUAPOS]) {
	switch (attrib[QUAPOS]) {
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	    if (safe) {
		//LS(DASH, 10, DEPSC);
		return 8;
	    } else {
		//LS(DASH, 1, DEPCN);
		return 8;
	    }
	default:
	    break;

	}
    }

    if (safe) {
	LS(SOLD, 3, DEPSC);
	return 8;
    } else {
	LS(SOLD, 1, DEPCN);
	return 8;
    }

    return 0;
}
int CS__QUAPOS01(void)
{
    return 0;
}
int CS__LIGHTS04(void)
{
    return 0;
}
int CS__OBSTRN04(void)
{
    return 0;
}
int CS__RESARE02(void)
{
    return 0;
}
int CS__SLCONS03(void)
{
    return 0;
}
int CS__SOUNDG02(void)
{
    return 0;
}
int CS__TOPMAR01(void)
{

    if (!attrib[TOPSHP]) {
	SY__QUESMRK1(0);
	return 0;
    }
    if (floating_symbol) {
	switch (attrib[TOPSHP]) {
	case 1:
	    SY__TOPMAR02(0);
	    break;
	case 2:
	    SY__TOPMAR04(0);
	    break;
	case 3:
	    SY__TOPMAR10(0);
	    break;
	case 4:
	    SY__TOPMAR12(0);
	    break;
	case 5:
	    SY__TOPMAR13(0);
	    break;
	case 6:
	    SY__TOPMAR14(0);
	    break;
	case 7:
	    SY__TOPMAR65(0);
	    break;
	case 8:
	    SY__TOPMAR17(0);
	    break;
	case 9:
	    SY__TOPMAR16(0);
	    break;
	case 10:
	    SY__TOPMAR08(0);
	    break;
	case 11:
	    SY__TOPMAR07(0);
	    break;
	case 12:
	    SY__TOPMAR14(0);
	    break;
	case 13:
	    SY__TOPMAR05(0);
	    break;
	case 14:
	    SY__TOPMAR06(0);
	    break;
	case 17:
	    SY__TMARDEF2(0);
	    break;
	case 18:
	    SY__TOPMAR10(0);
	    break;
	case 19:
	    SY__TOPMAR13(0);
	    break;
	case 20:
	    SY__TOPMAR14(0);
	    break;
	case 21:
	    SY__TOPMAR13(0);
	    break;
	case 22:
	    SY__TOPMAR14(0);
	    break;
	case 23:
	    SY__TOPMAR14(0);
	    break;
	case 24:
	    SY__TOPMAR02(0);
	    break;
	case 25:
	    SY__TOPMAR04(0);
	    break;
	case 26:
	    SY__TOPMAR10(0);
	    break;
	case 27:
	    SY__TOPMAR17(0);
	    break;
	case 28:
	    SY__TOPMAR18(0);
	    break;
	case 29:
	    SY__TOPMAR02(0);
	    break;
	case 30:
	    SY__TOPMAR17(0);
	    break;
	case 31:
	    SY__TOPMAR14(0);
	    break;
	case 32:
	    SY__TOPMAR10(0);
	    break;
	case 33:
	    SY__TMARDEF2(0);
	    break;
	default:
	    SY__TMARDEF2(0);
	    break;
	}
    } else {
	switch (attrib[TOPSHP]) {
	case 1:
	    SY__TOPMAR02(0);
	    break;
	case 2:
	    SY__TOPMAR04(0);
	    break;
	case 3:
	    SY__TOPMAR10(0);
	    break;
	case 4:
	    SY__TOPMAR12(0);
	    break;
	case 5:
	    SY__TOPMAR13(0);
	    break;
	case 6:
	    SY__TOPMAR14(0);
	    break;
	case 7:
	    SY__TOPMAR65(0);
	    break;
	case 8:
	    SY__TOPMAR17(0);
	    break;
	case 9:
	    SY__TOPMAR16(0);
	    break;
	case 10:
	    SY__TOPMAR08(0);
	    break;
	case 11:
	    SY__TOPMAR07(0);
	    break;
	case 12:
	    SY__TOPMAR14(0);
	    break;
	case 13:
	    SY__TOPMAR05(0);
	    break;
	case 14:
	    SY__TOPMAR06(0);
	    break;
	case 17:
	    SY__TMARDEF2(0);
	    break;
	case 18:
	    SY__TOPMAR10(0);
	    break;
	case 19:
	    SY__TOPMAR13(0);
	    break;
	case 20:
	    SY__TOPMAR14(0);
	    break;
	case 21:
	    SY__TOPMAR13(0);
	    break;
	case 22:
	    SY__TOPMAR14(0);
	    break;
	case 23:
	    SY__TOPMAR14(0);
	    break;
	case 24:
	    SY__TOPMAR02(0);
	    break;
	case 25:
	    SY__TOPMAR04(0);
	    break;
	case 26:
	    SY__TOPMAR10(0);
	    break;
	case 27:
	    SY__TOPMAR17(0);
	    break;
	case 28:
	    SY__TOPMAR18(0);
	    break;
	case 29:
	    SY__TOPMAR02(0);
	    break;
	case 30:
	    SY__TOPMAR17(0);
	    break;
	case 31:
	    SY__TOPMAR14(0);
	    break;
	case 32:
	    SY__TOPMAR10(0);
	    break;
	case 33:
	    SY__TMARDEF2(0);
	    break;
	default:
	    SY__TMARDEF1(0);
	    break;
	}
    }


    return 0;
}
int CS__WRECKS02(void)
{
    return 0;
}
int CS__DATCVR01(void)
{
    return 0;
}
