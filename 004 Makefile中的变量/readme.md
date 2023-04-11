# *makefile中的变量*

## 系统常量(可用make -p查看)

```sh
make -p
# GNU Make 4.3
# 为 x86_64-pc-linux-gnu 编译
# Copyright (C) 1988-2020 Free Software Foundation, Inc.
# 许可证：GPLv3+：GNU 通用公共许可证第 3 版或更新版本<http://gnu.org/licenses/gpl.html>。
# 本软件是自由软件：您可以自由修改和重新发布它。
# 在法律允许的范围内没有其他保证。

# make 数据基础，打印在 Tue Apr 11 23:21:18 2023

# 变量

# 环境
SSH_TTY = /dev/pts/0
# 默认
PREPROCESS.S = $(CC) -E $(CPPFLAGS)
# 默认
COMPILE.m = $(OBJC) $(OBJCFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c
# 默认
ARFLAGS = rv
# 默认
AS = as
# 默认
AR = ar
# 环境
CLION_PROPERTIES = /home/ding/.cache/JetBrains/RemoteDev-CL/_home_ding/pid.2361.temp.remote-dev.properties
# 默认
OBJC = cc
# 默认
LINK.S = $(CC) $(ASFLAGS) $(CPPFLAGS) $(LDFLAGS) $(TARGET_MACH)
# 默认
LINK.s = $(CC) $(ASFLAGS) $(LDFLAGS) $(TARGET_MACH)
# 默认
MAKE_COMMAND := make
# 自动
@D = $(patsubst %/,%,$(dir $@))
# 默认
COFLAGS = 
# 默认
COMPILE.mod = $(M2C) $(M2FLAGS) $(MODFLAGS) $(TARGET_ARCH)
# 默认
.VARIABLES := 
# 环境
PWD = /home/ding/makefile/003
# 自动
%D = $(patsubst %/,%,$(dir $%))
# 环境
XDG_DATA_DIRS = /usr/share/gnome:/usr/local/share:/usr/share:/var/lib/snapd/desktop
# 默认
LINK.o = $(CC) $(LDFLAGS) $(TARGET_ARCH)
# 环境
OLDPWD = /home/ding/makefile
# 默认
TEXI2DVI = texi2dvi
# 自动
^D = $(patsubst %/,%,$(dir $^))
# 自动
%F = $(notdir $%)
# 默认
LEX.l = $(LEX) $(LFLAGS) -t
# 环境
LANG = zh_CN.UTF-8
# 默认
.LOADED := 
# 默认
.INCLUDE_DIRS = /usr/local/include /usr/include /usr/include
# 默认
COMPILE.c = $(CC) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c
# makefile
MAKEFLAGS = p
# 默认
LINK.f = $(FC) $(FFLAGS) $(LDFLAGS) $(TARGET_ARCH)
# 默认
TANGLE = tangle
# makefile
CURDIR := /home/ding/makefile/003
# 默认
PREPROCESS.F = $(FC) $(FFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -F
# 环境
LESSOPEN = | /usr/bin/lesspipe %s
# 自动
*D = $(patsubst %/,%,$(dir $*))
# 环境
MFLAGS = -p
# 默认
COMPILE.p = $(PC) $(PFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c
# 默认
.SHELLFLAGS := -c
# 默认
M2C = m2c
# 默认
COMPILE.cpp = $(COMPILE.cc)
# 默认
TEX = tex
# 自动
+D = $(patsubst %/,%,$(dir $+))
# makefile (从“Makefile”，行 1)
MAKEFILE_LIST := Makefile
# 默认
F77FLAGS = $(FFLAGS)
# 自动
@F = $(notdir $@)
# 环境
REMOTE_DEV_LAUNCHER_NAME_FOR_USAGE = remote-dev-server.sh
# 环境
XDG_SESSION_TYPE = tty
# 自动
?D = $(patsubst %/,%,$(dir $?))
# 默认
COMPILE.def = $(M2C) $(M2FLAGS) $(DEFFLAGS) $(TARGET_ARCH)
# 默认
CTANGLE = ctangle
# 环境
CLION_VM_OPTIONS = /home/ding/.cache/JetBrains/RemoteDev-CL/_home_ding/pid.2361.temp.vmoptions
# 自动
*F = $(notdir $*)
# 环境
DBUS_SESSION_BUS_ADDRESS = unix:path=/run/user/1000/bus
# 自动
<D = $(patsubst %/,%,$(dir $<))
# 默认
COMPILE.C = $(COMPILE.cc)
# 默认
YACC.m = $(YACC) $(YFLAGS)
# 默认
LINK.C = $(LINK.cc)
# 默认
MAKE_HOST := x86_64-pc-linux-gnu
# 默认
LINK.c = $(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(TARGET_ARCH)
# makefile
SHELL = /bin/sh
# 默认
LINK.F = $(FC) $(FFLAGS) $(CPPFLAGS) $(LDFLAGS) $(TARGET_ARCH)
# 环境
SHLVL = 2
# 环境
MAKELEVEL := 0
# 默认
MAKE = $(MAKE_COMMAND)
# 默认
FC = f77
# 环境
PATH = /usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/usr/local/arm/gcc-linaro-4.9.4-2017.01-x86_64_arm-linux-gnueabihf/bin:/usr/local/arm/gcc-3.4.5-glibc-2.3.6/bin
# 默认
LINT = lint
# 默认
PC = pc
# 默认
MAKEFILES := 
# 环境
LANGUAGE = zh_CN:zh
# 环境
MOTD_SHOWN = pam
# 自动
^F = $(notdir $^)
# 默认
LEX.m = $(LEX) $(LFLAGS) -t
# 默认
.LIBPATTERNS = lib%.so lib%.a
# 环境
SSH_CLIENT = 192.168.75.1 23939 22
# 默认
CPP = $(CC) -E
# 默认
LINK.cc = $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) $(TARGET_ARCH)
# 默认
CHECKOUT,v = +$(if $(wildcard $@),,$(CO) $(COFLAGS) $< $@)
# 默认
COMPILE.f = $(FC) $(FFLAGS) $(TARGET_ARCH) -c
# 默认
COMPILE.r = $(FC) $(FFLAGS) $(RFLAGS) $(TARGET_ARCH) -c
# 环境
LESSCLOSE = /usr/bin/lesspipe %s %s
# 默认
COMPILE.S = $(CC) $(ASFLAGS) $(CPPFLAGS) $(TARGET_MACH) -c
# 自动
?F = $(notdir $?)
# 默认
GET = get
# 默认
LINK.r = $(FC) $(FFLAGS) $(RFLAGS) $(LDFLAGS) $(TARGET_ARCH)
# 环境
LS_COLORS = rs=0:di=01;34:ln=01;36:mh=00:pi=40;33:so=01;35:do=01;35:bd=40;33;01:cd=40;33;01:or=40;31;01:mi=00:su=37;41:sg=30;43:ca=30;41:tw=30;42:ow=34;42:st=37;44:ex=01;32:*.tar=01;31:*.tgz=01;31:*.arc=01;31:*.arj=01;31:*.taz=01;31:*.lha=01;31:*.lz4=01;31:*.lzh=01;31:*.lzma=01;31:*.tlz=01;31:*.txz=01;31:*.tzo=01;31:*.t7z=01;31:*.zip=01;31:*.z=01;31:*.dz=01;31:*.gz=01;31:*.lrz=01;31:*.lz=01;31:*.lzo=01;31:*.xz=01;31:*.zst=01;31:*.tzst=01;31:*.bz2=01;31:*.bz=01;31:*.tbz=01;31:*.tbz2=01;31:*.tz=01;31:*.deb=01;31:*.rpm=01;31:*.jar=01;31:*.war=01;31:*.ear=01;31:*.sar=01;31:*.rar=01;31:*.alz=01;31:*.ace=01;31:*.zoo=01;31:*.cpio=01;31:*.7z=01;31:*.rz=01;31:*.cab=01;31:*.wim=01;31:*.swm=01;31:*.dwm=01;31:*.esd=01;31:*.jpg=01;35:*.jpeg=01;35:*.mjpg=01;35:*.mjpeg=01;35:*.gif=01;35:*.bmp=01;35:*.pbm=01;35:*.pgm=01;35:*.ppm=01;35:*.tga=01;35:*.xbm=01;35:*.xpm=01;35:*.tif=01;35:*.tiff=01;35:*.png=01;35:*.svg=01;35:*.svgz=01;35:*.mng=01;35:*.pcx=01;35:*.mov=01;35:*.mpg=01;35:*.mpeg=01;35:*.m2v=01;35:*.mkv=01;35:*.webm=01;35:*.webp=01;35:*.ogm=01;35:*.mp4=01;35:*.m4v=01;35:*.mp4v=01;35:*.vob=01;35:*.qt=01;35:*.nuv=01;35:*.wmv=01;35:*.asf=01;35:*.rm=01;35:*.rmvb=01;35:*.flc=01;35:*.avi=01;35:*.fli=01;35:*.flv=01;35:*.gl=01;35:*.dl=01;35:*.xcf=01;35:*.xwd=01;35:*.yuv=01;35:*.cgm=01;35:*.emf=01;35:*.ogv=01;35:*.ogx=01;35:*.aac=00;36:*.au=00;36:*.flac=00;36:*.m4a=00;36:*.mid=00;36:*.midi=00;36:*.mka=00;36:*.mp3=00;36:*.mpc=00;36:*.ogg=00;36:*.ra=00;36:*.wav=00;36:*.oga=00;36:*.opus=00;36:*.spx=00;36:*.xspf=00;36:
# 自动
+F = $(notdir $+)
# 默认
MAKEINFO = makeinfo
# “override”指令
GNUMAKEFLAGS := 
# 默认
PREPROCESS.r = $(FC) $(FFLAGS) $(RFLAGS) $(TARGET_ARCH) -F
# 默认
LINK.m = $(OBJC) $(OBJCFLAGS) $(CPPFLAGS) $(LDFLAGS) $(TARGET_ARCH)
# 环境
LOGNAME = ding
# 默认
LINK.p = $(PC) $(PFLAGS) $(CPPFLAGS) $(LDFLAGS) $(TARGET_ARCH)
# 默认
YACC = yacc
# makefile
.DEFAULT_GOAL := main
# 默认
RM = rm -f
# 默认
WEAVE = weave
# 环境
USER = ding
# 环境
TERMINAL_EMULATOR = JetBrains-JediTerm
# 默认
MAKE_VERSION := 4.3
# 默认
F77 = $(FC)
# 环境
TERM_SESSION_ID = df15920c-d2c2-4874-9bb6-af2311eacbbc
# 默认
CWEAVE = cweave
# 环境
_ = /usr/bin/make
# 默认
YACC.y = $(YACC) $(YFLAGS)
# 默认
LINK.cpp = $(LINK.cc)
# 默认
CO = co
# 环境
XDG_RUNTIME_DIR = /run/user/1000
# 默认
OUTPUT_OPTION = -o $@
# 默认
COMPILE.s = $(AS) $(ASFLAGS) $(TARGET_MACH)
# 默认
MAKE_TERMERR := /dev/pts/0
# 环境
XDG_SESSION_CLASS = user
# 环境
HOME = /home/ding
# 环境
CLION_JDK = /home/ding/.cache/JetBrains/RemoteDev-CL/_home_ding/pid.2361.temp.jbr
# 默认
LEX = lex
# 环境
IDEA_RESTART_VIA_EXIT_CODE = 88
# 环境
TERM = xterm-256color
# 环境
XDG_SESSION_ID = 5
# 默认
LINT.c = $(LINT) $(LINTFLAGS) $(CPPFLAGS) $(TARGET_ARCH)
# 默认
COMPILE.F = $(FC) $(FFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c
# 默认
.RECIPEPREFIX := 
# 自动
<F = $(notdir $<)
# 默认
SUFFIXES := .out .a .ln .o .c .cc .C .cpp .p .f .F .m .r .y .l .ym .yl .s .S .mod .sym .def .h .info .dvi .tex .texinfo .texi .txinfo .w .ch .web .sh .elc .el
# 默认
LD = ld
# 默认
.FEATURES := target-specific order-only second-expansion else-if shortest-stem undefine oneshell nocomment grouped-target extra-prereqs archives jobserver output-sync check-symlink load
# 默认
CXX = g++
# 默认
CC = cc
# 默认
COMPILE.cc = $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c
# 环境
SSH_CONNECTION = 192.168.75.1 23939 192.168.75.128 22
```

