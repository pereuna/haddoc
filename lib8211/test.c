#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "8211.h"

struct obj *feature_obj;
char *data_set_file;
struct edges ed; 
extern int objcnt;

int read_file(void);

int main(int argc, char **argv)
{

    if (argc != 2) {
	printf("usage: ./test <data set file>\n");
	exit(0);
    }
    data_set_file = strdup(argv[1]);
    read_file();
    printf("ed.WLON:%d\n", ed.WLON);
    printf("ed.ELON:%d\n", ed.ELON);
    printf("ed.SLAT:%d\n", ed.SLAT);
    printf("ed.NLAT:%d\n", ed.NLAT);
    /* 
    for (int i = 0; i < objcnt; i++) {
	printf("obj_type:%d \n", feature_obj[i].obj_type);
        for (int j = 0; j < feature_obj[i].npoints[0]; j++) {
            printf("(%d,", feature_obj[i].points[0][j].x);
            printf("%d),", feature_obj[i].points[0][j].y);
        }
	printf("\n");
    }
    */
    return 0;
}
