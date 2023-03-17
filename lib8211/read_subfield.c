#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
//#include <errno.h>
#include "8211.h"

#define nmtoptr(a) (a/10)-11
#define CN(A) (!strcmp(name,A))


enum type { VRID, SG2D, SG3D, VRPT, CATD, DSPM, FRID, ATTF, FSPT };
int total_size;
int rcnm = 0, rcid = 0;
int total_count = 0;
int objcnt = -1;
int isfeat = 0;
int start_cnt = 0;
unsigned int tmp_rcid = 0;
int tmp_rcnm = 0;
int psize = 0;
const char *name;
extern struct dspm_ dspm;
int max_id[] = { 0, 0, 0 };

static int attrcnt = 0;
static int orient = 0;

extern int ip;
extern int lf;
extern int field_start;
extern int field_len;
extern char rec[32000];
extern struct point *coord[3];
extern struct obj *feature_obj;
extern struct edges ed;

void read_fspt(int direc, int usag);

void *xmalloc(size_t size)
{
    register void *value = malloc(size);
    if (value == 0) {
	fprintf(stderr, "virtual memory exhausted");
	exit(0);
    }
    return value;
}

void *xrealloc(void *ptr, size_t size)
{
    register void *value = realloc(ptr, size);
    if (value == 0) {
	fprintf(stderr, "Virtual memory exhausted");
	exit(0);
    }
    return value;
}

