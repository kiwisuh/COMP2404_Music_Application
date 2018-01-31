OBJ = mytunes main.o mytunes.o UI.o command.o str_util.o song.o recording.o track.o user.o playlist.o subject.o sqlite3.o database.o
CXX = g++
cc = gcc
LIB = -lpthread -ldl
BIN = mytunes main.o mytunes.o UI.o command.o str_util.o song.o recording.o track.o user.o playlist.o subject.o sqlite3.o database.o
all: $(BIN)
sqlite:sqlite3.c shell.c
	$(cc) -o $@ $^ $(LIB)
mytunes:main.cpp mytunes.o UI.o command.o str_util.o song.o recording.o track.o user.o playlist.o subject.o sqlite3.o database.o
	$(CXX) -o $@ $^ $(LIB)
mytunes.o:mytunes.cpp mytunes.h mytunes_collection.h Database.h
	g++ -c -std=c++11 mytunes.cpp
UI.o:UI.cpp UI.h
	g++ -c -std=c++11 UI.cpp
command.o:command.cpp command.h
	g++ -c -std=c++11 command.cpp
song.o:song.cpp song.h
	g++ -c -std=c++11 song.cpp
user.o:user.cpp user.h
	g++ -c -std=c++11 user.cpp
playlist.o:playlist.cpp playlist.h observer.h
	g++ -c -std=c++11 playlist.cpp
recording.o:recording.cpp recording.h
	g++ -c -std=c++11 recording.cpp
track.o:track.cpp track.h
	g++ -c -std=c++11 track.cpp
str_util.o:str_util.cpp str_util.h
	g++ -c -std=c++11 str_util.cpp
subject.o:subject.cpp subject.h
	g++ -c -std=c++11 subject.cpp	
database.o:Database.cpp Database.h
	g++ -c -std=c++11 Database.cpp -o database.o
sqlite3.o: sqlite3.c
	$(cc) -o $@ -c $^
clean:
	rm -f $(OBJ) mytunes
