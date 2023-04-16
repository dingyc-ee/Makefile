# *条件编译*

## 条件判断

|命令|描述|
|-|-|
|ifeq|判断是否相等，相等返回true，不相等返回false|
|ifneq|判断是否不相等，不相等返回true，相等返回false|
|ifdef|判断变量是否存在，存在返回true，不存在返回false|
|ifndef|判断是否不存在，不存在返回true，存在返回false|

*注意：没有elseif，如果要实现elseif，就要写嵌套。*

## ifeq

```mk
A := 123
RS1 :=

ifeq ($(A),123)
	RS1:=yes
else
	RS1:=yes
endif

all:
	@echo $(RS1)
```

*执行结果*

```sh
ding@linux:~/makefile/013$ make
yes
```

## ifdef

```mk
A := 123
RS1 :=
RS2 :=

# 使用变量的值
ifeq ($(A),123)
	RS1:=123
else
	RS1:="not 123"
endif

# 直接使用变量名，而不是变量的值
ifdef A
	RS2 := yes
else
	RS2 := no
endif

all:
	@echo $(RS1)
	@echo $(RS2)
```

*执行结果*

```sh
ding@linux:~/makefile/013$ make
123
yes
```

## make传参数

```mk
all:
	@echo $(FLAG)
```

*执行结果*

```sh
ding@linux:~/makefile/013$ make FLAG=123
123
```

## ifndef 传参数

```mk
ifndef FLAG
	FLAG=456
endif

all:
	@echo $(FLAG)
```

*执行结果*

```sh
ding@linux:~/makefile/013$ make
456
ding@linux:~/makefile/013$ make FLAG=123
123
```