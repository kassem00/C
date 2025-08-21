TARGET=bin/view
SRC=$(wildcard src/*.c)
OPJ=$(patsubst src/%.c, obj/%.o, $(SRC))

FILES=read_files_io__with_Write.c

run: clean default
	./$(TARGET) 
	./$(TARGET) -f asd.db


all:clean compile
	./a.out my-db.db
default:
	./$(TARGET) 


clean:
	rm -f obj/*.o
	rm -f bin/*.o
	rm -f *.db

$(TARGET): $(OPJ)
	gcc -o $@ $?

obj/%.o: src/%.c
  gcc -c $< -o $@ -Iinclude

debug:
	gcc $(FILES) -o debug -g 


