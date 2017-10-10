CFLAGS=-Wall
all:combine docs
combine: main.o game.o othello.o zip
	g++ -o combine main.o game.o othello.o
main.o: main.cc
	g++ -c main.cc
game.o: game.h game.cc
	g++ -c game.cc
othello.o: othello.h othello.cc colors.h piece.h
	g++ -c othello.cc
clean:
	rm -f *.o main *~
zip:
	zip -r hw6.zip ~/cs3560/a6/a6test
docs:
	doxygen ./othello.cc game.cc main.cc
