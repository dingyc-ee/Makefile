# *嵌套调用*

## 多个目标用统一规则

![](https://ding-aliyun.oss-cn-shenzhen.aliyuncs.com/s3c2440/5.6_multi_obj.png)

## 目录结构

```sh
ding@linux:~/makefile/012$ tree
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
├── makefile
└── makefile_head
```

文件说明：

1. 001目录下的Makefile，调用了公共头文件makefile_head
2. 002目录下的Makefile，也调用了公共头文件makefile_head
3. makefile，要同时调用001和002中的子Makefile来编译

## make -C 指定工作目录

```mk
# make -C 指定工作目录

all:
	make -C ./001
	make -C ./002

clean:
	make -C ./001 clean
	make -C ./002 clean
```

*测试结果*

```sh
ding@linux:~/makefile/012$ make
make -C ./001
make[1]: 进入目录“/home/ding/makefile/012/001”
gcc -c -o a.o a.c
gcc -c -o b.o b.c
gcc -c -o c.o c.c
gcc -o c a.o b.o c.o
make[1]: 离开目录“/home/ding/makefile/012/001”
make -C ./002
make[1]: 进入目录“/home/ding/makefile/012/002”
gcc -c -o x.o x.c
gcc -c -o y.o y.c
gcc -c -o z.o z.c
gcc -o z x.o y.o z.o
make[1]: 离开目录“/home/ding/makefile/012/002”
```

## 优化Makefile，采用变量指定所有目录

```mk
# make -C 指定工作目录

.PHONY:001 002 clean

DIR := 001 002

all:$(DIR)

# 多目标使用同一规则，等价于
# make -C 001
# make -C 002
$(DIR):
	make -C $@

clean:
	@echo $(shell for dir in $(DIR);do make -C $$dir clean;done)	# $$表示展开shell中的变量
```

*执行效果*

```mk
ding@linux:~/makefile/012$ make 
make -C 001
make[1]: 进入目录“/home/ding/makefile/012/001”
gcc -c -o a.o a.c
gcc -c -o b.o b.c
gcc -c -o c.o c.c
gcc -o c a.o b.o c.o
make[1]: 离开目录“/home/ding/makefile/012/001”
make -C 002
make[1]: 进入目录“/home/ding/makefile/012/002”
gcc -c -o x.o x.c
gcc -c -o y.o y.c
gcc -c -o z.o z.c
gcc -o z x.o y.o z.o
make[1]: 离开目录“/home/ding/makefile/012/002”
```