void read_subfields(char *tag)
{
    int usage = 0;
    int i;
    static int ftime=1;
 

    if (!strcmp(tag, "VRID")) {
	rcnm =
	    (nmtoptr((int) *(unsigned char *) (rec + field_start + ip)));
	rcid = (int) *((unsigned int *) (rec + field_start + ip + 1));

	if (rcid > max_id[rcnm]) {
	    max_id[rcnm] = rcid;
	    coord[rcnm] = (struct point *)
		xrealloc(coord[rcnm],
			 sizeof(struct point) * (max_id[rcnm] + 1));
	}

	coord[rcnm][rcid].npts = 0;
	coord[rcnm][rcid].p = (PPoint *) xmalloc(sizeof(PPoint));
#ifdef PRINT
	printf("VRID\n");
	printf("\tRCNM = %d\n",
	(int) *((unsigned char *) (rec + field_start + ip)));
	printf("\tRCID = %d\n", rcid);
#endif
    } else if (!strcmp(tag, "SG2D")) {
#ifdef PRINT
	printf("SG2D\n");
#endif
	for (i = 0; i < lf - 1; i += 8) {
	    coord[rcnm][rcid].p[total_count].y = (int) *((int *)
							 (rec +
							  field_start +
							  ip + i));
	    coord[rcnm][rcid].p[total_count].x = (int) *((int *)
							 (rec +
							  field_start +
							  ip + i + 4));
            if(ftime){
		    ed.ELON = coord[rcnm][rcid].p[total_count].x;
		    ed.WLON = coord[rcnm][rcid].p[total_count].x;
		    ed.SLAT = coord[rcnm][rcid].p[total_count].y;
		    ed.NLAT = coord[rcnm][rcid].p[total_count].y;
		    ftime = 0;
	    }
	    if (ed.ELON < coord[rcnm][rcid].p[total_count].x) {
		ed.ELON = coord[rcnm][rcid].p[total_count].x;
	    } else if (ed.WLON > coord[rcnm][rcid].p[total_count].x) {
		ed.WLON = coord[rcnm][rcid].p[total_count].x;
	    }

	    if (ed.NLAT < coord[rcnm][rcid].p[total_count].y) {
		ed.NLAT = coord[rcnm][rcid].p[total_count].y;
	    } else if (ed.SLAT > coord[rcnm][rcid].p[total_count].y) {
		ed.SLAT = coord[rcnm][rcid].p[total_count].y;
	    }
#ifdef PRINT
	    printf("\tXCOO = %d\n", coord[rcnm][rcid].p[total_count].x);
	    printf("\tYCOO = %d\n", coord[rcnm][rcid].p[total_count].y);
#endif
	    coord[rcnm][rcid].npts++;
	    total_count++;

	    coord[rcnm][rcid].p = (PPoint *)
		xrealloc(coord[rcnm][rcid].p,
			 (total_count + 1) * sizeof(PPoint));

	}
    } else if (!strcmp(tag, "SG3D")) {
	//printf("SG3D\n");
	for (i = 0; i < lf - 1; i += 12) {

	    coord[rcnm][rcid].p[total_count].y = (int) *((int *)
							 (rec +
							  field_start +
							  ip + i));
	    coord[rcnm][rcid].p[total_count].x = (int) *((int *)
							 (rec +
							  field_start +
							  ip + i + 4));

	    coord[rcnm][rcid].p[total_count].z = (int) *((int *)
							 (rec +
							  field_start
							  + ip + i + 8));
	    if(ftime){
		    ed.ELON = coord[rcnm][rcid].p[total_count].x;
		    ed.WLON = coord[rcnm][rcid].p[total_count].x;
		    ed.SLAT = coord[rcnm][rcid].p[total_count].y;
		    ed.NLAT = coord[rcnm][rcid].p[total_count].y;
		    ftime = 0;
	    }
	    if (ed.ELON > coord[rcnm][rcid].p[total_count].x) {
		ed.ELON = coord[rcnm][rcid].p[total_count].x;
	    } else if (ed.WLON < coord[rcnm][rcid].p[total_count].x) {
		ed.WLON = coord[rcnm][rcid].p[total_count].x;
	    }

	    if (ed.NLAT > coord[rcnm][rcid].p[total_count].y) {
		ed.NLAT = coord[rcnm][rcid].p[total_count].y;
	    } else if (ed.SLAT < coord[rcnm][rcid].p[total_count].y) {
		ed.SLAT = coord[rcnm][rcid].p[total_count].y;
	    }
	    //printf("\tYCOO = %d\n", coord[rcnm][rcid].p[total_count].x);
	    //printf("\tXCOO = %d\n", coord[rcnm][rcid].p[total_count].y);
	    //printf("\tVE3D = %d\n", coord[rcnm][rcid].p[total_count].z);

	    coord[rcnm][rcid].npts++;
	    total_count++;

	    coord[rcnm][rcid].p = (PPoint *)
		xrealloc(coord[rcnm][rcid].p,
			 (total_count + 1) * sizeof(PPoint));


	}
    } else if (!strcmp(tag, "VRPT")) {
	//printf("VRPT\n");
	for (i = 0; i < lf - 1; i += 9) {
	    unsigned int tmp = 0;
	    tmp = (unsigned char)
		*((unsigned char *) (rec + field_start + ip + i + 2));
	    tmp = (tmp << 8) + (unsigned char)
		*((unsigned char *) (rec + field_start + ip + i + 1));

	    coord[rcnm][rcid].p[total_count].x =
		coord[nmtoptr(*(unsigned char *)
			      (rec + field_start + ip + i))][tmp].p[0].x;

	    coord[rcnm][rcid].p[total_count].y =
		coord[nmtoptr(*(unsigned char *)
			      (rec + field_start + ip + i))][tmp].p[0].y;

	    total_count++;
	    coord[rcnm][rcid].npts++;

	    coord[rcnm][rcid].p = (PPoint *)
		xrealloc(coord[rcnm][rcid].p,
			 sizeof(PPoint) * (total_count + 1));

	    /*printf("\tNAME = 0x%02x",
	    *((unsigned char *) (rec + field_start + ip + i)));
	    printf("%02x",
	    *((unsigned char *) (rec + field_start + ip + i + 1)));
	    printf("%02x",
	    *((unsigned char *) (rec + field_start + ip + i + 2)));
	    printf("%02x",
	    *((unsigned char *) (rec + field_start + ip + i + 3)));
	    printf("%02x\n",
	    *((unsigned char *) (rec + field_start + ip + i + 4)));
	    */
	}

    } else if (!strcmp(tag, "CATD")) {

    } else if (!strcmp(tag, "DSPM")) {
	//printf("DSPM\n");
	dspm.comf = *((unsigned int *) (rec + field_start + ip + 16));

	//printf("\tCOMF = %d\n", dspm.comf);

    } else if (!strcmp(tag, "FRID")) {
	//printf("FRID\n");
	objcnt++;
	feature_obj = (struct obj *)
	    xrealloc(feature_obj, sizeof(struct obj) * (objcnt + 1));


	feature_obj[objcnt].plotted = 0;
	
	feature_obj[objcnt].arecnt = 0;
	
	feature_obj[objcnt].attrval = (char **) xmalloc(sizeof(char *));

	//feature_obj[objcnt].attrval[0] = (char *) xmalloc(sizeof(char *));

	feature_obj[objcnt].attr = (int *) xmalloc(sizeof(int));

	feature_obj[objcnt].points = (PPoint **) xmalloc(sizeof(PPoint *));

	feature_obj[objcnt].points[0] = (PPoint *) xmalloc(sizeof(PPoint));

	feature_obj[objcnt].npoints = (int *) xmalloc(sizeof(int));

	start_cnt = 0;
	attrcnt = 0;
	psize = 0;

	feature_obj[objcnt].nattr = 0;
	feature_obj[objcnt].npoints[0] = 0;

	feature_obj[objcnt].primitive = (unsigned char) *
	    (rec + field_start + ip + 5);

	feature_obj[objcnt].obj_type = (int) *((unsigned short *)
					       (rec + field_start + ip +
						7));

	//printf("\tPRIM = %d\n", feature_obj[objcnt].primitive);
	//printf("\tOBJL = %d\n", feature_obj[objcnt].obj_type);

    } else if (!strcmp(tag, "ATTF")) {
	//printf("ATTF\n");
	for (i = 0; i < lf - 1;) {
	    if (*(unsigned char *) (rec + field_start + ip + i) == 0x1f) {
		*(unsigned char *) (rec + field_start + ip + i) = '\0';
	    }
	    i++;
	}

	for (i = 0; i < lf - 1;) {
	    feature_obj[objcnt].attr[attrcnt] = (int)
		*((unsigned short *) (rec + field_start + ip + i));

	    i += 2;		//next string 

	    feature_obj[objcnt].attrval[attrcnt] = (char *)
		strdup((const char *) (rec + field_start + ip + i));
	    if (feature_obj[objcnt].attrval[attrcnt] == NULL) {
		fprintf(stderr, "strdup\n");
		    exit(0);
	    }
	    //printf("\tATTL = %d\n", feature_obj[objcnt].attr[attrcnt]);
	    //printf("\tATVL = %s\n", feature_obj[objcnt].attrval[attrcnt]);

	    i += strlen(feature_obj[objcnt].attrval[attrcnt]) + 1;

	    attrcnt++;
	    feature_obj[objcnt].nattr++;

	    feature_obj[objcnt].attr =
		(int *) xrealloc(feature_obj[objcnt].attr,
				 sizeof(int) * (attrcnt + 1));

	    feature_obj[objcnt].attrval = (char **)
		xrealloc(feature_obj[objcnt].attrval,
			 (attrcnt + 1) * sizeof(char *));
	}
    } else if (!strcmp(tag, "FSPT")) {
	//printf("FSPT\n");
	for (i = 0; i < lf - 1; i += 8) {
	    tmp_rcnm =
		nmtoptr((unsigned char) *(rec + field_start + ip + i));
	    tmp_rcid = (unsigned char) *(rec + field_start + ip + i + 2);
	    tmp_rcid = (tmp_rcid << 8) +
		(unsigned char) *(rec + field_start + ip + i + 1);

	    orient = (unsigned char) *(rec + field_start + ip + i + 5);
	    usage = (unsigned char) *(rec + field_start + ip + i + 6);
	    read_fspt(orient, usage);
	    //printf("\tNAME = 0x%02x",
	    //*((unsigned char *) (rec + field_start + ip + i)));
	    //printf("%02x",
	    //*((unsigned char *) (rec + field_start + ip + i + 1)));
	    //printf("%02x",
	    //*((unsigned char *) (rec + field_start + ip + i + 2)));
	    //printf("%02x",
	    //*((unsigned char *) (rec + field_start + ip + i + 3)));
	    //printf("%02x\n",
	    //*((unsigned char *) (rec + field_start + ip + i + 4)));
	    //printf("\tORNT = %d\n", orient);
	    //printf("\tUSAG = %d\n", usage);

	}
    } else {
	return;
    }
}

