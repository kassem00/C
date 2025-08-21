
all: build 

build:
	gcc get.c -o get

clean:
	rm -f a.out
	rm -f get.gdb
debug:
	gcc get.c -g -o get.gdb
	gdb get.gdb

