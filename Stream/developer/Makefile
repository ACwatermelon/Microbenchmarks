libstream.a: stream.o 
	ar -rsv libstream.a stream.o

stream.o: stream.c 
	gcc -c -O3 -DSTREAM_ARRAY_SIZE=50000000 -DNTIMES=10 stream.c

clean:
	rm stream.o libstream.a 