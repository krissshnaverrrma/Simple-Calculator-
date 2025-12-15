CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinclude -lm 
SRCS = src/main.c src/calculator_operations.c
OBJS = $(patsubst %.c, bin/%.o, $(notdir $(SRCS))) 
TARGET = bin/calculator
all: $(TARGET)
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@ $(CFLAGS)
bin/%.o: src/%.c include/calculator.h
	$(CC) $(CFLAGS) -c $< -o $@
install: $(TARGET)
	@echo "Calculator successfully built at: ./$(TARGET)"
clean:
	rm -f $(OBJS) $(TARGET)
	@echo "Cleaned up compiled files."
run: $(TARGET)
	./$(TARGET)
.PHONY: all clean run install