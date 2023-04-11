main:add.o sub.o mul.o
	gcc add.o sub.o mul.o main.c -o main

add.o:add.c
	gcc -c add.c -o add.o

sub.o:sub.c
	gcc -c sub.c -o sub.o

mul.o:mul.c
	gcc -c mul.c -o mul.o

clean:
	rm -rf main *.o