.PHONY: clean
OBJFILES = myio.o Block.o GameLogic.o
OUTPUT = libtetris.a

$(OUTPUT): $(OBJFILES)
	ar rv $(OUTPUT) $(OBJFILES)

%.o: %.cpp
	g++ -o $@ -c $< -I../header

clean:
	rm *.o $(OUTPUT)
