TARGET = main

# Các thư mục chứa file header (.h)
INCLUDE_DIRS = \
    -I./csvlib \
    -I./MCAL/Adc \
    -I./MCAL/Can \
    -I./MCAL/Dio \
    -I./MCAL/Pwm \
    -I./IOHWAB

# Danh sách các file nguồn
SOURCES_DIR = \
    . \
    csvlib \
    MCAL/Adc \
    MCAL/Can \
    MCAL/Dio \
    IOHWAB

SOURCES = $(foreach dir, $(SOURCES_DIR), $(wildcard $(dir)/*.c))
OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = $(INCLUDE_DIRS) -Wall -Wextra

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)
.PHONY: all run clean

