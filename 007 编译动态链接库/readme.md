# *动态链接库*

## 命名规则

![](https://ding-aliyun.oss-cn-shenzhen.aliyuncs.com/s3c2440/5.5_shared_lib.png)

## 动态库编译

### 源代码

`SoTest.c`

```c
#include <stdio.h>
#include "SoTest.h"

void func1(void)
{
    printf("func1\n");
}

void func2(void)
{
    printf("func2\n");
}
```

`SoTest.h`

```c
#ifndef __SO_TEST_H__
#define __SO_TEST_H__

void func1(void);
void func2(void);

#endif /* __SO_TEST_H__ */
```

*如何编译动态链接库？*

**gcc -shared -fPIC -o libSoTest.so SoTest.c**

*解释说明*

```
-shared : 编译成动态库
-fPIC : 产生位置无关码
libSoTest.so : 动态库名必须满足 `lib+源文件名+.so`
-l : 指定动态库，如`-lSoTest`实际上会指定`libSotest.so库文件`
-I : 指定头文件目录，默认当前目录
-L : 手动指定库文件搜索目录，默认只链接共享目录
```

```sh
# 编译动态库
ding@linux:~/makefile/007$ gcc -shared -fPIC -o libSoTest.so SoTest.c 
ding@linux:~/makefile/007$ ls
libSoTest.so  Makefile  SoTest.c  SoTest.h  test.c
# 查看动态库类型
ding@linux:~/makefile/007$ file libSoTest.so 
libSoTest.so: ELF 64-bit LSB shared object, x86-64, version 1 (SYSV), dynamically linked, BuildID[sha1]=f10b487ef3969a3f90fd3b8201bb382f988abca0, not stripped
```

## 动态库使用

`测试程序test.c`

```c
#include <stdio.h>
#include "SoTest.h"

int main(int argc, char *argv[])
{
    func1();
    func2();

    return 0;
}
```

编译测试程序，使其链接`.so库文件`

gcc -o test test.c -L . -lSoTest

1. -L .   指定链接路径为当前路径
2. -lSoTest  指定链接libSoTest.so文件

```sh
ding@linux:~/makefile/007$ gcc -o test test.c -L . -lSoTest
ding@linux:~/makefile/007$ ls
libSoTest.so  Makefile  SoTest.c  SoTest.h  test  test.c
```

## 动态库发布

*为什么要执行动态库发布？*

### 直接运行测试程序

```sh
ding@linux:~/makefile/007$ ls
libSoTest.so  Makefile  SoTest.c  SoTest.h  test  test.c
ding@linux:~/makefile/007$ file test
test: ELF 64-bit LSB pie executable, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, BuildID[sha1]=bc92281abae2f43ce119ac4cd56e7f271a8a87e5, for GNU/Linux 3.2.0, not stripped
# 运行结果报错：找不到libSoTest.so文件
ding@linux:~/makefile/007$ ./test 
./test: error while loading shared libraries: libSoTest.so: cannot open shared object file: No such file or directory
```

可以看到，当前路径下明明就有libSoTest.so文件，可执行测试程序时却报错找不到，为什么？

原因是linux系统把`/lib`和`/usr/lib`两个目录作为默认的库搜索路径，所以使用这两个目录中的库是不需要进行设置搜索路径就可以使用，而其他路径则需要设置`LD_LIBRARY_PATH`变量来实现。

### 发布方式1: 把so文件复制到系统库文件目录下

```sh
ding@linux:~/makefile/007$ sudo cp libSoTest.so /usr/lib
[sudo] ding 的密码： 
ding@linux:~/makefile/007$ ./test 
func1
func2
```

可以看到，测试程序正常运行了

### 发布方式2：在`LD_LIBRARY_PATH`中添加路径

`export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/ding/makefile/007`

*实测结果*

```sh
ding@linux:~/makefile/007$ sudo rm /usr/lib/libSoTest.so 
ding@linux:~/makefile/007$ pwd
/home/ding/makefile/007
ding@linux:~/makefile/007$ export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/ding/makefile/007
ding@linux:~/makefile/007$ echo $LD_LIBRARY_PATH
:/home/ding/makefile/007
ding@linux:~/makefile/007$ ./test 
func1
func2
```

## Makefile

```mk
test:test.o libSoTest.so
	gcc -o $@ $< -L . -lSoTest
	@cp libSoTest.so /usr/lib	# 发布动态库

%.o:%.c
	gcc -c -o $@ $<

lib%.so:%.o
	gcc -shared -fPIC -o $@ $<

clean:
	rm -rf test *.o *.so
```