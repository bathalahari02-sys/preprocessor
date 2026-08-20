my_preprocessor: preprocessor.o include.o define.o
	cc preprocessor.o include.o define.o -o my_preprocessor

preprocessor.o: preprocessor.c
	cc -c preprocessor.c

include.o: include.c
	cc -c include.c

define.o: define.c
	cc -c define.c

clean:
	rm -f *.o my_preprocessor abc.i
