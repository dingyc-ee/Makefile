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

1. 001目录下，包含3个.c文件和Makefile，Makefile中只有目标和依赖
2. 002目录下，也包含3个.c文件和Makefile，Makefile中只有目标和依赖
3. 此外，还有一个公共的makefile，真正实现对目标的编译

### 001 Makefile

```mk
TARGET=c
OBJ=a.o b.o c.o

include ../makefile
```

### 002 Makefile

```mk
TARGET=z
OBJ=x.o y.o z.o

include ../makefile
```

### 公共makefile

```mk
# 公共，实现对目标的编译
$(TARGET):$(OBJ)
	gcc -o $@ $^

%.o:%.c
	gcc -c -o $@ $<

.PHONY:clean
clean:
	rm -rf $(TARGET) $(OBJ)
```

## 实测结果

*编译001目录*

```sh
ding@linux:~/makefile/009/1/001$ make
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
gcc -o c x.o y.o z.o
```
