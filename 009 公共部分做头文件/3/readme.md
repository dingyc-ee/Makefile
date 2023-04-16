# 公共部分做头文件

## Makefile赋值

Makefile中，都是先展开所有变量，再调用指令

= 赋值，但是用终值。就是不管变量调用写在赋值前还是赋值后，调用时都是取终值

:= 也是赋值，但只受当前行及之前的代码影响，而不会受后面的赋值影响

## 目录结构

```sh
ding@linux:~/makefile/009/1$ tree
├── 001
│   ├── a.c
│   ├── b.c
│   ├── c.c
│   └── Makefile
├── 002
│   ├── Makefile
│   ├── x.c
│   ├── y.c
│   └── z.c
└── makefile
```

### 文件介绍

1. 001目录下，包含3个.c文件和Makefile，Makefile中没有目标（使用公共Makefile默认目标）
2. 002目录下，也包含3个.c文件和Makefile，Makefile中没有目标（使用公共Makefile默认目标）
3. 此外，还有一个公共的makefile，实现对目的标赋值，源文件的查找，目标的编译

## 给TARGET默认值

### 公共makefile

```mk
# 公共
SOURCE=$(wildcard *.c)
OBJ=$(patsubst %.c,%.o,$(SOURCE))

# 默认TARGET
ifndef TARGET
TARGET:=test
endif

$(TARGET):$(OBJ)
	gcc -o $@ $^

%.o:%.c
	gcc -c -o $@ $<

.PHONY:clean
clean:
	rm -rf $(TARGET) $(OBJ)

.PHONY:show
show:
	@echo source_list:$(SOURCE)
	@echo obj_list:$(OBJ)
```

### 001 Makefile

```mk
include ../makefile
```

### 002 Makefile

```mk
include ../makefile
```

## 编译测试

```sh
ding@linux:~/makefile/009/1/001$ make
gcc -c -o a.o a.c
gcc -c -o b.o b.c
gcc -c -o c.o c.c
gcc -o test a.o b.o c.o
ding@linux:~/makefile/009/1/001$ ./test 
func1
func2
```