#!make -f
CC=gcc
FLAGS=-Wall -g

all: cmp copy 

cmp: cmp.c
	gcc ${FLAGS} -o cmp cmp.c
copy: copy.c
	gcc ${FLAGS} -o copy copy.c
encoder.o: encoder.c codec.h
	gcc ${FLAGS} -c encoder encoder.c
decoder.o: decoder.c codec.h
	gcc ${FLAGS} -c decoder decoder.c
codec1.o: codec1.c codec.h
	gcc ${FLAGS} -c codec1.c
codec2.o: codec2.c codec.h
	gcc ${FLAGS} -c codec2.c
codec.so: codec1.o codec2.o
	gcc -shared -o codec.so codec1.o codec2.o
encoder: encoder.o codec.so
	gcc ${FLAGS} -o encoder encoder.o ./codec.so
decoder: decoder.o codec.so
	gcc ${FLAGS} -o decoder decoder.o ./codec.so

.PHONY: clean all

clean:
	rm -f *.o *.so


