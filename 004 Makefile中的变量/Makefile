OBJ = add.o sub.o mul.o main.o
TARGET = main

$(TARGET):$(OBJ)
	gcc $(OBJ) -o $@

add.o:add.c
	gcc -c $^ -o $@

sub.o:sub.c
	gcc -c $^ -o $@

mul.o:mul.c
	gcc -c $^ -o $@

main.o:main.c
	gcc -c $^ -o $@

clean:
	rm -rf $(OBJ) $(TARGET)