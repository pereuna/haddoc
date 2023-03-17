OBJ = read_file.o read_subfield.o  
all:    lib	

.c.o:
	gcc -c -g -Wall -O0 $<
	
lib:	$(OBJ)
	ar rsc lib8211.a $(OBJ)
test:	lib8211.a test.o 
	gcc -g -Wall test.c -o test lib8211.a
dist:
	mkdir lib8211
	cp *.c lib8211/
	cp Makefile lib8211/
	tar cfz lib8211.tar.gz lib8211/
	scp lib8211.tar.gz lapere@unix.tp.spt.fi:./
	rm -fr lib8211
clean:
	rm -fr *.o core lib8211.a test *~
