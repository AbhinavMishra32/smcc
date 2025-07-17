# Detect operating system
UNAME_S := $(shell uname -s 2>/dev/null || echo Windows)

# Compiler and flags
CC = gcc
CFLAGS = -Wall -g -I./src

# OS-specific settings
ifeq ($(UNAME_S),Darwin)
    # macOS
    MKDIR = mkdir -p
    RM = rm -rf
    EXE_EXT = 
else ifeq ($(UNAME_S),Linux)
    # Linux
    MKDIR = mkdir -p
    RM = rm -rf
    EXE_EXT = 
else
    # Windows (MinGW/MSYS2/Git Bash)
    MKDIR = mkdir
    RM = rmdir /s /q
    EXE_EXT = .exe
endif

# Folders
SRC_DIR = src
BUILD_DIR = build

# Source files
SRCS = $(wildcard $(SRC_DIR)/*.c)

# Object files will be in build/, not src/
OBJS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))

# Executable name
TARGET = $(BUILD_DIR)/smcc$(EXE_EXT)

# Default target
all: $(TARGET)

debug: CFLAGS += -DDEBUG
debug: $(TARGET)

# Linking
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile each .c in src/ to .o in build/
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@$(MKDIR) $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build files
clean:
	@$(RM) $(BUILD_DIR)
