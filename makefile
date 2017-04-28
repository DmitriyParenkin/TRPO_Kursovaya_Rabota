.PHONY: all clean


all: build/src/main.o build/src/gamehuman.o
	gcc build/src/main.o build/src/gamehuman.o -o bin/Game

build/src/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/gamehuman.o: src/gamehuman.c
	gcc -Wall -Werror -c src/gamehuman.c -o build/src/gamehuman.o

clean:
	rm -rf *.o *.exe


