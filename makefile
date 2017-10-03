all: main

main: othello.o main.o game.o
  g++ -o main  othello.o main.o game.o 

main.o: main.cc game.h othello.h
  g++ -c main.cc game.h othello.h

game.o: game.cc game.h 
  g++ -c game.cc

othello.o: othello.cc game.h colors.h piece.h
  g++ -c othello.cc game.h colors.h piece.h

clean:
  rm *.o main
