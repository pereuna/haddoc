/* variablos globalos */
extern int prim;
extern XPoint *area_points;
extern int narepoints;

/* funktions prototypos */
int draw_obj (int obj_no);
int init_preslib(Display * d, Window w, int x, int y);
int finish_map(Display * d);
int set_illumination(int ct);
