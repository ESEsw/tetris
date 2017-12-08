.PHONY: clean

Tetris: Tetris.o
	g++ Tetris.cpp -L../lib -ltetris -I../include -o Tetris

Tetris.o: Tetris.cpp
	g++ -c Tetris.cpp -I../include -o Tetris.o

clean:
	rm Tetris *.o
