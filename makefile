.PHONY: all clean

all: game tests
 
game: mkDir main.o game.o
	gcc build/src/main.o build/src/game.o -o bin/100_matches

main.o: src/main.c
	gcc -Wall -c src/main.c -o build/src/main.o

game.o: src/game.c
	gcc -Wall -c src/game.c -o build/src/game.o 

clean:
	rm -r build

mkDir:
	mkdir bin
	mkdir build
	mkdir build/src
	mkdir build/test

rmDir: 
	rm -r bin
	rm -r build


tests: build/test/main.o build/test/test_correct.o
	gcc build/test/main.o build/test/test_correct.o -o bin/tests

build/test/main.o: test/main.c
	gcc -I src -c test/main.c -o build/test/main.o

build/test/test_correct.o: test/test_correct.c
	gcc -I src -c test/test_correct.c -o build/test/test_correct.o 

