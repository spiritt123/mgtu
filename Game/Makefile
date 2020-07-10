CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES_CLIENT=Client.cpp client_main.cpp
SOURCES_SERVER=Object.cpp Player.cpp Server.cpp server_main.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=client server

all: clear server client

client:
	$(CC) $(SOURCES_CLIENT) -o client -DSFML_STATIC \
	-Iinclude -Llib -pthread -lsfml-graphics -lsfml-system -lsfml-window -lsfml-network -lfreetype -lstdc++
server:
	$(CC) $(SOURCES_SERVER) -o server -DSFML_STATIC \
	-Iinclude -Llib -pthread -lsfml-graphics -lsfml-system -lsfml-window -lsfml-network -lfreetype -lstdc++

clear:
	rm -f *.o $(EXECUTABLE)
