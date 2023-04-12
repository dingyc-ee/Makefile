# *伪目标与模式匹配*

## 伪目标 .PHONY:clean

*声明目标为伪目标后，makefile将不会判断目标是否存在，或该目标是否需要更新*

*当目录中已经存在clean文件时，`make clean`不会执行clean操作，而是判断clean文件没有更新，然后结束*

```mk
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

.PHONY:clean
clean:
	rm -rf $(OBJ) $(TARGET)
```

## 模式匹配 %目标:%依赖

## 目标和依赖相同部分，可用%来通配

## `%`与`*`的区别

*Makefile中的`%`标记和系统通配符`*`的区别在于，`*`是应用在系统中的，`%`是应用在这个Makefile文件中的*

```mk
OBJ = add.o sub.o mul.o main.o
TARGET = main

$(TARGET):$(OBJ)
	gcc $(OBJ) -o $@

%.o:%.c
	gcc -c $< -o $@

.PHONY:clean
clean:
	rm -rf $(OBJ) $(TARGET)
```

执行结果：

```sh
ding@linux:~/makefile/005$ make
gcc -c add.c -o add.o
gcc -c sub.c -o sub.o
gcc -c mul.c -o mul.o
gcc -c main.c -o main.o
gcc add.o sub.o mul.o main.o -o main
```

## 模式匹配 wildcard

*wildcard: 这个单词的中文意思就是通配符，那就很明显了*

*$(wildcard pattern1 ...)*

```mk
OBJ = add.o sub.o mul.o main.o
TARGET = main

$(TARGET):$(OBJ)
	gcc $(OBJ) -o $@

%.o:%.c
	gcc -c $< -o $@

.PHONY:clean
clean:
	rm -rf $(OBJ) $(TARGET)

.PHONY:show
# 打印当前目录下的所有.c .h文件
show:
	@echo $(wildcard *.c *.h)
```

*执行结果*

```sh
ding@linux:~/makefile/005$ make show
add.c main.c mul.c sub.c add.h mul.h sub.h
```

## 模式匹配 patsubst

*$(patsubst %.c, %.o, $(wildcard *.c))*

![](https://ding-aliyun.oss-cn-shenzhen.aliyuncs.com/s3c2440/5.3_patsubst.png)

```mk
# 获取所有.c文件，并替换为.o文件
OBJ = $(patsubst %.c, %.o, $(wildcard *.c))
TARGET = main

$(TARGET):$(OBJ)
	gcc $(OBJ) -o $@

%.o:%.c
	gcc -c $< -o $@

.PHONY:clean
clean:
	rm -rf $(OBJ) $(TARGET)

.PHONY:show
show:
	@echo $(wildcard *.c)
	@echo $(OBJ)
```

*执行结果*

```sh
ding@linux:~/makefile/005$ make show
add.c main.c mul.c sub.c
add.o main.o mul.o sub.o
```
