#include <stdio.h>
#include "glob.h"
#include "color_names.h"
#include "symbols.h"

enum FTYP { A = 3, L = 2, P = 1 };

int ADMARE(int read_prior)
{
    if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	LS(DASH, 2, CHGRF);
    }

    return 0;
}
int AIRARE(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__AIRARE02(0);
    }

    else if (prim == A && attrib[CONVIS] == 1) {
	prior = 2;
	if (read_prior)
	    return prior;
	AC(LANDA);
	PT__AIRARE02();
	LS(SOLD, 1, CHBLK);
    } else if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	PT__AIRARE02();
	LS(SOLD, 1, LANDF);
    }

    return 0;
}
int ACHBRT(int read_prior)
{
    if (prim == P) {
	prior = 5;
	if (read_prior)
	    return prior;
	SY__ACHBRT07(0);
	TE("No%s", "OBJNAM", 3, 1, 2, "15110", 1, 0, CHBLK, 29);
    }

    else if (prim == A) {
	prior = 5;
	if (read_prior)
	    return prior;
	SY__ACHBRT07(0);
	TE("No%s", "OBJNAM", 3, 1, 2, "15110", 1, 0, CHBLK, 29);
	LS(DASH, 2, CHMGF);
    }

    return 0;
}
int ACHARE(int read_prior)
{
    if (prim == P && attrib[CATOBS] == 9) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__ACHARE02(0);
    } else if (prim == P) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__ACHARE02(0);
    }

    else if (prim == A && attrib[CATACH] == 8) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__ACHARE02(0);
	LS(DASH, 2, CHMGF);
	CS__RESTRN01();
    } else if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__ACHARE51(0);
	LS__ACHARE51();
	CS__RESTRN01();
    }

    return 0;
}
int BCNCAR(int read_prior)
{
    if (prim == P && attrib[BCNSHP] == 7) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNGEN01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 5) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNGEN01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 4) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNLTC01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNTOW01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 1) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNSTK02(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNGEN03(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    }

    return 0;
}
int BCNISD(int read_prior)
{
    if (prim == P && attrib[BCNSHP] == 7) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNGEN01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 5) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNGEN01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 4) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNLTC01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNTOW01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 1) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNSTK02(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNGEN03(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    }

    return 0;
}
int BCNLAT(int read_prior)
{
    if (prim == P && attrib[BCNSHP] == 6 && attrib[CONVIS] == 1) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__CAIRNS11(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 2 && attrib[CATLAM] == 2) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__PRICKE04(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 2 && attrib[CATLAM] == 1) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__PRICKE03(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    }

    else if (prim == P && attrib[BCNSHP] == 7) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNGEN01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 6) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__CAIRNS01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 5) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNGEN01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 4) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNLTC01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNTOW01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 1) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNSTK02(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNGEN03(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    }
    return 0;
}
int BCNSAW(int read_prior)
{
    if (prim == P && attrib[BCNSHP] == 7) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNGEN01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 5) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNGEN01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 4) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNLTC01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNTOW01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 1) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNSTK02(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNGEN03(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    }

    return 0;
}
int BCNSPP(int read_prior)
{
    if (prim == P && attrib[BCNSHP] == 7) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNGEN01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 6) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__CAIRNS01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 5) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNGEN01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 4) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNLTC01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNTOW01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 1) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNSTK02(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[CATSPM] == 44) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNGEN01(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -2, CHBLK, 21);
    } else if (prim == P && attrib[CATSPM] == 18) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__NOTBRD11(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BCNSHP] == 6 && attrib[CONVIS] == 1) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__CAIRNS11(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BCNGEN03(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    }

    return 0;
}
int BERTHS(int read_prior)
{
    if (prim == P) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__BRTHNO01(0);
	TE("No%s", "OBJNAM", 3, 1, 2, "15110", 1, 0, CHBLK, 29);
    }

    else if (prim == L) {
	prior = 5;
	if (read_prior)
	    return prior;
	LS(SOLD, 3, CHGRD);
	SY__BRTHNO01(0);
	TE("No%s", "OBJNAM", 1, 2, 2, "15110", 0, 0, CHBLK, 29);
    } else if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__BRTHNO01(0);
	TE("No%s", "OBJNAM", 3, 1, 2, "15110", 1, 0, CHBLK, 29);
    }

    return 0;
}
int BRIDGE(int read_prior)
{

    if (prim == L && attrib[CATBRG] == 8) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(SOLD, 5, CHGRD);
	SY__BRIDGE01(0);
	TE("clrcl%4.1lf", "VERCCL", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
	TE("clrop%4.1lf", "VERCOP", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
    } else if (prim == L && attrib[CATBRG] == 7) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(SOLD, 5, CHGRD);
	SY__BRIDGE01(0);
	TE("clrcl%4.1lf", "VERCCL", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
	TE("clrop%4.1lf", "VERCOP", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
    } else if (prim == L && attrib[CATBRG] == 5) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(SOLD, 5, CHGRD);
	SY__BRIDGE01(0);
	TE("clrcl%4.1lf", "VERCCL", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
	TE("clrop%4.1lf", "VERCOP", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
    } else if (prim == L && attrib[CATBRG] == 4) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(SOLD, 5, CHGRD);
	SY__BRIDGE01(0);
	TE("clrcl%4.1lf", "VERCCL", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
	TE("clrop%4.1lf", "VERCOP", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
    } else if (prim == L && attrib[CATBRG] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(SOLD, 5, CHGRD);
	SY__BRIDGE01(0);
	TE("clrcl%4.1lf", "VERCCL", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
	TE("clrop%4.1lf", "VERCOP", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
    } else if (prim == L && attrib[CATBRG] == 2) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(SOLD, 5, CHGRD);
	SY__BRIDGE01(0);
	TE("clrcl%4.1lf", "VERCCL", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
	TE("clrop%4.1lf", "VERCOP", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
    } else if (prim == L) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(SOLD, 5, CHGRD);
	//TX(OBJNAM, 3, 1, 2, "15110", 1, 0, CHBLK, 21);
	TE("clr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
    } else if (prim == A && attrib[CATBRG] == 8) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BRIDGE01(0);
	TE("clrcl%4.1lf", "VERCCL", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
	TE("clrop%4.1lf", "VERCOP", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
	LS(SOLD, 4, CHGRD);
    } else if (prim == A && attrib[CATBRG] == 7) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BRIDGE01(0);
	TE("clrcl%4.1lf", "VERCCL", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
	TE("clrop%4.1lf", "VERCOP", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
	LS(SOLD, 4, CHGRD);
    } else if (prim == A && attrib[CATBRG] == 5) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BRIDGE01(0);
	TE("clrcl%4.1lf", "VERCCL", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
	TE("clrop%4.1lf", "VERCOP", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
	LS(SOLD, 4, CHGRD);
    } else if (prim == A && attrib[CATBRG] == 4) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BRIDGE01(0);
	TE("clrcl%4.1lf", "VERCCL", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
	TE("clrop%4.1lf", "VERCOP", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
	LS(SOLD, 4, CHGRD);
    } else if (prim == A && attrib[CATBRG] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BRIDGE01(0);
	TE("clrcl%4.1lf", "VERCCL", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
	TE("clrop%4.1lf", "VERCOP", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
	LS(SOLD, 4, CHGRD);
    } else if (prim == A && attrib[CATBRG] == 2) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BRIDGE01(0);
	TE("clrcl%4.1lf", "VERCCL", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
	TE("clrop%4.1lf", "VERCOP", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
	LS(SOLD, 4, CHGRD);
    } else if (prim == A) {
	prior = 8;
	if (read_prior)
	    return prior;
	//TX(OBJNAM, 3, 1, 2, "15110", 1, 0, CHBLK, 21);
	TE("clr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
	LS(SOLD, 4, CHGRD);
    }

    return 0;
}
int BUISGL(int read_prior)
{
    if (prim == P && attrib[FUNCTN] == 35) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TNKCON02(0);
    } else if (prim == P && attrib[FUNCTN] == 33) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__POSGEN03(0);
    } else if (prim == P && attrib[FUNCTN] == 27) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__BUIREL05(0);
    } else if (prim == P && attrib[FUNCTN] == 26) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__BUIREL05(0);
    } else if (prim == P && attrib[FUNCTN] == 25) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__BUIREL04(0);
    } else if (prim == P && attrib[FUNCTN] == 24) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__BUIREL04(0);
    } else if (prim == P && attrib[FUNCTN] == 23) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__BUIREL04(0);
    } else if (prim == P && attrib[FUNCTN] == 22) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__BUIREL04(0);
    } else if (prim == P && attrib[FUNCTN] == 21) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__BUIREL01(0);
    } else if (prim == P && attrib[FUNCTN] == 20) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__BUIREL01(0);
    } else if (prim == P && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__BUISGL11(0);
    } else if (prim == P && attrib[FUNCTN] == 33 && OBJNAM) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__POSGEN03(0);
	//TX(OBJNAM, 3, 2, 2, "15110", 1, 0, CHBLK, 26);
    } else if (prim == P && attrib[FUNCTN] == 35 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__TNKCON12(0);
    } else if (prim == P && attrib[FUNCTN] == 33 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__POSGEN03(0);
    } else if (prim == P && attrib[FUNCTN] == 27 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__BUIREL15(0);
    } else if (prim == P && attrib[FUNCTN] == 26 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__BUIREL15(0);
    } else if (prim == P && attrib[FUNCTN] == 25 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__BUIREL14(0);
    } else if (prim == P && attrib[FUNCTN] == 24 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__BUIREL14(0);
    } else if (prim == P && attrib[FUNCTN] == 23 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__BUIREL14(0);
    } else if (prim == P && attrib[FUNCTN] == 22 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__BUIREL14(0);
    } else if (prim == P && attrib[FUNCTN] == 21 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__BUIREL13(0);
    } else if (prim == P && attrib[FUNCTN] == 20 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__BUIREL13(0);
    } else if (prim == P && attrib[FUNCTN] == 33 && attrib[CONVIS] == 1
	       && OBJNAM) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__POSGEN03(0);
	//TX(OBJNAM, 3, 2, 2, "15110", 1, 0, CHBLK, 26);
    } else if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__BUISGL01(0);
    }

    else if (prim == A && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 1, CHBLK);
    } else if (prim == A && attrib[FUNCTN] == 33) {
	prior = 4;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	//TX(OBJNAM, 1, 2, 2, "15110", 0, 0, CHBLK, 26);
	LS(SOLD, 1, LANDF);
    } else if (prim == A && attrib[FUNCTN] == 33 && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	//TX(OBJNAM, 1, 2, 2, "15110", 0, 0, CHBLK, 26);
	LS(SOLD, 1, CHBLK);
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 1, LANDF);
    }

    return 0;
}
int BUAARE(int read_prior)
{
    if (prim == P) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__BUAARE02(0);
	//TX(OBJNAM, 3, 2, 2, "15110", 1, 0, CHBLK, 26);
    }

    else if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	//TX(OBJNAM, 1, 2, 3, "15110", 0, 0, CHBLK, 26);
	LS(SOLD, 1, LANDF);
    }

    return 0;
}
int BOYCAR(int read_prior)
{
    if (prim == P && attrib[BOYSHP] == 8) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSPR01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 7) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSUP01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -2, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 6) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYBAR01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 5) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSPR01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 4) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYPIL01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSPH01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 2) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYCAN01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 1) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYCON01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYGEN03(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    }

    return 0;
}
int BOYINB(int read_prior)
{
    if (prim == P) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYINB01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    }

    return 0;
}
int BOYISD(int read_prior)
{
    if (prim == P && attrib[BOYSHP] == 8) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSPR01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 7) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSUP01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -2, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 6) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYBAR01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 5) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSPR01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 4) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYPIL01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSPH01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 2) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYCAN01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 1) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYCON01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYGEN03(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    }

    return 0;
}
int BOYLAT(int read_prior)
{
    if (prim == P && attrib[BOYSHP] == 8) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSPR01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 7) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSUP01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -2, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 6) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYBAR01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 5) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSPR01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 4) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYPIL01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSPH01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 2) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYCAN01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 1) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYCON01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYGEN03(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    }

    return 0;
}
int BOYSAW(int read_prior)
{
    if (prim == P && attrib[BOYSHP] == 8) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSPR01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 7) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSUP01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -2, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 6) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYBAR01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 5) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSPR01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 4) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYPIL01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSPH01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYGEN03(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    }

    return 0;
}
int BOYSPP(int read_prior)
{
    if (prim == P && attrib[BOYSHP] == 8) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSPR01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -2, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 7) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSUP01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -2, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 6) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYBAR01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 5) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSPR01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 4) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYPIL01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSPH01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 2) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYCAN01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[BOYSHP] == 1) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYCON01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[CATSPM] == 15) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSUP03(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -2, -1, CHBLK, 21);
    } else if (prim == P && attrib[CATSPM] == 9) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYSUP01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -2, -1, CHBLK, 21);
    } else if (prim == P) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYGEN03(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    }

    return 0;
}
int CBLARE(int read_prior)
{
    if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__CBLARE51(0);
	LS__CBLARE51();
	CS__RESTRN01();
    }

    return 0;
}
int CBLOHD(int read_prior)
{
    if (prim == L && VERCLR) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(DASH, 4, CHGRD);
	TE("sfclr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
    } else if (prim == L && VERCSA) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(DASH, 4, CHGRD);
	TE("sfclr%4.1lf", "VERCSA", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
    } else if (prim == L && attrib[CONRAD] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(DASH, 4, CHGRD);
	SY__RACNSP01(0);
    } else if (prim == L && attrib[CONRAD] == 1) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(DASH, 4, CHGRD);
	SY__RACNSP01(0);
    } else if (prim == L && attrib[CONRAD] == 3 && VERCLR) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(DASH, 4, CHGRD);
	SY__RACNSP01(0);
	TE("clr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
    } else if (prim == L && attrib[CONRAD] == 1 && VERCLR) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(DASH, 4, CHGRD);
	SY__RACNSP01(0);
	TE("clr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
    } else if (prim == L && attrib[CONRAD] == 3 && VERCSA) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(DASH, 4, CHGRD);
	SY__RACNSP01(0);
	TE("sfclr%4.1lf", "VERCSA", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
    } else if (prim == L && attrib[CONRAD] == 1 && VERCSA) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(DASH, 4, CHGRD);
	SY__RACNSP01(0);
	TE("sfclr%4.1lf", "VERCSA", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
    } else if (prim == L) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(DASH, 4, CHGRD);
    }
    return 0;
}
int CBLSUB(int read_prior)
{
    if (prim == L && attrib[CATCBL] == 6) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS(DASH, 1, CHMGD);
    } else if (prim == L) {
	prior = 3;
	if (read_prior)
	    return prior;
	LS__CBLSUB06();
    }
    return 0;
}
int CANALS(int read_prior)
{
    if (prim == L) {
	prior = 2;
	if (read_prior)
	    return prior;
	LS(SOLD, 1, CHBLK);
    } else if (prim == A && CONDTN) {
	prior = 2;
	if (read_prior)
	    return prior;
	AC(DEPVS);
	LS(DASH, 1, CHBLK);
    } else if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	AC(DEPVS);
	LS(SOLD, 1, CHBLK);
    }

    return 0;
}
int CANBNK(int read_prior)
{
    	//prohibited
	return 0;
}
int CTSARE(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CHINFO07(0);
    }

    else if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__INFARE51(0);
	LS__CTYARE51();
    }

    return 0;
}
int CAUSWY(int read_prior)
{
    if (prim == L && attrib[WATLEV] == 4) {
	prior = 5;
	if (read_prior)
	    return prior;
	LS(DASH, 3, LANDF);
    } else if (prim == L) {
	prior = 5;
	if (read_prior)
	    return prior;
	LS(SOLD, 3, LANDF);
    } else if (prim == A && attrib[WATLEV] == 4) {
	prior = 5;
	if (read_prior)
	    return prior;
	AC(DEPIT);
	LS(DASH, 2, CSTLN);
    } else if (prim == A) {
	prior = 5;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 1, CSTLN);
    }

    return 0;
}
int CTNARE(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CHINFO06(0);
    }

    else if (prim == A) {
	prior = 6;
	if (read_prior)
	    return prior;
	PT__TSSJCT02();
	SY__CTNARE51(0);
	//TX(INFORM, 1, 1, 2, "15110", 0, -2, CHBLK, 24);
	CS__RESTRN01();
    } else if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__CTNARE51(0);
	LS__CTNARE51();
    }

    return 0;
}
int CHKPNT(int read_prior)
{
    if (prim == P) {
	prior = 0;
	if (read_prior)
	    return prior;
    }

    else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__POSGEN04(0);
    }

    return 0;
}
int CGUSTA(int read_prior)
{
    if (prim == P) {
	prior = 7;
	if (read_prior)
	    return prior;
	SY__CGUSTA02(0);
    }

    return 0;
}
int COALNE(int read_prior)
{
    if (prim == L && attrib[CATCOA] == 10) {
	prior = 7;
	if (read_prior)
	    return prior;
	LS(DASH, 1, CSTLN);
    } else if (prim == L && attrib[CATCOA] == 8) {
	prior = 7;
	if (read_prior)
	    return prior;
	LS(DASH, 1, CSTLN);
    } else if (prim == L && attrib[CATCOA] == 7) {
	prior = 7;
	if (read_prior)
	    return prior;
	LS(DASH, 1, CSTLN);
    } else if (prim == L && attrib[CATCOA] == 6) {
	prior = 7;
	if (read_prior)
	    return prior;
	LS(DASH, 1, CSTLN);
    } else if (prim == L) {
	prior = 7;
	if (read_prior)
	    return prior;
	CS__QUAPOS01();
    }
    return 0;
}
int CONZNE(int read_prior)
{
    if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	LS(DASH, 2, CHGRF);
    }

    return 0;
}
int COSARE(int read_prior)
{
    if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	LS(DASH, 2, CHGRF);
    }

    return 0;
}
int CTRPNT(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__POSGEN04(0);
    }

    return 0;
}
int CONVYR(int read_prior)
{
    if (prim == L && attrib[CONRAD] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(DASH, 4, CHGRD);
	SY__RACNSP01(0);
	TE("clr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
    } else if (prim == L && attrib[CONRAD] == 1) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(DASH, 4, CHGRD);
	SY__RACNSP01(0);
	TE("clr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
    } else if (prim == L && attrib[CATCON] == 2) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(SOLD, 3, CHGRD);
	TE("clr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
    } else if (prim == L && attrib[CATCON] == 1) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(DASH, 4, CHGRD);
	TE("clr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
    } else if (prim == L && attrib[CATCON] == 2 && attrib[CONRAD] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(SOLD, 3, CHGRD);
	SY__RACNSP01(0);
	TE("clr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
    } else if (prim == L && attrib[CATCON] == 2 && attrib[CONRAD] == 1) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(SOLD, 3, CHGRD);
	SY__RACNSP01(0);
	TE("clr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
    } else if (prim == L && attrib[CATCON] == 1 && attrib[CONRAD] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(DASH, 4, CHGRD);
	SY__RACNSP01(0);
	TE("clr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
    } else if (prim == L && attrib[CATCON] == 1 && attrib[CONRAD] == 1) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(DASH, 4, CHGRD);
	SY__RACNSP01(0);
	TE("clr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
    } else if (prim == L) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(DASH, 4, CHGRD);
	TE("clr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
    } else if (prim == A && attrib[CONRAD] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__RACNSP01(0);
	TE("clr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
	LS(SOLD, 3, CHGRD);
    } else if (prim == A && attrib[CONRAD] == 1) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__RACNSP01(0);
	TE("clr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
	LS(SOLD, 3, CHGRD);
    } else if (prim == A) {
	prior = 8;
	if (read_prior)
	    return prior;
	TE("clr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, 0, CHBLK, 11);
	LS(SOLD, 3, CHGRD);
    }

    return 0;
}
int CRANES(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CRANES01(0);
    }

    else if (prim == A && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 1, CHBLK);
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 1, LANDF);
    }

    return 0;
}
int CURENT(int read_prior)
{
    if (prim == P && attrib[CAT_TS] == 3 && attrib[ORIENT]) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CURENT01(attrib[ORIENT]);
	TE("%4.1lfkn", "CURVEL", 3, 1, 2, "15110", 1, -1, CHBLK, 31);
    } else if (prim == P && attrib[ORIENT]) {
	prior = 5;
	if (read_prior)
	    return prior;
	SY__CURENT01(attrib[ORIENT]);
    } else if (prim == P && attrib[ORIENT] && CURVEL) {
	prior = 5;
	if (read_prior)
	    return prior;
	SY__CURENT01(attrib[ORIENT]);
	TE("%4.1lfkn", "CURVEL", 3, 1, 2, "15110", 1, -1, CHBLK, 31);
    } else if (prim == P) {
	prior = 0;
	if (read_prior)
	    return prior;
    }

    else if (prim == A && attrib[CAT_TS] == 3 && attrib[ORIENT]) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CURENT01(attrib[ORIENT]);
	TE("%4.1lfkn", "CURVEL", 3, 1, 2, "15110", 1, -1, CHBLK, 31);
    }

    return 0;
}
int CUSZNE(int read_prior)
{
    if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	LS(DASH, 1, CHGRF);
    }

    return 0;
}
int DAMCON(int read_prior)
{
    if (prim == P && attrib[CATDAM] == 3) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CHINFO06(0);
    } else if (prim == P) {
	prior = 0;
	if (read_prior)
	    return prior;

    }

    else if (prim == L && attrib[CATDAM] == 3) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS(SOLD, 2, CSTLN);
    } else if (prim == L) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS(SOLD, 4, LANDF);
    } else if (prim == A && attrib[CATDAM] == 3) {
	prior = 6;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 2, CSTLN);
    } else if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 1, LANDF);
    }

    return 0;
}
int DAYMAR(int read_prior)
{
    if (prim == P && attrib[TOPSHP] == 25) {
	prior = 7;
	if (read_prior)
	    return prior;
	SY__DAYTRI25(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[TOPSHP] == 24) {
	prior = 7;
	if (read_prior)
	    return prior;
	SY__DAYTRI21(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[TOPSHP] == 21) {
	prior = 7;
	if (read_prior)
	    return prior;
	SY__DAYSQR21(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[TOPSHP] == 20) {
	prior = 7;
	if (read_prior)
	    return prior;
	SY__DAYSQR21(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P && attrib[TOPSHP] == 19) {
	prior = 7;
	if (read_prior)
	    return prior;
	SY__DAYSQR21(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    } else if (prim == P) {
	prior = 7;
	if (read_prior)
	    return prior;
	SY__DAYSQR21(0);
	TE("bn%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    }

    return 0;
}
int DWRTCL(int read_prior)
{
    if (prim == L && attrib[TRAFIC] == 4) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__DWRTCL05();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[TRAFIC] == 3) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__DWRTCL07();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[TRAFIC] == 2) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__DWRTCL07();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[TRAFIC] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__DWRTCL07();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[CATTRK] == 2 && attrib[TRAFIC] == 4) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__DWRTCL05();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[CATTRK] == 2 && attrib[TRAFIC] == 3) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__DWRTCL07();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[CATTRK] == 2 && attrib[TRAFIC] == 2) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__DWRTCL07();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[CATTRK] == 2 && attrib[TRAFIC] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__DWRTCL07();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[CATTRK] == 1 && attrib[TRAFIC] == 4) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__DWRTCL06();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[CATTRK] == 1 && attrib[TRAFIC] == 3) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__DWRTCL08();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[CATTRK] == 1 && attrib[TRAFIC] == 2) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__DWRTCL08();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[CATTRK] == 1 && attrib[TRAFIC] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__DWRTCL08();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__DWLDEF01();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    }
    return 0;
}
int DWRTPT(int read_prior)
{
    if (prim == A && attrib[ORIENT] && attrib[TRAFIC] == 4) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__DWRUTE51(attrib[ORIENT]);
	SY__DWRTPT51(0);
	LS__DWRUTE51();
	CS__RESTRN01();
    } else if (prim == A && attrib[ORIENT] && attrib[TRAFIC] == 3) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TSSLPT51(attrib[ORIENT]);
	SY__DWRTPT51(0);
	LS__DWRUTE51();
	CS__RESTRN01();
    } else if (prim == A && attrib[ORIENT] && attrib[TRAFIC] == 2) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TSSLPT51(attrib[ORIENT]);
	SY__DWRTPT51(0);
	LS__DWRUTE51();
	CS__RESTRN01();
    } else if (prim == A && attrib[ORIENT] && attrib[TRAFIC] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TSSLPT51(attrib[ORIENT]);
	SY__DWRTPT51(0);
	LS__DWRUTE51();
	CS__RESTRN01();
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TSLDEF51(0);
	SY__DWRTPT51(0);
	LS__DWRUTE51();
	CS__RESTRN01();
    }

    return 0;
}
int DEPARE(int read_prior)
{
    if (prim == L) {
	prior = 8;//3;
	if (read_prior)
	    return prior;
	//printf("depare");
	CS__DEPCNT02();
    } else if (prim == A) {
	prior = 1;
	if (read_prior)
	    return prior;
	CS__DEPARE01();
    } else if (prim == A && attrib[DRVAL1] == '?' && attrib[DRVAL2] == '?') {
	prior = 1;
	if (read_prior)
	    return prior;
	AC(NODTA);
	PT__PRTSUR01();
	LS(SOLD, 2, CHGRD);
    } else if (prim == A) {
	prior = 1;
	if (read_prior)
	    return prior;
	CS__DEPARE01();
    }

    return 0;
}

