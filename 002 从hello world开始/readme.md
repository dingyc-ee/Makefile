# *从helloWorld开始*

## 基本语法

Makefile基本语法

目标:依赖

Tab 命令

目标:一般是指要编译的目标，也可以是一个动作

依赖:指执行当前目标所要依赖的选项，包括其他目标、某个具体文件或库等，一个目标可以有多个依赖

命令:该目标下要执行的具体命令，可以没有，也可以有多条。多条时，每条命令一行

### 1 单个目标

```mk
a:
	echo "hello world"
```

```sh
ding@linux:~/makefile/002$ make
echo "hello world"
hello world
```

### 2 多个目标

```mk
a:
	echo "hello world"

b:
	echo "hello b"
```

*采用make 目标的方式来编译，默认会编译首个目标*

```sh
# 指定编译目标b
ding@linux:~/makefile/002$ make b
echo "hello b"
hello b
# 默认编译Makefile中的首个目标
ding@linux:~/makefile/002$ make
echo "hello world"
hello world
```

### 3 多个依赖

*按照依赖顺序，逐个执行依赖的动作*

```mk
a:b c
	@echo "hello world"

b:
	@echo "hello b"

c:
	@echo "hello c"
```

```sh
ding@linux:~/makefile/002$ make
hello b
hello c
hello world
```

### 4 多条命令

```mk
a:
	@echo "before make"
	@ls
    # 执行gcc编译
	gcc main.c
	@echo "after make"
	@ls
```

```sh
ding@linux:~/makefile/002$ make
before make
main.c  Makefile
gcc main.c
after make
a.out  main.c  Makefile
```

### 5 clean

*make clean: 其实就是执行clean目标，跟2 多个目标没有区别*

```mk
a:
	@echo "before make"
	@ls
	gcc main.c
	@echo "after make"
	@ls

clean:
	rm -rf a.out
	@echo "make clean complete!"
```

```sh
ding@linux:~/makefile/002$ make clean 
rm -rf a.out
make clean complete!
```

### 6 常用选项

make [-f file] [options] [target]

Make默认在当前目录中寻找GNUmakefile, makefile, Makefile的文件作为make的输入文件

-f 可以指定除上述文件名之外的文件作为输入文件

-v 显示版本号

-n 值输出命令，但并不执行，一般用来测试

```sh
ding@linux:~/makefile/002$ make -n
echo "Start build..."
gcc main.c
echo "Build ok!"
ls
```

-s 只执行命令，但不显示具体命令，此处可在命令中用@符号抑制命令输出

-w 显示执行前执行后的路径

```sh
ding@linux:~/makefile/002$ make -w
make: 进入目录“/home/ding/makefile/002”
Start build...
gcc main.c
Build ok!
a.out  main.c  Makefile
make: 离开目录“/home/ding/makefile/002”
```

-C dir 指定makefile所在的目录

```sh
ding@linux:~$ make -C ./makefile/002/
make: 进入目录“/home/ding/makefile/002”
Start build...
gcc main.c
Build ok!
a.out  main.c  Makefile
make: 离开目录“/home/ding/makefile/002”
```


