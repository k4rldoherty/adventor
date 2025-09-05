# Makefile for building and running the project

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -I src/output

# Source files
SRC = src/adventor.c src/output/output.c

# Output executable
TARGET = bin/adventor

# Default target
all: $(TARGET)

# Build the target
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean up build files
clean:
	rm -f $(TARGET)
