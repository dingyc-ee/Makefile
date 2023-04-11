# *编译流程详解*

## 代码

`add.c add.h`
```c
#include "add.h"

int add(int a, int b)
{
    return a + b;
}
```

`sub.c sub.h`
```c
#include "sub.h"

int sub(int a, int b)
{
    return a - b;
}
```

`mul.c mul.h`
```c
#include "mul.h"

int mul(int a, int b)
{
    return a * b;
}
```

## Makefile

### 1. 最简单的Makefile

```mk
main:
	gcc add.c sub.c mul.c main.c -o main

clean:
	rm -rf a.out
```

*执行结果*

```sh
ding@linux:~/makefile/003$ make
gcc add.c sub.c mul.c main.c -o main
```

### 2. 文件单独编译，保证只编译有改动的文件

```mk
main:add.o sub.o mul.o
	gcc add.o sub.o mul.o main.c -o main

add.o:add.c
	gcc -c add.c -o add.o

sub.o:sub.c
	gcc -c sub.c -o sub.o

mul.o:mul.c
	gcc -c mul.c -o mul.o

clean:
	rm -rf main
```

*编译结果*

```sh
ding@linux:~/makefile/003$ make
gcc -c add.c -o add.o
gcc -c sub.c -o sub.o
gcc -c mul.c -o mul.o
gcc add.o sub.o mul.o main.c -o main
```