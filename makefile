.PHONY: all clean


all: build/main.o build/gamehuman.o
	gcc build/main.o build/gamehuman.o -o bin/Game

build/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o

build/gamehuman.o: src/gamehuman.c
	gcc -Wall -Werror -c src/gamehuman.c -o build/gamehuman.o

clean:
	rm -rf *.o *.exe


