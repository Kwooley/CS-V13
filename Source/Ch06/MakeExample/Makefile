CC=g++
CFLAGS=-I.
DEPS = rectangle.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: exercise6-2.o rectangle.o 
	$(CC) -o exercise6-2 exercise6-2.o rectangle.o 
clean:
	bin/rm -rf *.o a.out 