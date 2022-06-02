libsuperpi.a: superpi.o fftsg_h.o
	ar -rsv libsuperpi.a superpi.o fftsg_h.o

superpi.o: superpi.c
	gcc -c -O -funroll-loops -fomit-frame-pointer superpi.c

fftsg_h.o: fftsg_h.c
	gcc -c -O -funroll-loops -fomit-frame-pointer fftsg_h.c

clean:
	rm superpi.o fftsg_h.o libsuperpi.a