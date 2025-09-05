CC := g++
C_FLAGS := -std=c++23  -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror -pedantic-errors -I./headers/ -I./headers/plog/include
DEBUG_FLAGS := -O0 -ggdb
RELEASE_FLAGS := -O2 -DNDEBUG
.PHONY: clean all

# Build all for release
all: main do_print main_add get_name

# Individual release builds

main: main.o io.o
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $^ -o $@

do_print: do_print.o
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $< -o $@

main_add: main_add.o add.o
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $^ -o $@

main_do_something: main_do_something.o do_something.o
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $^ -o $@

double_split: main_double_split.o double_split.o 
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $^ -o $@

get_name: get_name.o
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $^ -o $@

# Debug builds
multiple_functions_debug: multiple_functions_debug.o
	$(CC) $(C_FLAGS) $(DEBUG_FLAGS) multiple_functions.o -o multiple_functions

do_print_debug: do_print_debug.o
	$(CC) $(C_FLAGS) $(DEBUG_FLAGS) do_print.o -o do_print

main_add_debug: main_add_debug.o
	$(CC) $(C_FLAGS) $(DEBUG_FLAGS) main_add.o -o main_add

# Release object files
%.o: %.cpp
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) -c $^

# Debug object files
multiple_functions_debug.o: multiple_functions.cpp
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) -c multiple_functions.cpp

do_print_debug.o: do_print.cpp
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) -c do_print.cpp

main_add_debug.o: main_add.cpp
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) -c main_add.cpp

clean:
	rm -rf *.o *.exe *.out
	rm -rf main
	rm -rf do_print
	rm -rf main_do_something
	rm -rf test
	rm -rf input
	rm -rf newline
	rm -rf struct
	rm -rf initialization
	rm -rf print_double
	rm -rf size_of
	rm -rf *.dSYM
	rm -rf literal
	rm -rf portable_exit_code
	rm -rf return
	rm -rf double_split
	rm -rf main_add
	rm -rf double
	rm -rf conditional_compilation
	rm -rf get_name
