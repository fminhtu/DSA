# Find all sub-directory in current directory (including current folder)
DIR := $(shell find $(ROOT) -type d)

# Strip "./" from DIR
DIR := $(DIR:./%=%)

# Include directories
INC := $(foreach dir, $(DIR), $(addprefix -I, $(dir)))

# Source files
SRC := $(foreach dir, $(DIR), $(wildcard $(dir)/*.cpp))

# Object files
OBJ := $(patsubst %.cpp, build/%.o, $(SRC))

# Build directory
BUILD_DIR := $(foreach dir, $(DIR), $(addprefix build/, $(dir)))

# Instructions to build object files
build/%.o: %.cpp $(BUILD_DIR)
	g++ -g -std=c++14 $(INC) -c $< -o $@

# Build executive files
main: $(OBJ)
	g++ -g -std=c++11 $(OBJ) -o $@ -lpthread

# Make sure that only main will be created
.PHONY: all clean $(BUILD_DIR)
all: main
clean:
	rm -rf build main

# Create Build directories
$(BUILD_DIR):
	mkdir -p "$@"