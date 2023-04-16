# 公共
SOURCE=$(wildcard *.c)
OBJ=$(patsubst %.c,%.o,$(SOURCE))

# 默认TARGET
ifndef TARGET
TARGET:=test
endif

$(TARGET):$(OBJ)
	gcc -o $@ $^

%.o:%.c
	gcc -c -o $@ $<

.PHONY:clean
clean:
	rm -rf $(TARGET) $(OBJ)

.PHONY:show
show:
	@echo source_list:$(SOURCE)
	@echo obj_list:$(OBJ)