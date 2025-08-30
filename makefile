TARGET = main

# Các thư mục chứa file header (.h)
INCLUDE_DIRS = \
    -I./       \
    -I./csvlib \
    -I./MCAL/Adc \
    -I./MCAL/Can \
    -I./MCAL/Dio \
    -I./MCAL/Pwm \
    -I./IOHWAB   \
    -I./CAN_STACK/Can_Cfg \
    -I./CAN_STACK/CanIf \
    -I./CAN_STACK/Com \
    -I./CAN_STACK/PduR \

# Danh sách các file nguồn
SOURCES_DIR = \
    . \
    csvlib   \
    MCAL/Adc \
    MCAL/Can \
    MCAL/Dio \
    MCAL/Pwm \
    IOHWAB   \
    CAN_STACK/Can_Cfg \
    CAN_STACK/CanIf \
    CAN_STACK/Com \
    CAN_STACK/PduR \


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

