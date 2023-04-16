# *公共部分做头文件*

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

1. 001目录下，包含3个.c文件和Makefile，Makefile中只有目标
2. 002目录下，也包含3个.c文件和Makefile，Makefile中只有目标
3. 此外，还有一个公共的makefile，实现对源文件的查找，目标的编译

### 001 Makefile

```mk
TARGET=c
include ../makefile
```

### 002 Makefile

```mk
TARGET=z
include ../makefile
```

### 公共makefile

```mk
# 公共
SOURCE=$(wildcard *.c)
OBJ=$(patsubst %.c,%.o,$(SOURCE))

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

## 实测结果

*编译001目录*

```sh
ding@linux:~/makefile/009/2/001$ make
gcc -c -o a.o a.c
gcc -c -o b.o b.c
gcc -c -o c.o c.c
gcc -o c a.o b.o c.o
```

*编译002目录*

```sh
ding@linux:~/makefile/009/1/002$ make
gcc -c -o x.o x.c
gcc -c -o y.o y.c
gcc -c -o z.o z.c
gcc -o z x.o y.o z.o
```
