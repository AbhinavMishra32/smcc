# Compiler and flags
CC = gcc
CFLAGS = -Wall -g -I./src

# Folders
SRC_DIR = src
BUILD_DIR = build

# Source files
SRCS = $(wildcard $(SRC_DIR)/*.c)

# Object files will be in build/, not src/
OBJS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))

# Executable name
TARGET = $(BUILD_DIR)/smcc

# Default target
all: $(TARGET)

debug: CFLAGS += -DDEBUG
debug: $(TARGET)

# Linking
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile each .c in src/ to .o in build/
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@if not exist $(BUILD_DIR) mkdir $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build files
clean:
	@if exist $(BUILD_DIR) rmdir /s /q $(BUILD_DIR)
