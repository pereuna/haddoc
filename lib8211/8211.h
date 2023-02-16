typedef struct {
    int x;
    int y;
    int z;
} PPoint;


struct dspm_ {
    int comf;
};

struct point {
    PPoint *p;
    int npts;
};

struct obj {
    int obj_type;
    int primitive;
    int *attr;
    char **attrval;
    int nattr;
    PPoint **points;
    int *npoints;
    int arecnt;
    int plotted;
};
struct edges {
    int SLAT;
    int WLON;
    int NLAT;
    int ELON;
};

