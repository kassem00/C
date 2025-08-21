FILES=read_files_io__with_Write.c


all:clean compile
	./a.out my-db.db
clean:
	if [ -f a.out ]; then rm a.out; fi; \
	if [ -f debug ]; then rm debug; fi
compile:
	gcc $(FILES);
debug:
	gcc $(FILES) -o debug -g 
