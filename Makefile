OBJ = main.o 
LIBDIR= -Lpreslib-01/ -L/usr/X11R6/lib/ -Llib8211/
INC= -I. -Ipreslib-01/ -Ilib8211/
LIB= -l8211 -lpres -lX11 -lpthread -lm 
CFLAGS=  -DXK_LATIN1  -DXK_MISCELLANY


TOPTARGETS := all clean

SUBDIRS := $(wildcard */.)

$(TOPTARGETS): $(SUBDIRS)
$(SUBDIRS):
	$(MAKE) -C $@ $(MAKECMDGOALS)

.PHONY: $(TOPTARGETS) $(SUBDIRS)

all:	test

.c.o:
	gcc -c -g -Wall -m32 -O3  $(CFLAGS) $(INC) $<
.cc.o:
	g++ -c  -Wall  -m32 $(CFLAGS)  $(INC) $< 

test: $(OBJ) preslib-01/libpres.a
	gcc -Wall -g -m32 -O3 $(CFLAGS) $(OBJ) $(LIB) $(LIBDIR) $(INC) -o test

clean:
	rm -f *.o *~ core test