## 自定义变量

定义： 变量名=变量

使用： $(变量名) 或 ${变量名}

### 1. 003中的Makefile

```mk
main:add.o sub.o mul.o
	gcc add.o sub.o mul.o main.c -o main

add.o:add.c
	gcc -c add.c -o add.o

sub.o:sub.c
	gcc -c sub.c -o sub.o

mul.o:mul.c
	gcc -c mul.c -o mul.o

clean:
	rm -rf main *.o
```

### 2. 使用自定义变量的Makefile

```mk
OBJ = add.o sub.o mul.o main.o
TARGET = main

$(TARGET):$(OBJ)
	gcc $(OBJ) -o $(TARGET)

add.o:add.c
	gcc -c add.c -o add.o

sub.o:sub.c
	gcc -c sub.c -o sub.o

mul.o:mul.c
	gcc -c mul.c -o mul.o

main.o:main.c
	gcc -c main.c -o main.o

clean:
	rm -rf *.o $(TARGET)
```

*测试结果*

```sh
ding@linux:~/makefile/004$ make
gcc -c add.c -o add.o
gcc -c sub.c -o sub.o
gcc -c mul.c -o mul.o
gcc add.o sub.o mul.o main.c -o main
```

## 系统变量

$@ 目标文件

$< 第1个依赖文件

$^ 所有依赖文件

### 使用自定义+系统变量的Makefile

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

clean:
	rm -rf $(OBJ) $(TARGET)
```

*测试结果*

```sh
# 编译
ding@linux:~/makefile/004$ make
gcc -c add.c -o add.o
gcc -c sub.c -o sub.o
gcc -c mul.c -o mul.o
gcc -c main.c -o main.o
gcc add.o sub.o mul.o main.o -o main

# 清除
ding@linux:~/makefile/004$ make clean
rm -rf add.o sub.o mul.o main.o main
```