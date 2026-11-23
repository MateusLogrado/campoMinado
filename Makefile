CC = gcc
CFLAGS  = -Wall -Wextra -g -Iinclude -MMD -MP
TARGET = campoMinado
BUILD = build

SRCS = $(wildcard *.c src/*.c )
OBJS = $(patsubst %.c, $(BUILD)/%.o, $(SRCS))
DEPS = $(OBJS:.o=.d)

all: $(TARGET)

$(TARGET): $(OBJS)
	    $(CC) $(CFLAGS) -o $@ $^

$(BUILD)/%.o: %.c
		@mkdir -p $(dir $@)
		$(CC) $(CFLAGS) -c $< -o $@

-include $(DEPS)
        
clean:
	    rm -rf $(BUILD)

.PHONY: all clean