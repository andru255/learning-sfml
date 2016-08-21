all: demo

demo: generate compile

compile: generate
	g++ main.o -o build -lsfml-graphics -lsfml-window -lsfml-system

generate:
	g++ -c main.cpp
