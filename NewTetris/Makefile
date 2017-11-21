.PHONY: clean

block: block.o 
	gcc -o block block block.o 

block.o: block.c block_header.h
	gcc -c block.c
clean:
	rm *.o block
