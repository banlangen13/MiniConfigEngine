CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

SRC := $(wildcard src/*.c) main.c
OBJ := $(SRC:.c=.o)
TARGET = parser_engine

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: all
	./$(TARGET)

debug: CFLAGS += -g -DDEBUG
debug: clean all

clean:
	rm -f $(OBJ) $(TARGET)
