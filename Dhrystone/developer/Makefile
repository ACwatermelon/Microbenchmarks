libdry.a: dry.o
	ar -rsv libdry.a dry.o

dry.o: dry.c
	gcc -c -DPASS2 dry.c

clean:
	rm dry.o libdry.a