CC := g++
C_FLAGS := -std=c++23  -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror -pedantic-errors
DEBUG_FLAGS := -O0 -ggdb
RELEASE_FLAGS := -O2 -DNDEBUG
.PHONY: clean all

# Build all for release
all: literals hello_world variable get_name

# Individual release builds

literals: literals.o
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $< -o $@

hello_world: hello_world.o
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $< -o $@

variable: variable.o
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $< -o $@

get_name: get_name.o
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $< -o $@


# Debug builds
literals_debug: literals_debug.o
	$(CC) $(C_FLAGS) $(DEBUG_FLAGS) literals.o -o literals

hello_world_debug: hello_world_debug.o
	$(CC) $(C_FLAGS) $(DEBUG_FLAGS) hello_world.o -o hello_world

variable_debug: variable_debug.o
	$(CC) $(C_FLAGS) $(DEBUG_FLAGS) variable.o -o variable

# Release object files
%.o: %.cpp
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) -c $<

# Debug object files
literals_debug.o: literals.cpp
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) -c literals.cpp

hello_world_debug.o: hello_world.cpp
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) -c hello_world.cpp

variable_debug.o: variable.cpp
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) -c variable.cpp

clean:
	rm -rf *.o *.exe *.out
	rm -rf literals
	rm -rf hello_world
	rm -rf variable
	rm -rf test
	rm -rf input
	rm -rf newline
	rm -rf struct
	rm -rf initialization
	rm -rf get_name
	rm -rf size_of
	rm -rf *.dSYM
	rm -rf literal
	rm -rf operator
	rm -rf return
	rm -rf useless
	rm -rf expressions
	rm -rf double
	rm -rf quiz
