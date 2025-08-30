# Tên file exe
TARGET = main

# Các thư mục chứa file header (.h)
INCLUDE_DIRS = \
    -I./csvlib \
    -I./MCAL/Adc \
    -I./MCAL/Can \
    -I./MCAL/Dio \
    -I./MCAL/Pwm \
    -I./IOHWAB

# Danh sách các thư mục chứa file .c
SOURCES_DIR = \
    . \
    csvlib \
    MCAL/Adc \
    MCAL/Can \
    MCAL/Dio \
    MCAL/Pwm \
    IOHWAB

# Tìm tất cả file .c trong SOURCES_DIR
SOURCES = $(foreach dir, $(SOURCES_DIR), $(wildcard $(dir)/*.c))

# Danh sách file .o
OBJECTS_UNIX = $(SOURCES:.c=.o)
OBJECTS = $(subst /,\, $(OBJECTS_UNIX))

CC = gcc
CFLAGS = $(INCLUDE_DIRS) -Wall -Wextra

# Rule mặc định: build chương trình
all: $(TARGET).exe

# Link các object thành exe
$(TARGET).exe: $(OBJECTS_UNIX)
	$(CC) $^ -o $@

# Biên dịch từng file .c thành .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Chạy chương trình
run: $(TARGET).exe
	./$(TARGET).exe

# Xoá file build (Windows dùng \)
clean:
	-del /F /Q $(OBJECTS) $(TARGET).exe 2>nul || exit 0

.PHONY: all run clean
