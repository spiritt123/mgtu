CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp Piece.cpp Elephant.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=hello

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clear:
	rm -f *.o $(EXECUTABLE)