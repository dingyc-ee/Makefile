# *调用shell命令*

## $(shell cmd)

## 实际测试

```sh
A := $(shell ls)
B := $(shell pwd)

a:
	@echo $(A)
	@echo $(B)
```

*测试结果*

```sh
ding@linux:~/makefile/011$ make
Makefile
/home/ding/makefile/011
```