void read_fspt(int direc, int usag) {
    int tmp_pcnt;
    int tmp_acnt;
    int i = 0;
    PPoint tmp;
    int d;

    tmp_acnt = feature_obj[objcnt].arecnt;
    tmp_pcnt = coord[tmp_rcnm][tmp_rcid].npts - 1;

    d = feature_obj[objcnt].npoints[tmp_acnt];

    if (usag == 2) {
	tmp_acnt++;

	feature_obj[objcnt].points =
	    (PPoint **) xrealloc(feature_obj[objcnt].points,
				 (tmp_acnt + 1) * sizeof(PPoint *));

	feature_obj[objcnt].points[tmp_acnt] =
	    (PPoint *) xmalloc(sizeof(PPoint));

	feature_obj[objcnt].npoints =
	    (int *) xrealloc(feature_obj[objcnt].npoints,
			     (tmp_acnt + 1) * sizeof(int));

	feature_obj[objcnt].npoints[tmp_acnt] = 0;
	psize = 0;
	d = 0;
    }

    psize += (coord[tmp_rcnm][tmp_rcid].npts * sizeof(PPoint));

    if (direc == 255)
	psize *= 2;

    feature_obj[objcnt].points[tmp_acnt] =
	(PPoint *) xrealloc(feature_obj[objcnt].points[tmp_acnt],
			    psize + 1);

    switch (direc) {
    case 2:			/* reverse line direction */
	if (tmp_pcnt > 1) {
	    feature_obj[objcnt].points[tmp_acnt][d] =
		coord[tmp_rcnm][tmp_rcid].p[1];
	    d++;
	    tmp = coord[tmp_rcnm][tmp_rcid].p[0];
	    for (i = tmp_pcnt; i > 1; i--) {
		feature_obj[objcnt].points[tmp_acnt][d] =
		    coord[tmp_rcnm][tmp_rcid].p[i];
		d++;
	    }
	    feature_obj[objcnt].points[tmp_acnt][d] = tmp;
	    d++;
	} else {
	    feature_obj[objcnt].points[tmp_acnt][d] =
		coord[tmp_rcnm][tmp_rcid].p[1];
	    d++;
	    feature_obj[objcnt].points[tmp_acnt][d] =
		coord[tmp_rcnm][tmp_rcid].p[0];
	    d++;
	}
	break;
    case 1:			/* forvard line direction */
    case 255:			/* no matter, points[tmp_acnt], lines */
	if (tmp_pcnt > 1) {
	    feature_obj[objcnt].points[tmp_acnt][d] =
		coord[tmp_rcnm][tmp_rcid].p[0];
	    d++;
	    tmp = coord[tmp_rcnm][tmp_rcid].p[1];
	    for (i = 2; i <= tmp_pcnt; i++) {
		feature_obj[objcnt].points[tmp_acnt][d] =
		    coord[tmp_rcnm][tmp_rcid].p[i];
		d++;
	    }
	    feature_obj[objcnt].points[tmp_acnt][d] = tmp;
	    d++;
	} else {
	    feature_obj[objcnt].points[tmp_acnt][d] =
		coord[tmp_rcnm][tmp_rcid].p[0];
	    d++;
	    feature_obj[objcnt].points[tmp_acnt][d] =
		coord[tmp_rcnm][tmp_rcid].p[1];
	    d++;
	}
	break;
    }
    feature_obj[objcnt].npoints[tmp_acnt] = d;
    feature_obj[objcnt].arecnt = tmp_acnt;
}
