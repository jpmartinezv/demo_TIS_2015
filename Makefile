all: compile

compile:
	g++ -c Box.cpp
	g++ -c main.cpp
	g++ -o demo_app main.o Box.o

run:
	./demo_app

clear:
	rm Box.o main.o demo_app
