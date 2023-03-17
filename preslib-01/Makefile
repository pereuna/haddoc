OBJ = lookup.o symbols.o presfun.o alloc.o draw_obj.o cond_symb.o color_names.o 

all:	preslib test

.c.o:
	gcc -Wall -g -c $< 

preslib:  $(OBJ)
	ar rsc libpres.a $(OBJ)

test: main.o $(OBJ)
	gcc  -Wall -g  main.o -o test -L. -lX11 -lpres -lm

clean:
	rm -f *.o *~ core test *.a *.da *.bb* *.gcov *.out