int DEPCNT(int read_prior)
{
    if (prim == L) {
	prior = 8;//5;
	if (read_prior)
	    return prior;
	CS__DEPCNT02();
    } else if (prim == L) {
	prior = 8;//3;
	if (read_prior)
	    return prior;
	CS__DEPCNT02();
    }
    return 0;
}

int DISMAR(int read_prior)
{
    if (prim == P && attrib[CATDIS] == 1) {
	prior = 7;
	if (read_prior)
	    return prior;
	SY__DISMAR04(0);
	//TX(INFORM, 2, 1, 2, "15110", 2, 0, CHBLK, 21);
    } else if (prim == P) {
	prior = 7;
	if (read_prior)
	    return prior;
	SY__DISMAR03(0);
	//TX(INFORM, 2, 1, 2, "15110", 2, 0, CHBLK, 21);
    }

    return 0;
}
int DOCARE(int read_prior)
{
    if (prim == A && CONDTN) {
	prior = 2;
	if (read_prior)
	    return prior;
	AC(DEPVS);
	//TX(OBJNAM, 1, 2, 3, "15110", 0, 0, CHBLK, 26);
	LS(DASH, 1, CHBLK);
    } else if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	AC(DEPVS);
	//TX(OBJNAM, 1, 2, 3, "15110", 0, 0, CHBLK, 26);
	LS(SOLD, 1, CHBLK);
    }

    return 0;
}
int DRGARE(int read_prior)
{
    if (prim == A) {
	prior = 1;
	if (read_prior)
	    return prior;
	CS__DEPARE01();
    }

    return 0;
}
int DRYDOC(int read_prior)
{
    if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	AC(LANDA);
	LS(SOLD, 1, CSTLN);
    }

    return 0;
}
int DMPGRD(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CHINFO07(0);
    }

    else if (prim == A && attrib[CATDPG] == 5) {
	prior = 3;
	if (read_prior)
	    return prior;
	LS__NAVARE51();
	CS__RESTRN01();
    } else if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__INFARE51(0);
	LS__CTYARE51();
	CS__RESTRN01();
    }

    return 0;
}
int DYKCON(int read_prior)
{
    if (prim == L && attrib[CONRAD] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(SOLD, 2, CHBLK);
    } else if (prim == L) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(SOLD, 3, LANDF);
    } else if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 1, LANDF);
    }

    return 0;
}
int EXEZNE(int read_prior)
{
    if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	LS(DASH, 2, CHGRF);
    }

    return 0;
}
int FAIRWY(int read_prior)
{
    if (prim == A && attrib[ORIENT] && attrib[TRAFIC] == 4) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FAIRWY52(attrib[ORIENT]);
	LS__NAVARE51();
	CS__RESTRN01();
    } else if (prim == A && attrib[ORIENT] && attrib[TRAFIC] == 3) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FAIRWY51(attrib[ORIENT]);
	LS__NAVARE51();
	CS__RESTRN01();
    } else if (prim == A && attrib[ORIENT] && attrib[TRAFIC] == 2) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FAIRWY51(attrib[ORIENT]);
	LS__NAVARE51();
	CS__RESTRN01();
    } else if (prim == A && attrib[ORIENT] && attrib[TRAFIC] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FAIRWY51(attrib[ORIENT]);
	LS__NAVARE51();
	CS__RESTRN01();
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS__NAVARE51();
	CS__RESTRN01();
    }

    return 0;
}
int FNCLNE(int read_prior)
{
    if (prim == L && attrib[CONVIS] == 1) {
	prior = 3;
	if (read_prior)
	    return prior;
	LS(SOLD, 1, CHBLK);
    } else if (prim == L) {
	prior = 3;
	if (read_prior)
	    return prior;
	LS(SOLD, 1, LANDF);
    }
    return 0;
}
int FERYRT(int read_prior)
{
    if (prim == L && attrib[CATFRY] == 2) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS__FERYRT02();
    } else if (prim == L && attrib[CATFRY] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS__FERYRT01();
    } else if (prim == L) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS__FERYRT02();
    } else if (prim == A && attrib[CATFRY] == 2) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__FRYARE52(0);
	LS__NAVARE51();
    } else if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__FRYARE51(0);
	LS__NAVARE51();
    }

    return 0;
}
int FSHZNE(int read_prior)
{
    if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	LS(DASH, 2, CHGRF);
    }

    return 0;
}
int FSHFAC(int read_prior)
{
    if (prim == P && attrib[CATFIF] == 4) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FSHFAC02(0);
    } else if (prim == P && attrib[CATFIF] == 3) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FSHFAC02(0);
    } else if (prim == P && attrib[CATFIF] == 2) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FSHFAC02(0);
    } else if (prim == P && attrib[CATFIF] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FSHFAC03(0);
    } else if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FSHHAV01(0);
    }

    else if (prim == L && attrib[CATFIF] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS__FSHFAC02();
    } else if (prim == L) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(DASH, 2, CHGRD);
    } else if (prim == A && attrib[CATFIF] == 4) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FSHFAC02(0);
	LS__NAVARE51();
    } else if (prim == A && attrib[CATFIF] == 3) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FSHFAC02(0);
	LS__NAVARE51();
    } else if (prim == A && attrib[CATFIF] == 2) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FSHFAC02(0);
	LS__NAVARE51();
    } else if (prim == A && attrib[CATFIF] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FSHFAC03(0);
	LS__NAVARE51();
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FSHFAC02(0);
	LS__NAVARE51();
    }

    return 0;
}
int FSHGRD(int read_prior)
{
    if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__FSHGRD01(0);
	LS(DASH, 2, CHGRF);
    }

    return 0;
}
int FLODOC(int read_prior)
{
    if (prim == L) {
	prior = 5;
	if (read_prior)
	    return prior;
	LS(SOLD, 3, CSTLN);
    } else if (prim == A) {
	prior = 5;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 2, CSTLN);
    }

    return 0;
}
int FOGSIG(int read_prior)
{
    if (prim == P) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__FOGSIG01(0);
    }

    return 0;
}
int FORSTC(int read_prior)
{
    if (prim == P && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FORSTC11(0);
    } else if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FORSTC01(0);
    }

    else if (prim == L) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(SOLD, 3, LANDF);
    } else if (prim == A && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 1, CHBLK);
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 1, LANDF);
    }

    return 0;
}
int FRPARE(int read_prior)
{
    if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	LS(DASH, 2, CHGRF);
    }

    return 0;
}
int GATCON(int read_prior)
{
    if (prim == P && attrib[CATGAT] == 4) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__GATCON03(0);
    } else if (prim == P && attrib[CATGAT] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__GATCON04(0);
    } else if (prim == P && attrib[CATGAT] == 2) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__GATCON04(0);
    } else if (prim == P) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__GATCON04(0);
    }

    else if (prim == L && attrib[CATGAT] == 5) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(SOLD, 2, CSTLN);
    } else if (prim == L && attrib[CATGAT] == 4) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(SOLD, 2, CSTLN);
	SY__GATCON03(0);
    } else if (prim == L && attrib[CATGAT] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(SOLD, 2, CSTLN);
	SY__GATCON04(0);
    } else if (prim == L && attrib[CATGAT] == 2) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(SOLD, 2, CSTLN);
    } else if (prim == L) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(SOLD, 2, CSTLN);
    } else if (prim == A) {
	prior = 8;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 2, CSTLN);
    }

    return 0;
}
int GRIDRN(int read_prior)
{
    if (prim == P) {
	prior = 0;
	if (read_prior)
	    return prior;

    }

    else if (prim == A) {
	prior = 5;
	if (read_prior)
	    return prior;
	LS(DASH, 1, CHGRD);
    }

    return 0;
}
int HRBARE(int read_prior)
{
    if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	LS__NAVARE51();
    }

    return 0;
}
int HRBFAC(int read_prior)
{
    if (prim == P && attrib[CATHAF] == 5) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__SMCFAC02(0);
    } else if (prim == P && attrib[CATHAF] == 4) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__HRBFAC09(0);
    } else if (prim == P && attrib[CATHAF] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__ROLROL01(0);
    } else if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CHINFO07(0);
    }

    else if (prim == A && attrib[CATHAF] == 5) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__SMCFAC02(0);
    } else if (prim == A && attrib[CATHAF] == 4) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__HRBFAC09(0);
    } else if (prim == A && attrib[CATHAF] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__ROLROL01(0);
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CHINFO07(0);
    }

    return 0;
}
int HULKES(int read_prior)
{
    if (prim == P) {
	prior = 5;
	if (read_prior)
	    return prior;
	SY__HULKES01(0);
    }

    else if (prim == A) {
	prior = 5;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 2, CSTLN);
    }

    return 0;
}
int ICEARE(int read_prior)
{
    if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	AC(NODTA);
	PT__ICEARE04();
	LS(DASH, 1, CHGRD);
    }

    return 0;
}
int ICNARE(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CHINFO07(0);
    }

    else if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__INFARE51(0);
	LS__CTYARE51();
	CS__RESTRN01();
    }

    return 0;
}
int ISTZNE(int read_prior)
{
    if (prim == A) {
	prior = 5;
	if (read_prior)
	    return prior;
	SY__ITZARE51(0);
	LS__RESARE51();
	CS__RESTRN01();
    }

    return 0;
}
int LAKARE(int read_prior)
{
    if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	AC(DEPVS);
	LS(SOLD, 1, CHBLK);
    }

    return 0;
}
int LAKSHR(int read_prior)
{
    	//prohibited
    return 0;
}
int LNDARE(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__LNDARE01(0);
	CS__QUAPOS01();
    }

    else if (prim == L) {
	prior = 8;
	if (read_prior)
	    return prior;
	CS__QUAPOS01();
    } else if (prim == A) {
	prior = 1;
	if (read_prior)
	    return prior;
	AC(LANDA);
    }

    return 0;
}
int LNDELV(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__POSGEN04(0);
	//TX(ELEVAT, 3, 2, 2, "15110", 1, -1, CHBLK, 31);
    }

    else if (prim == L) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(SOLD, 1, LANDF);
    }
    return 0;
}
int LNDRGN(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__POSGEN04(0);
	//TX(OBJNAM, 1, 2, 2, "15110", 0, -1, CHBLK, 26);
    }

    else if (prim == A && attrib[CATLND] == 12) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__MARSHES1();
    } else if (prim == A && attrib[CATLND] == 2) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__MARSHES1();
    } else if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	//TX(OBJNAM, 1, 2, 3, "15110", 0, 0, CHBLK, 26);
    }

    return 0;
}
int LNDMRK(int read_prior)
{
    if (prim == P && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__POSGEN03(0);
    } else if (prim == P && attrib[CATLMK] == 20) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__POSGEN01(0);
    } else if (prim == P && attrib[CATLMK] == 19) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__WIMCON01(0);
    } else if (prim == P && attrib[CATLMK] == 18) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__WNDMIL02(0);
    } else if (prim == P && attrib[CATLMK] == 17) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TOWERS01(0);
    } else if (prim == P && attrib[CATLMK] == 16) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__RASCAN01(0);
    } else if (prim == P && attrib[CATLMK] == 15) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__DOMES001(0);
    } else if (prim == P && attrib[CATLMK] == 13) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__MONUMT02(0);
    } else if (prim == P && attrib[CATLMK] == 12) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__MONUMT02(0);
    } else if (prim == P && attrib[CATLMK] == 10) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__MONUMT02(0);
    } else if (prim == P && attrib[CATLMK] == 9) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__MONUMT02(0);
    } else if (prim == P && attrib[CATLMK] == 8) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__POSGEN03(0);
    } else if (prim == P && attrib[CATLMK] == 7) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__MSTCON04(0);
    } else if (prim == P && attrib[CATLMK] == 6) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FLASTK01(0);
    } else if (prim == P && attrib[CATLMK] == 5) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FLGSTF01(0);
    } else if (prim == P && attrib[CATLMK] == 4) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__DSHAER01(0);
    } else if (prim == P && attrib[CATLMK] == 3) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CHIMNY01(0);
    } else if (prim == P && attrib[CATLMK] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CAIRNS01(0);
    } else if (prim == P && attrib[CATLMK] == 20 && attrib[FUNCTN] == 20) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__BUIREL01(0);
    } else if (prim == P && attrib[CATLMK] == 20 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__POSGEN03(0);
    } else if (prim == P && attrib[CATLMK] == 19 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__WIMCON11(0);
    } else if (prim == P && attrib[CATLMK] == 18 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__WNDMIL12(0);
    } else if (prim == P && attrib[CATLMK] == 17 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__TOWERS03(0);
    } else if (prim == P && attrib[CATLMK] == 16 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RASCAN11(0);
    } else if (prim == P && attrib[CATLMK] == 15 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__DOMES011(0);
    } else if (prim == P && attrib[CATLMK] == 13 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__MONUMT12(0);
    } else if (prim == P && attrib[CATLMK] == 12 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__MONUMT12(0);
    } else if (prim == P && attrib[CATLMK] == 10 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__MONUMT12(0);
    } else if (prim == P && attrib[CATLMK] == 9 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__MONUMT12(0);
    } else if (prim == P && attrib[CATLMK] == 8 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__POSGEN03(0);
    } else if (prim == P && attrib[CATLMK] == 7 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__MSTCON14(0);
    } else if (prim == P && attrib[CATLMK] == 6 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__FLASTK11(0);
    } else if (prim == P && attrib[CATLMK] == 5 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__FLGSTF01(0);
    } else if (prim == P && attrib[CATLMK] == 4 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__DSHAER11(0);
    } else if (prim == P && attrib[CATLMK] == 3 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__CHIMNY11(0);
    } else if (prim == P && attrib[CATLMK] == 1 && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__CAIRNS11(0);
    } else if (prim == P && attrib[CATLMK] == 17 && attrib[FUNCTN] == 33) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TOWERS01(0);
	//TX(OBJNAM, 3, 2, 2, "15110", 1, -1, CHBLK, 26);
    } else if (prim == P && attrib[CATLMK] == 20 && attrib[FUNCTN] == 27
	       && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__BUIREL15(0);
    } else if (prim == P && attrib[CATLMK] == 20 && attrib[FUNCTN] == 26
	       && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__BUIREL15(0);
    } else if (prim == P && attrib[CATLMK] == 20 && attrib[FUNCTN] == 21
	       && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__BUIREL13(0);
    } else if (prim == P && attrib[CATLMK] == 20 && attrib[FUNCTN] == 20
	       && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__BUIREL13(0);
    } else if (prim == P && attrib[CATLMK] == 17 && attrib[FUNCTN] == 21
	       && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__BUIREL13(0);
    } else if (prim == P && attrib[CATLMK] == 17 && attrib[FUNCTN] == 20
	       && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__BUIREL13(0);
    } else if (prim == P && attrib[CATLMK] == 15 && attrib[FUNCTN] == 21
	       && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__BUIREL13(0);
    } else if (prim == P && attrib[CATLMK] == 15 && attrib[FUNCTN] == 20
	       && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__BUIREL13(0);
    } else if (prim == P && attrib[CATLMK] == 17 && attrib[FUNCTN] == 33
	       && attrib[CONVIS] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__TOWERS03(0);
	//TX(OBJNAM, 3, 2, 2, "15110", 1, -1, CHBLK, 26);
    } else if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__POSGEN01(0);
    }

    else if (prim == L && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(SOLD, 1, CHBLK);
    } else if (prim == L) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(SOLD, 1, LANDF);
    } else if (prim == A && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 1, CHBLK);
    } else if (prim == A && attrib[CATLMK] == 17 && attrib[FUNCTN] == 33) {
	prior = 4;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	//TX(OBJNAM, 1, 2, 2, "15110", 0, 0, CHBLK, 26);
	LS(SOLD, 1, LANDF);
    } else if (prim == A && attrib[CATLMK] == 17 && attrib[FUNCTN] == 33
	       && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	//TX(OBJNAM, 1, 2, 2, "15110", 0, 0, CHBLK, 26);
	LS(SOLD, 1, CHBLK);
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 1, LANDF);
    }

    return 0;
}
int LIGHTS(int read_prior)
{
    if (prim == P) {
	prior = 8;
	if (read_prior)
	    return prior;
	CS__LIGHTS04();
    }

    return 0;
}
int LITFLT(int read_prior)
{
    if (prim == P) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__LITFLT01(0);
	TE("by%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    }

    return 0;
}
int LITVES(int read_prior)
{
    if (prim == P) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__LITVES01(0);
	TE("LtV%s", "OBJNAM", 2, 1, 2, "15110", -1, -1, CHBLK, 21);
    }

    return 0;
}
int LOCMAG(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__LOCMAG01(0);
    }

    else if (prim == L) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(DASH, 1, CHMGF);
	SY__LOCMAG01(0);
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__LOCMAG51(0);
	LS__NAVARE51();
    }

    return 0;
}
int LOKBSN(int read_prior)
{
    if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	AC(DEPVS);
	LS(SOLD, 1, CHBLK);
    }

    return 0;
}
int LOGPON(int read_prior)
{
    if (prim == P) {
	prior = 0;
	if (read_prior)
	    return prior;

    }

    else if (prim == A) {
	prior = 5;
	if (read_prior)
	    return prior;
	LS(DASH, 1, CHBLK);
    }

    return 0;
}
int MAGVAR(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__MAGVAR01(0);
	//TX(VALMAG, 3, 1, 2, "15110", 1, -1, CHBLK, 27);
    }

    else if (prim == L) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(SOLD, 2, CHMGF);
	SY__MAGVAR51(0);
	TE("varn%s", "VALMAG", 3, 1, 2, "15110", 1, -1, CHBLK, 27);
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__MAGVAR51(0);
    }

    return 0;
}
int MARCUL(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__MARCUL02(0);
    }

    else if (prim == L) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(DASH, 2, CHGRF);
    } else if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__MARCUL02();
	LS__NAVARE51();
	CS__RESTRN01();
    }

    return 0;
}
int MIPARE(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CHINFO06(0);
    }

    else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CTYARE51(0);
	LS__CTYARE51();
	CS__RESTRN01();
    }

    return 0;
}
int MORFAC(int read_prior)
{
    if (prim == P) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__MORFAC03(0);
	CS__SLCONS03();
    } else if (prim == P && attrib[CATMOR] == 7) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYMOR11(0);
    } else if (prim == P && attrib[CATMOR] == 5) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__PILPNT02(0);
    } else if (prim == P && attrib[CATMOR] == 3) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__PILPNT02(0);
    } else if (prim == P && attrib[CATMOR] == 2) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__MORFAC04(0);
    } else if (prim == P && attrib[CATMOR] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__MORFAC03(0);
    } else if (prim == P && attrib[CATMOR] == 7 && attrib[BOYSHP] == 6) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYMOR03(0);
    } else if (prim == P && attrib[CATMOR] == 7 && attrib[BOYSHP] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__BOYMOR01(0);
    } else if (prim == P) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__MORFAC03(0);
    }

    else if (prim == L && attrib[CATMOR] == 6) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS(DASH, 1, CHMGF);
    } else if (prim == L && attrib[CATMOR] == 4) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS(SOLD, 2, CSTLN);
    } else if (prim == L) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS(SOLD, 2, CSTLN);
    } else if (prim == A) {
	prior = 6;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 1, CHBLK);
    }

    return 0;
}
int NAVLNE(int read_prior)
{
    if (prim == L) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(DASH, 1, CHGRD);
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,11);
    }
    return 0;
}
int OBSTRN(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	CS__OBSTRN04();
    } else if (prim == P && attrib[CATOBS] == 9) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__ACHARE02(0);
    } else if (prim == P && attrib[CATOBS] == 7) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FOULGND1(0);
    } else if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	CS__OBSTRN04();
    } else if (prim == L && attrib[CATOBS] == 8) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(DASH, 1, CSTLN);
    } else if (prim == L) {
	prior = 4;
	if (read_prior)
	    return prior;
	CS__OBSTRN04();
    } else if (prim == A && attrib[CATOBS] == 7) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FOULGND1(0);
	LS__NAVARE51();
    } else if (prim == A && attrib[CATOBS] == 6) {
	prior = 4;
	if (read_prior)
	    return prior;
	CS__OBSTRN04();
	PT__FOULAR01();
	LS(DOTT, 2, CHBLK);
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	CS__OBSTRN04();
    }

    return 0;
}
int OFSPLF(int read_prior)
{
    if (prim == P) {
	prior = 5;
	if (read_prior)
	    return prior;
	SY__OFSPLF01(0);
	TE("Prod%s", "OBJNAM", 3, 1, 2, "15110", 1, -1, CHBLK, 21);
    }

    else if (prim == A) {
	prior = 5;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 4, CSTLN);
	TE("Prod%s", "OBJNAM", 3, 1, 2, "15110", 1, -1, CHBLK, 21);
    }

    return 0;
}
int OSPARE(int read_prior)
{
    if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CTYARE51(0);
	LS__CTYARE51();
	CS__RESTRN01();
    }

    return 0;
}
int OILBAR(int read_prior)
{
    if (prim == L) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(DASH, 1, CHBLK);
    }
    return 0;
}
int PILPNT(int read_prior)
{
    if (prim == P) {
	prior = 5;
	if (read_prior)
	    return prior;
	SY__PILPNT02(0);
    } else if (prim == P && attrib[CATMOR] == 5) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__PILPNT02(0);
    } else if (prim == P && attrib[CATMOR] == 3) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__PILPNT02(0);
    }

    return 0;
}
int PILBOP(int read_prior)
{
    if (prim == P) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__PILBOP02(0);
	TE("Plt%s", "OBJNAM", 3, 1, 2, "15110", 1, -1, CHBLK, 21);
    }

    else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__PILBOP02(0);
	LS__CTYARE51();
    }

    return 0;
}
int PIPARE(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CHINFO07(0);
    }

    else if (prim == A && attrib[PRODCT] == 3) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__INFARE51(0);
	LS__PIPARE61();
	CS__RESTRN01();
    } else if (prim == A && attrib[CATPIP] == 3) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__INFARE51(0);
	LS__PIPARE61();
	CS__RESTRN01();
    } else if (prim == A && attrib[CATPIP] == 2) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__INFARE51(0);
	LS__PIPARE61();
	CS__RESTRN01();
    } else if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__INFARE51(0);
	LS__PIPARE51();
	CS__RESTRN01();
    }

    return 0;
}
int PIPOHD(int read_prior)
{
    if (prim == L && attrib[CONRAD] == 3) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(SOLD, 3, CHGRD);
	SY__RACNSP01(0);
	TE("clr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, -1, CHBLK, 11);
    } else if (prim == L && attrib[CONRAD] == 1) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(SOLD, 3, CHGRD);
	SY__RACNSP01(0);
	TE("clr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, -1, CHBLK, 11);
    } else if (prim == L) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(SOLD, 3, CHGRD);
	TE("clr%4.1lf", "VERCLR", 3, 1, 2, "15110", 1, -1, CHBLK, 11);
    }
    return 0;
}
int PIPSOL(int read_prior)
{
    if (prim == P) {
	prior = 0;
	if (read_prior)
	    return prior;

    }

    else if (prim == L && attrib[CATPIP] == 5) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__PIPSOL06();
    } else if (prim == L && attrib[CATPIP] == 4) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__PIPSOL06();
    } else if (prim == L && attrib[CATPIP] == 3) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__PIPSOL06();
    } else if (prim == L && attrib[CATPIP] == 2) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__PIPSOL06();
    } else if (prim == L && attrib[PRODCT] == 3) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__PIPSOL06();
    } else if (prim == L) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__PIPSOL05();
    }
    return 0;
}
int PONTON(int read_prior)
{
    if (prim == L) {
	prior = 5;
	if (read_prior)
	    return prior;
	LS(SOLD, 2, CSTLN);
    } else if (prim == A) {
	prior = 5;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 2, CSTLN);
    }

    return 0;
}
int PRCARE(int read_prior)
{
    if (prim == P) {
	prior = 5;
	if (read_prior)
	    return prior;
	SY__PRCARE12(0);
    }

    else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	PT__TSSJCT02();
	SY__PRCARE51(0);
	LS__PRCARE51();
	CS__RESTRN01();
    }

    return 0;
}
int PRDARE(int read_prior)
{
    if (prim == P && attrib[CATPRA] == 9) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__WIMCON01(0);
    } else if (prim == P && attrib[CATPRA] == 8) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__TNKCON02(0);
    } else if (prim == P && attrib[CATPRA] == 6) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__TMBYRD01(0);
    } else if (prim == P && attrib[CATPRA] == 5) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__FLASTK01(0);
    } else if (prim == P && attrib[CATPRA] == 1) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__PRDINS02(0);
    } else if (prim == P && attrib[CATPRA] == 9 && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__WIMCON11(0);
    } else if (prim == P && attrib[CATPRA] == 8 && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TNKCON12(0);
    } else if (prim == P && attrib[CATPRA] == 5 && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FLASTK11(0);
    } else if (prim == P) {
	prior = 0;
	if (read_prior)
	    return prior;

    }

    else if (prim == A && attrib[CATPRA] == 9) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__WNDFRM51(0);
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATPRA] == 8) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TNKFRM01(0);
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATPRA] == 6) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TMBYRD01(0);
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATPRA] == 5) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__RFNERY01(0);
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATPRA] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__QUARRY01(0);
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATPRA] == 9 && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__WNDFRM61(0);
	LS(DASH, 1, CHBLK);
    } else if (prim == A && attrib[CATPRA] == 8 && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TNKFRM11(0);
	LS(DASH, 1, CHBLK);
    } else if (prim == A && attrib[CATPRA] == 5 && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__RFNERY11(0);
	LS(DASH, 1, CHBLK);
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(DASH, 1, LANDF);
    }

    return 0;
}
int PYLONS(int read_prior)
{
    if (prim == P) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__POSGEN03(0);
    }

    else if (prim == A) {
	prior = 8;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 2, CSTLN);
    }

    return 0;
}
int RADLNE(int read_prior)
{
    if (prim == L) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS(DASH, 2, TRFCD);
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    }
    return 0;
}
int RADRNG(int read_prior)
{
    if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	LS(DASH, 1, TRFCF);
    }

    return 0;
}
int RADRFL(int read_prior)
{
    if (prim == P) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RADRFL03(0);
    }
    return 0;
}
int RADSTA(int read_prior)
{
    if (prim == P && attrib[CATRAS] == 2) {
	prior = 5;
	if (read_prior)
	    return prior;
	SY__RDOSTA02(0);
	TE("ch%s", "COMCHA", 3, 1, 2, "15110", 0, 0, CHBLK, 11);
    } else if (prim == P) {
	prior = 5;
	if (read_prior)
	    return prior;
	SY__POSGEN01(0);
    }

    return 0;
}
int RTPBCN(int read_prior)
{
    if (prim == P) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RTPBCN02(0);
    }

    return 0;
}
int RDOCAL(int read_prior)
{
    if (prim == P && attrib[TRAFIC] == 4 && attrib[ORIENT]) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RDOCAL03(attrib[ORIENT]);
	TE("No%s", "OBJNAM", 3, 1, 2, "15110", 1, -1, CHBLK, 21);
	TE("ch%s", "COMCHA", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
    } else if (prim == P && attrib[TRAFIC] == 3 && attrib[ORIENT]) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RDOCAL02(attrib[ORIENT]);
	TE("No%s", "OBJNAM", 3, 1, 2, "15110", 1, -1, CHBLK, 21);
	TE("ch%s", "COMCHA", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
    } else if (prim == P && attrib[TRAFIC] == 2 && attrib[ORIENT]) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RDOCAL02(attrib[ORIENT]);
	TE("No%s", "OBJNAM", 3, 1, 2, "15110", 1, -1, CHBLK, 21);
	TE("ch%s", "COMCHA", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
    } else if (prim == P && attrib[TRAFIC] == 1 && attrib[ORIENT]) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RDOCAL02(attrib[ORIENT]);
	TE("No%s", "OBJNAM", 3, 1, 2, "15110", 1, -1, CHBLK, 21);
	TE("ch%s", "COMCHA", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
    } else if (prim == P) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RCLDEF01(0);
	TE("No%s", "OBJNAM", 3, 2, 2, "15110", 1, -1, CHBLK, 21);
    }

    else if (prim == L && attrib[TRAFIC] == 4 && attrib[ORIENT]) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS(DASH, 1, TRFCD);
	SY__RDOCAL03(attrib[ORIENT]);
	TE("No%s", "OBJNAM", 3, 1, 2, "15110", 1, -1, CHBLK, 21);
	TE("ch%s", "COMCHA", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
    } else if (prim == L && attrib[TRAFIC] == 3 && attrib[ORIENT]) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS(DASH, 1, TRFCD);
	SY__RDOCAL02(attrib[ORIENT]);
	TE("No%s", "OBJNAM", 3, 1, 2, "15110", 1, -1, CHBLK, 21);
	TE("ch%s", "COMCHA", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
    } else if (prim == L && attrib[TRAFIC] == 2 && attrib[ORIENT]) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS(DASH, 1, TRFCD);
	SY__RDOCAL02(attrib[ORIENT]);
	TE("No%s", "OBJNAM", 3, 1, 2, "15110", 1, -1, CHBLK, 21);
	TE("ch%s", "COMCHA", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
    } else if (prim == L && attrib[TRAFIC] == 1 && attrib[ORIENT]) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS(DASH, 1, TRFCD);
	SY__RDOCAL02(attrib[ORIENT]);
	TE("No%s", "OBJNAM", 3, 1, 2, "15110", 1, -1, CHBLK, 21);
	TE("ch%s", "COMCHA", 3, 1, 2, "15110", 1, 1, CHBLK, 11);
    } else if (prim == L) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS(DASH, 1, TRFCD);
	SY__RCLDEF01(0);
	TE("No%s", "OBJNAM", 3, 2, 2, "15110", 1, -1, CHBLK, 21);
    }
    return 0;
}
int RDOSTA(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__RDOSTA02(0);
    } else if (prim == P && attrib[CATRAS] == 2) {
	prior = 5;
	if (read_prior)
	    return prior;
	SY__RDOSTA02(0);
	TE("ch%s", "COMCHA", 3, 1, 2, "15110", 0, 0, CHBLK, 11);
    }

    return 0;
}
int RAILWY(int read_prior)
{
    if (prim == L) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(SOLD, 2, LANDF);
    }
    return 0;
}
int RAPIDS(int read_prior)
{
    if (prim == P) {
	prior = 0;
	if (read_prior)
	    return prior;

    }

    else if (prim == L) {
	prior = 3;
	if (read_prior)
	    return prior;
	LS(SOLD, 3, CHGRD);
    } else if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	AC(CHGRD);
    }

    return 0;
}
int RCRTCL(int read_prior)
{
    if (prim == L && attrib[TRAFIC] == 4) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RCRTCL01();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,11);
    } else if (prim == L && attrib[TRAFIC] == 3) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RCRTCL02();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,11);
    } else if (prim == L && attrib[TRAFIC] == 2) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RCRTCL02();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,11);
    } else if (prim == L && attrib[TRAFIC] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RCRTCL02();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,11);
    } else if (prim == L && attrib[CATTRK] == 2 && attrib[TRAFIC] == 4) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RCRTCL01();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,11);
    } else if (prim == L && attrib[CATTRK] == 2 && attrib[TRAFIC] == 3) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RCRTCL02();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,11);
    } else if (prim == L && attrib[CATTRK] == 2 && attrib[TRAFIC] == 2) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RCRTCL02();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,11);
    } else if (prim == L && attrib[CATTRK] == 2 && attrib[TRAFIC] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RCRTCL02();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,11);
    } else if (prim == L && attrib[CATTRK] == 1 && attrib[TRAFIC] == 4) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RCRTCL03();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,11);
    } else if (prim == L && attrib[CATTRK] == 1 && attrib[TRAFIC] == 3) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RCRTCL04();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,11);
    } else if (prim == L && attrib[CATTRK] == 1 && attrib[TRAFIC] == 2) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RCRTCL04();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,11);
    } else if (prim == L && attrib[CATTRK] == 1 && attrib[TRAFIC] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RCRTCL04();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,11);
    } else if (prim == L) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RCRDEF01();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,11);
    }
    return 0;
}
int RECTRC(int read_prior)
{
   //printf("prim=%d prior=%d TRAFIC=%d CATTRK=%d\n", prim, read_prior, attrib[TRAFIC], attrib[CATTRK]);
   if (prim == L && attrib[TRAFIC] == 4 && attrib[CATTRK] == 0) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RECTRC09();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[TRAFIC] == 3 && attrib[CATTRK] == 0) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RECTRC11();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[TRAFIC] == 2 && attrib[CATTRK] == 0) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RECTRC11();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[TRAFIC] == 1 && attrib[CATTRK] == 0) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RECTRC11();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[CATTRK] == 2 && attrib[TRAFIC] == 4) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RECTRC09();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[CATTRK] == 2 && attrib[TRAFIC] == 3) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RECTRC11();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[CATTRK] == 2 && attrib[TRAFIC] == 2) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RECTRC11();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[CATTRK] == 2 && attrib[TRAFIC] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RECTRC11();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[CATTRK] == 1 && attrib[TRAFIC] == 4) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RECTRC10();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[CATTRK] == 1 && attrib[TRAFIC] == 3) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RECTRC12();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[CATTRK] == 1 && attrib[TRAFIC] == 2) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RECTRC12();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L && attrib[CATTRK] == 1 && attrib[TRAFIC] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RECTRC12();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == L) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS__RECDEF02();
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 1, 2, "15110", 1, -1, CHBLK,
	   11);
    } else if (prim == A && attrib[ORIENT] && attrib[TRAFIC] == 4) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RECTRC55(attrib[ORIENT]);
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 2, 2, "15110", 4, 0, CHBLK,
	   11);
	LS__NAVARE51();
    } else if (prim == A && attrib[ORIENT] && attrib[TRAFIC] == 3) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RECTRC57(attrib[ORIENT]);
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 2, 2, "15110", 4, 0, CHBLK,
	   11);
	LS__NAVARE51();
    } else if (prim == A && attrib[ORIENT] && attrib[TRAFIC] == 2) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RECTRC57(attrib[ORIENT]);
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 2, 2, "15110", 4, 0, CHBLK,
	   11);
	LS__NAVARE51();
    } else if (prim == A && attrib[ORIENT] && attrib[TRAFIC] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RECTRC57(attrib[ORIENT]);
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 2, 2, "15110", 4, 0, CHBLK,
	   11);
	LS__NAVARE51();
    } else if (prim == A && attrib[ORIENT] && attrib[CATTRK] == 2
	       && attrib[TRAFIC] == 4) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RECTRC55(attrib[ORIENT]);
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 2, 2, "15110", 4, 0, CHBLK,
	   11);
	LS__NAVARE51();
    } else if (prim == A && attrib[ORIENT] && attrib[CATTRK] == 2
	       && attrib[TRAFIC] == 3) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RECTRC57(attrib[ORIENT]);
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 2, 2, "15110", 4, 0, CHBLK,
	   11);
	LS__NAVARE51();
    } else if (prim == A && attrib[ORIENT] && attrib[CATTRK] == 2
	       && attrib[TRAFIC] == 2) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RECTRC57(attrib[ORIENT]);
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 2, 2, "15110", 4, 0, CHBLK,
	   11);
	LS__NAVARE51();
    } else if (prim == A && attrib[ORIENT] && attrib[CATTRK] == 2
	       && attrib[TRAFIC] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RECTRC57(attrib[ORIENT]);
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 2, 2, "15110", 4, 0, CHBLK,
	   11);
	LS__NAVARE51();
    } else if (prim == A && attrib[ORIENT] && attrib[CATTRK] == 1
	       && attrib[TRAFIC] == 4) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RECTRC56(attrib[ORIENT]);
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 2, 2, "15110", 4, 0, CHBLK,
	   11);
	LS__NAVARE51();
    } else if (prim == A && attrib[ORIENT] && attrib[CATTRK] == 1
	       && attrib[TRAFIC] == 3) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RECTRC58(attrib[ORIENT]);
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 2, 2, "15110", 4, 0, CHBLK,
	   11);
	LS__NAVARE51();
    } else if (prim == A && attrib[ORIENT] && attrib[CATTRK] == 1
	       && attrib[TRAFIC] == 2) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RECTRC58(attrib[ORIENT]);
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 2, 2, "15110", 4, 0, CHBLK,
	   11);
	LS__NAVARE51();
    } else if (prim == A && attrib[ORIENT] && attrib[CATTRK] == 1
	       && attrib[TRAFIC] == 1) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RECTRC58(attrib[ORIENT]);
	TE("%03.0lfdeg", "attrib[ORIENT]", 3, 2, 2, "15110", 4, 0, CHBLK,
	   11);
	LS__NAVARE51();
    } else if (prim == A) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RECDEF51(0);
	LS__NAVARE51();
    }

    return 0;
}
int RCTLPT(int read_prior)
{
    if (prim == P && attrib[ORIENT]) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__RCTLPT52(attrib[ORIENT]);
    } else if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__RTLDEF51(0);
    }

    else if (prim == A && attrib[ORIENT]) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__RCTLPT52(attrib[ORIENT]);
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__RTLDEF51(0);
    }

    return 0;
}
int RSCSTA(int read_prior)
{
    if (prim == P) {
	prior = 7;
	if (read_prior)
	    return prior;
	SY__RSCSTA02(0);
    }

    return 0;
}
int RESARE(int read_prior)
{
    if (prim == A) {
	prior = 5;
	if (read_prior)
	    return prior;
	CS__RESARE02();
    } else if (prim == A) {
	prior = 5;
	if (read_prior)
	    return prior;
	SY__ITZARE51(0);
	LS__RESARE51();
	CS__RESTRN01();
    }

    return 0;
}
int RETRFL(int read_prior)
{
    if (prim == P) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__RETRFL01(0);
    }

    return 0;
}
int RIVERS(int read_prior)
{
    if (prim == L) {
	prior = 2;
	if (read_prior)
	    return prior;
	LS(SOLD, 1, CHBLK);
    } else if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	AC(DEPVS);
	LS(SOLD, 1, CHBLK);
    }

    return 0;
}
int RIVBNK(int read_prior)
{
    	//prohibited
    return 0;
}
int ROADWY(int read_prior)
{
    if (prim == P) {
	prior = 0;
	if (read_prior)
	    return prior;

    }

    else if (prim == L) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(SOLD, 2, LANDF);
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	AC(LANDA);
	LS(SOLD, 1, LANDF);
    }

    return 0;
}
int RUNWAY(int read_prior)
{
    if (prim == P) {
	prior = 0;
	if (read_prior)
	    return prior;

    }

    else if (prim == L) {
	prior = 6;
	if (read_prior)
	    return prior;
	LS(SOLD, 3, LANDF);
    } else if (prim == A && attrib[CONVIS] == 1) {
	prior = 5;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 1, CHBLK);
    } else if (prim == A) {
	prior = 5;
	if (read_prior)
	    return prior;
	AC(CHBRN);
    }

    return 0;
}
int SNDWAV(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__SNDWAV02(0);
    }

    else if (prim == L) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(DASH, 2, CHGRD);
	SY__SNDWAV02(0);
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	PT__SNDWAV01();
	LS__NAVARE51();
    }

    return 0;
}
int SEAARE(int read_prior)
{
    if (prim == P) {
	prior = 3;
	if (read_prior)
	    return prior;
	//TX(OBJNAM, 1, 2, 3, "15110", 0, 0, CHBLK, 26);
    }

    else if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	//TX(OBJNAM, 1, 2, 3, "15110", 0, 0, CHBLK, 26);
    }

    return 0;
}
int SPLARE(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CHINFO06(0);
    }

    else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CTYARE51(0);
	LS__CTYARE51();
	CS__RESTRN01();
    }

    return 0;
}
int SBDARE(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	//TX(NATSUR, 1, 2, 2, "15110", 0, 0, CHBLK, 25);
    }

    else if (prim == L) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(SOLD, 1, CHGRD);
	//TX(NATSUR, 1, 2, 2, "15110", 0, 0, CHBLK, 25);
    } else if (prim == A && attrib[WATLEV] == 4 && NATSUR) {
	prior = 3;
	if (read_prior)
	    return prior;
	//TX(NATSUR, 1, 2, 2, "15110", 0, 0, CHBLK, 25);
	LS(DASH, 1, CHGRD);
    } else if (prim == A && attrib[WATLEV] == 4 && attrib[NATSUR] == 14) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__RCKLDG01();
	LS(DASH, 1, CHGRD);
    } else if (prim == A && attrib[WATLEV] == 4 && attrib[NATSUR] == 11) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__RCKLDG01();
	LS(DASH, 1, CHGRD);
    } else if (prim == A && attrib[WATLEV] == 4 && attrib[NATSUR] == 9) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__RCKLDG01();
	LS(DASH, 1, CHGRD);
    } else if (prim == A && attrib[WATLEV] == 3 && NATSUR) {
	prior = 3;
	if (read_prior)
	    return prior;
	//TX(NATSUR, 1, 2, 2, "15110", 0, 0, CHBLK, 25);
	LS(DASH, 1, CHGRD);
    } else if (prim == A) {
	prior = 0;
	if (read_prior)
	    return prior;
    }

    return 0;
}
int SLCONS(int read_prior)
{
    if (prim == P) {
	prior = 8;
	if (read_prior)
	    return prior;
	SY__MORFAC03(0);
	CS__SLCONS03();
    }

    else if (prim == L) {
	prior = 7;
	if (read_prior)
	    return prior;
	CS__SLCONS03();
    } else if (prim == A) {
	prior = 7;
	if (read_prior)
	    return prior;
	CS__SLCONS03();
    }

    return 0;
}
int SISTAT(int read_prior)
{
    if (prim == P) {
	prior = 7;
	if (read_prior)
	    return prior;
	SY__SISTAT02(0);
    } else if (prim == P) {
	prior = 7;
	if (read_prior)
	    return prior;
	SY__SISTAT02(0);
    }

    return 0;
}
int SISTAW(int read_prior)
{
    if (prim == P) {
	prior = 7;
	if (read_prior)
	    return prior;
	SY__SISTAT02(0);
    }

    return 0;
}
int SILTNK(int read_prior)
{
    if (prim == P && attrib[CATSIL] == 4) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TOWERS02(0);
    } else if (prim == P && attrib[CATSIL] == 3) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TOWERS01(0);
    } else if (prim == P && attrib[CATSIL] == 2) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TNKCON02(0);
    } else if (prim == P && attrib[CATSIL] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__SILBUI01(0);
    } else if (prim == P && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TNKCON12(0);
    } else if (prim == P && attrib[CATSIL] == 4 && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TOWERS12(0);
    } else if (prim == P && attrib[CATSIL] == 3 && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TOWERS03(0);
    } else if (prim == P && attrib[CATSIL] == 2 && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TNKCON12(0);
    } else if (prim == P && attrib[CATSIL] == 1 && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__SILBUI11(0);
    } else if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TNKCON02(0);
    }

    else if (prim == A && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 1, CHBLK);
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	LS(SOLD, 1, LANDF);
    }

    return 0;
}
int SLOTOP(int read_prior)
{
    if (prim == P && attrib[CONVIS] == 1) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__HILTOP11(0);
    } else if (prim == P) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__HILTOP01(0);
    }

    else if (prim == L && attrib[CATSLO] == 6) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(SOLD, 1, CHGRD);
    } else if (prim == L && attrib[CATSLO] == 2) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(SOLD, 1, CHGRD);
    } else if (prim == L && attrib[CATSLO] == 6 && attrib[CONVIS] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(SOLD, 1, CHBLK);
    } else if (prim == L && attrib[CATSLO] == 6 && attrib[CONRAD] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(SOLD, 1, CHBLK);
    } else if (prim == L && attrib[CATSLO] == 2 && attrib[CONRAD] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(SOLD, 1, CHBLK);
    } else if (prim == L) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(SOLD, 1, LANDF);
    }
    return 0;
}
int SLOGRD(int read_prior)
{
    if (prim == P) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__HILTOP01(0);
    }

    else if (prim == A && attrib[CATSLO] == 6) {
	prior = 3;
	if (read_prior)
	    return prior;
	AC(CHGRD);
	LS(SOLD, 1, CHBLK);
    } else if (prim == A) {
	prior = 0;
	if (read_prior)
	    return prior;

    }

    return 0;
}
int SMCFAC(int read_prior)
{
    if (prim == P) {
	prior = 0;
	if (read_prior)
	    return prior;

    } else if (prim == P && attrib[CATHAF] == 5) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__SMCFAC02(0);
    }

    else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	AC(CHBRN);
	SY__SMCFAC02(0);
	LS(SOLD, 1, LANDF);
    } else if (prim == A && attrib[CATHAF] == 5) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__SMCFAC02(0);
    }

    return 0;
}
int SOUNDG(int read_prior)
{
    if (prim == P) {
	prior = 6;
	if (read_prior)
	    return prior;
	CS__SOUNDG02();
    }

    return 0;
}
int SPRING(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__SPRING02(0);
    }

    return 0;
}
int SQUARE(int read_prior)
{
    	//prohibited
    return 0;
}
int STSLNE(int read_prior)
{
    if (prim == L) {
	prior = 3;
	if (read_prior)
	    return prior;
	LS(DASH, 1, CHGRF);
    }
    return 0;
}
int SUBTLN(int read_prior)
{
    if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CTYARE51(0);
	LS__CTYARE51();
	CS__RESTRN01();
    }

    return 0;
}
int SWPARE(int read_prior)
{
    if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__SWPARE51(0);
	TE("sweptto%5.1lf", "DRVAL1", 1, 2, 2, "15110", 0, 1, CHBLK, 27);
	LS__NAVARE51();
    }

    return 0;
}
int TESARE(int read_prior)
{
    if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	LS(DASH, 2, CHGRF);
	CS__RESTRN01();
    }

    return 0;
}
int TS_FEB(int read_prior)
{
    if (prim == P && attrib[CAT_TS] == 3 && attrib[ORIENT]) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CURENT01(attrib[ORIENT]);
	TE("%4.1lfkn", "CURVEL", 3, 1, 2, "15110", 1, -1, CHBLK, 31);
    } else if (prim == P && attrib[CAT_TS] == 2 && attrib[ORIENT]) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__EBBSTR01(attrib[ORIENT]);
	TE("%4.1lfkn", "CURVEL", 3, 1, 2, "15110", 1, -1, CHBLK, 31);
    } else if (prim == P && attrib[CAT_TS] == 1 && attrib[ORIENT]) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FLDSTR01(attrib[ORIENT]);
	TE("%4.1lfkn", "CURVEL", 3, 1, 2, "15110", 1, -1, CHBLK, 31);
    } else if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CURDEF01(0);
    }

    else if (prim == A && attrib[CAT_TS] == 3 && attrib[ORIENT]) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CURENT01(attrib[ORIENT]);
	TE("%4.1lfkn", "CURVEL", 3, 1, 2, "15110", 1, -1, CHBLK, 31);
    } else if (prim == A && attrib[CAT_TS] == 2 && attrib[ORIENT]) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__EBBSTR01(attrib[ORIENT]);
	TE("%4.1lfkn", "CURVEL", 3, 1, 2, "15110", 1, -1, CHBLK, 31);
    } else if (prim == A && attrib[CAT_TS] == 1 && attrib[ORIENT]) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FLDSTR01(attrib[ORIENT]);
	TE("%4.1lfkn", "CURVEL", 3, 1, 2, "15110", 1, -1, CHBLK, 31);
    } else if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	SY__CURDEF01(0);
	LS__TIDINF51();
    }

    return 0;
}
int TS_PRH(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TIDSTR01(0);
    }

    else if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	SY__TIDSTR01(0);
	LS__TIDINF51();
    }

    return 0;
}
int TS_PNH(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TIDSTR01(0);
    }

    else if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	SY__TIDSTR01(0);
	LS__TIDINF51();
    }

    return 0;
}
int TS_PAD(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TIDSTR01(0);
    }

    else if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	SY__TIDSTR01(0);
	LS__TIDINF51();
    }

    return 0;
}
int TS_TIS(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TIDSTR01(0);
    }

    else if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	SY__TIDSTR01(0);
	LS__TIDINF51();
    }

    return 0;
}
int T_HMON(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TIDEHT01(0);
    }

    else if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	SY__TIDEHT01(0);
	LS__TIDINF51();
    }

    return 0;
}
int T_NHMN(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TIDEHT01(0);
    }

    else if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	SY__TIDEHT01(0);
	LS__TIDINF51();
    }

    return 0;
}
int T_TIMS(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TIDEHT01(0);
    }

    else if (prim == A) {
	prior = 2;
	if (read_prior)
	    return prior;
	SY__TIDEHT01(0);
	LS__TIDINF51();
    }

    return 0;
}
int TIDEWY(int read_prior)
{
    if (prim == L) {
	prior = 3;
	if (read_prior)
	    return prior;
	LS(SOLD, 1, CHGRF);
    } else if (prim == A) {
	prior = 7;
	if (read_prior)
	    return prior;
	//TX(OBJNAM, 1, 2, 3, "15110", 0, 0, CHBLK, 25);
    }

    return 0;
}
int TOPMAR(int read_prior)
{
    if (prim == P) {
	prior = 6;
	if (read_prior)
	    return prior;
	CS__TOPMAR01();
    }

    return 0;
}
int TSELNE(int read_prior)
{
    if (prim == L) {
	prior = 8;
	if (read_prior)
	    return prior;
	LS(SOLD, 6, TRFCF);
    }
    return 0;
}
int TSSBND(int read_prior)
{
    if (prim == L) {
	prior = 7;
	if (read_prior)
	    return prior;
	LS(DASH, 4, TRFCD);
    }
    return 0;
}
int TSSCRS(int read_prior)
{
    if (prim == A) {
	prior = 6;
	if (read_prior)
	    return prior;
	PT__TSSJCT02();
	SY__TSSCRS51(0);
	CS__RESTRN01();
    }

    return 0;
}
int TSSLPT(int read_prior)
{
    if (prim == A && attrib[ORIENT]) {
	prior = 6;
	if (read_prior)
	    return prior;
	SY__TSSLPT51(attrib[ORIENT]);
	CS__RESTRN01();
    } else if (prim == A) {
	prior = 6;
	if (read_prior)
	    return prior;
	PT__TSSJCT02();
	SY__CTNARE51(0);
	//TX(INFORM, 1, 1, 2, "15110", 0, -2, CHBLK, 24);
	CS__RESTRN01();
    } else if (prim == A && attrib[ORIENT] && attrib[TRAFIC] == 3) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TSSLPT51(attrib[ORIENT]);
	SY__DWRTPT51(0);
	LS__DWRUTE51();
	CS__RESTRN01();
    } else if (prim == A && attrib[ORIENT] && attrib[TRAFIC] == 2) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TSSLPT51(attrib[ORIENT]);
	SY__DWRTPT51(0);
	LS__DWRUTE51();
	CS__RESTRN01();
    } else if (prim == A && attrib[ORIENT] && attrib[TRAFIC] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TSSLPT51(attrib[ORIENT]);
	SY__DWRTPT51(0);
	LS__DWRUTE51();
	CS__RESTRN01();
    }

    return 0;
}
int TSSRON(int read_prior)
{
    if (prim == A) {
	prior = 6;
	if (read_prior)
	    return prior;
	PT__TSSJCT02();
	SY__TSSRON51(0);
	CS__RESTRN01();
    }

    return 0;
}
int TSEZNE(int read_prior)
{
    if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	AC(TRFCF);		//FIXME transparency 3
    }

    return 0;
}
int TUNNEL(int read_prior)
{
    if (prim == L && attrib[BURDEP] == 0) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(DASH, 2, CHBLK);
    } else if (prim == L) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(DASH, 1, CHGRD);
    } else if (prim == A && attrib[BURDEP] == 0) {
	prior = 4;
	if (read_prior)
	    return prior;
	AC(DEPVS);
	LS(DASH, 1, CHBLK);
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(DASH, 1, CHGRD);
    }

    return 0;
}
int TWRTPT(int read_prior)
{
    if (prim == A && attrib[ORIENT] && attrib[TRAFIC] == 4) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TWRTPT52(attrib[ORIENT]);
	LS__CTYARE51();
    } else if (prim == A && attrib[ORIENT] && attrib[TRAFIC] == 3) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TWRTPT53(attrib[ORIENT]);
	LS__CTYARE51();
    } else if (prim == A && attrib[ORIENT] && attrib[TRAFIC] == 2) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TWRTPT53(attrib[ORIENT]);
	LS__CTYARE51();
    } else if (prim == A && attrib[ORIENT] && attrib[TRAFIC] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TWRTPT53(attrib[ORIENT]);
	LS__CTYARE51();
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__TWRDEF51(0);
	LS__CTYARE51();
    }

    return 0;
}
int UWTROC(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	CS__OBSTRN04();
    }

    return 0;
}
int UNSARE(int read_prior)
{
    if (prim == A) {
	prior = 0;
	if (read_prior)
	    return prior;
	AC(NODTA);
	PT__NODATA03();
	LS(SOLD, 2, CHGRD);
    }

    return 0;
}
int VEGATN(int read_prior)
{
    if (prim == P) {
	prior = 0;
	if (read_prior)
	    return prior;

    }

    else if (prim == L) {
	prior = 3;
	if (read_prior)
	    return prior;
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATVEG] == 22) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__VEGATN03();
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATVEG] == 20) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__VEGATN03();
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATVEG] == 19) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__VEGATN03();
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATVEG] == 18) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__VEGATN03();
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATVEG] == 17) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__VEGATN03();
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATVEG] == 16) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__VEGATN03();
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATVEG] == 15) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__VEGATN03();
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATVEG] == 14) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__VEGATN03();
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATVEG] == 13) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__VEGATN03();
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATVEG] == 6) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__VEGATN03();
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATVEG] == 5) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__VEGATN03();
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATVEG] == 4) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__VEGATN03();
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATVEG] == 3) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__VEGATN03();
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATVEG] == 21) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__VEGATN04();
	LS(DASH, 1, LANDF);
    } else if (prim == A && attrib[CATVEG] == 7) {
	prior = 3;
	if (read_prior)
	    return prior;
	PT__VEGATN04();
	LS(DASH, 1, LANDF);
    } else if (prim == A) {
	prior = 0;
	if (read_prior)
	    return prior;
    }

    return 0;
}
int WATTUR(int read_prior)
{
    if (prim == P) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__WATTUR02(0);
    }

    else if (prim == L) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS(DASH, 1, CHGRD);
	SY__WATTUR02(0);
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__WATTUR02(0);
	LS(DASH, 1, CHGRD);
    }

    return 0;
}
int WATFAL(int read_prior)
{
    if (prim == L && attrib[CONVIS] == 1) {
	prior = 3;
	if (read_prior)
	    return prior;
	LS(SOLD, 3, CHWHT);
    } else if (prim == L) {
	prior = 3;
	if (read_prior)
	    return prior;
	LS(SOLD, 3, CHGRF);
    }
    return 0;
}
int WEDKLP(int read_prior)
{
    if (prim == P) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__WEDKLP03(0);
    }

    else if (prim == A) {
	prior = 3;
	if (read_prior)
	    return prior;
	SY__WEDKLP03(0);
	LS(DASH, 1, CHGRF);
    }

    return 0;
}
int WRECKS(int read_prior)
{

    if (prim == P && attrib[CATWRK] == 3) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__FOULGND1(0);
    } else if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	CS__WRECKS02();
    }

    else if (prim == A && attrib[CATWRK] == 3) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS__NAVARE51();
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	CS__WRECKS02();
    }

    return 0;
}
int M_ACCY(int read_prior)
{
    return -1;
}
int M_CSCL(int read_prior)
{
	/*
	prior = 1;
	if (read_prior)
	    return prior;
	CS__DATCVR01();
	*/
        return -1;
}
int M_COVR(int read_prior)
{
     /*
	prior = 1;
	if (read_prior)
	    return prior;
	CS__DATCVR01();
      */
    return -1;
}
int M_HDAT(int read_prior)
{
    	//prohibited
    return 0;
}
int M_HOPA(int read_prior)
{
    /*
    if (prim == A) {
	prior = 0;
	if (read_prior)
	    return prior;
    }*/
    return -1;
}
int M_NPUB(int read_prior)
{
    if (prim == P) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__CHINFO07(0);
    }else{
	    return -1;
    }
    return -1;
}
int M_NSYS(int read_prior)
{
    if (prim == A && attrib[ORIENT]) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__DIRBOY01(attrib[ORIENT]);
	LS__NAVARE51();
    } else if (prim == A && attrib[MARSYS] == 2 && attrib[ORIENT]) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__DIRBOYB1(attrib[ORIENT]);
	LS__NAVARE51();
    } else if (prim == A && attrib[MARSYS] == 1 && attrib[ORIENT]) {
	prior = 4;
	if (read_prior)
	    return prior;
	SY__DIRBOYA1(attrib[ORIENT]);
	LS__NAVARE51();
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	LS__MARSYS51();
    }else{
	return -1;
    }
    return -1;
}
int M_PROD(int read_prior)
{
    	//prohibited
    return -1;
}
int M_QUAL(int read_prior)
{
    if (prim == A && attrib[CATZOC] == 6) {
	prior = 4;
	if (read_prior)
	    return prior;
	PT__DQUALU01();
	LS(DASH, 2, CHGRD);
    } else if (prim == A && attrib[CATZOC] == 5) {
	prior = 4;
	if (read_prior)
	    return prior;
	PT__DQUALD01();
	LS(DASH, 2, CHGRD);
    } else if (prim == A && attrib[CATZOC] == 4) {
	prior = 4;
	if (read_prior)
	    return prior;
	PT__DQUALC01();
	LS(DASH, 2, CHGRD);
    } else if (prim == A && attrib[CATZOC] == 3) {
	prior = 4;
	if (read_prior)
	    return prior;
	PT__DQUALB01();
	LS(DASH, 2, CHGRD);
    } else if (prim == A && attrib[CATZOC] == 2) {
	prior = 4;
	if (read_prior)
	    return prior;
	PT__DQUALA21();
	LS(DASH, 2, CHGRD);
    } else if (prim == A && attrib[CATZOC] == 1) {
	prior = 4;
	if (read_prior)
	    return prior;
	PT__DQUALA11();
	LS(DASH, 2, CHGRD);
    } else if (prim == A) {
	prior = 4;
	if (read_prior)
	    return prior;
	PT__NODATA03();
	LS(DASH, 2, CHGRD);
    } else {
    	return -1;
    }
    return -1;
}
int M_SDAT(int read_prior)
{
    /*
    if (prim == A) {
	prior = 0;
	if (read_prior)
	    return prior;
    }
    */
    return -1;
}
int M_SREL(int read_prior)
{
     return -1;
}
int M_UNIT(int read_prior)
{
    	//prohibited
    return 0;
}
int M_VDAT(int read_prior)
{
    /*
    if (prim == A) {
	prior = 0;
	if (read_prior)
	    return prior;
    }*/
    return -1;
}
int C_AGGR(int read_prior)
{
    return -1;
}
int C_ASSO(int read_prior)
{
    return -1;
}
int C_STAC(int read_prior)
{
    	//prohibited
    return -1;
}
int dAREAS (int read_prior){
    	//prohibited
	return -1;
}
int dLINES (int read_prior){
    	//prohibited
	return -1;
};
int dCSYMB (int read_prior){
    	//prohibited
	return -1;
}
int dCOMPS (int read_prior){
    	//prohibited
	return -1;
}
int dTEXTS (int read_prior){
    	//prohibited
	return -1;
}
int NO_FUN (int read_prior){
	return -1;
}
