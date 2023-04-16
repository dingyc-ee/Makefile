# *静态链接库*

## 测试文件

`aTest.c`

```c
#include <stdio.h>
#include "aTest.h"

void func1(void)
{
    printf("func1\n");
}

void func2(void)
{
    printf("func2\n");
}
```

`aTest.h`

```c
#ifndef __A_TEST_H__
#define __A_TEST_H__

void func1(void);
void func2(void);

#endif /* __A_TEST_H__ */
```

## 编译静态库

`gcc -c -o aTest.o aTest.c aTest.o aTest.c`
`ar -r libaTest.a aTest.o`

```sh
# 编译.o文件
ding@linux:~/makefile/008$ gcc -c -o aTest.o aTest.c 
ding@linux:~/makefile/008$ ls
aTest.c  aTest.h  aTest.o  Makefile  test.c
# 编译静态库
ding@linux:~/makefile/008$ ar -r libaTest.a aTest.o 
ar: 正在创建 libaTest.a
```

## 使用静态库

`gcc -o test test.c -L . -laTest`

```sh
ding@linux:~/makefile/008$ gcc -o test test.c -L . -laTest
ding@linux:~/makefile/008$ ./test 
func1
func2
```

