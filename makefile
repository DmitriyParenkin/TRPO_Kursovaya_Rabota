.PHONY: all clean

all: game	
 
game: mkDir main.o game.o
	gcc build/main.o build/game.o -o bin/100_matches

main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o

game.o: src/game.c
	gcc -Wall -Werror -c src/game.c -o build/game.o

clean:
	rm -rf build/*.o

mkDir:
	mkdir bin
	mkdir build

rmDir: 
	rm -r bin
	rm -r build 