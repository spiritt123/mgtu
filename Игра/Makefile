CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES_CLIENT=client.cpp client_main.cpp
SOURCES_SERVER=Object.cpp Player.cpp server.cpp server_main.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=client server

all: clear client server

client:
	$(CC) $(SOURCES_CLIENT) -o client -DSFML_STATIC \
	-Iinclude -Llib -pthread -lsfml-graphics -lsfml-system -lsfml-window -lsfml-network -lfreetype -lstdc++
server:
	$(CC) $(SOURCES_SERVER) -o server -DSFML_STATIC \
	-Iinclude -Llib -pthread -lsfml-graphics -lsfml-system -lsfml-window -lsfml-network -lfreetype -lstdc++

clear:
	rm -f *.o $(EXECUTABLE)
