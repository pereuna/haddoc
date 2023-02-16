OBJ = lookup.o symbols.o presfun.o alloc.o draw_obj.o cond_symb.o 

all:	preslib test

.c.o:
	gcc -Wall -g -c -m32 $< 

preslib:  $(OBJ)
	ar rsc libpres.a $(OBJ)

test: main.o $(OBJ)
	gcc  -Wall -g  -m32 main.o -o test -L. -lX11 -lpres -lm

clean:
	rm -f *.o *~ core test *.a *.da *.bb* *.gcov *.out
