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