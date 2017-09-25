headers= maliste.h
sources = maliste.c main.c
objets = $(sources:.c=.o)


proglist: $(objets)
	gcc -o $@ $^
main.o:main.c $(headers)
maliste.o :maliste.c $(headers)


clean:
	rm -f *~ *.o

mrproper:clean
	rm -f proglist

all: proglist Executable2
	*




