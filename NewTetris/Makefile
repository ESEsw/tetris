.PHONY: clean

tetris: tetris.o block.o
	g++ -o tetris tetris.o block.o

tetris.o: tetris.cpp block.h
	g++ -c tetris.cpp
block.o: block.cpp block.h
	g++ -c block.cpp

clean:
	rm *.o
