#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "8211.h"

char rec[32000];		/* external array avoids use of the stack */
FILE *fp_ddf;			/* DDF file pointer */
char tag[8];
char fmt[] = "%1s%1d%1d";	/* tag & directory entry format */
int n = 0, i;
int rec_len;
int field_start;
int field_tag;
int field_len;
int field_pos, lf, ip, ne, id, ifld = 0;
struct point *coord[3];

extern struct obj *feature_obj;
extern char *data_set_file;
extern int total_count;

void read_subfields(char *tag);
void *xmalloc(size_t size);

int read_file()
{
    int i;
    printf("Using data set file:%s\n", data_set_file);

    if (fp_ddf != NULL)
	fclose(fp_ddf);

    fp_ddf = fopen(data_set_file, "rb");

    if (fp_ddf == NULL) {
	fprintf(stderr, "Can't open data set file%s\n", data_set_file);
	exit(1);
    }

    for (i = 0; i < 3; i++) {
	coord[i] = (struct point *) xmalloc(sizeof(struct point));
    }
    feature_obj = (struct obj *) xmalloc(sizeof(struct obj));


  record:			/* start processing the next DDF record */

    total_count = 0;
    /* read & check the leader; if short or has crucial caret, return */
    if (fread(rec, 1, 24, fp_ddf) < 24)
	return 0;
    if (rec[4] == '^')
	return 0;

    /* for the DDR only, print the leader for its data description */
    if (!n) {
	rec[24] = '\0';
//              fprintf(stdout, "ldr: |%s|\n", rec);
    }

    /* scan the import control parameters in the leader */
    sscanf(rec, "%5d%*7c%5d%*3c%1d%1d%*1c%1d",
	   &rec_len, &field_start, &field_len, &field_pos, &field_tag);

    ne = field_tag + field_len + field_pos;

    /* read the rest of the DDF record adding to the leader; check error */
    if (fread(&rec[24], 1, (size_t) (rec_len - 24), fp_ddf) !=
	rec_len - 24)
	return 0;

    /* set pointer & format for the directory/field area processing loop */
    id = 24;
    fmt[1] = rec[23];
    fmt[4] = rec[20];
    fmt[7] = rec[21];

    /* process the next directory entry & its corresponding field */
  field:

    /* scan the next directory entry; convert field to string */
    sscanf(&rec[id], fmt, tag, &lf, &ip);
    //rec[field_start + ip + lf - 1] = '\0';

    /* print the current tag, byte count & field */
    if (n)
	read_subfields(tag);

    /* check: if(end of directory) branch to next DDF record */
    if ((id += ne) < field_start - 1) {
	ifld++;
	goto field;
    } else {
	n++;
	goto record;
    }
    return 0;
}
