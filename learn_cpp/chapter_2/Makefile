CC := g++
C_FLAGS := -std=c++23  -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror -pedantic-errors
DEBUG_FLAGS := -O0 -ggdb
RELEASE_FLAGS := -O2 -DNDEBUG
.PHONY: clean all

# Build all for release
all: multiple_functions do_print double_legal get_name

# Individual release builds

multiple_functions: multiple_functions.o
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $< -o $@

do_print: do_print.o
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $< -o $@

double_legal: double_legal.o
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $< -o $@

get_name: get_name.o
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $< -o $@


# Debug builds
multiple_functions_debug: multiple_functions_debug.o
	$(CC) $(C_FLAGS) $(DEBUG_FLAGS) multiple_functions.o -o multiple_functions

do_print_debug: do_print_debug.o
	$(CC) $(C_FLAGS) $(DEBUG_FLAGS) do_print.o -o do_print

double_legal_debug: double_legal_debug.o
	$(CC) $(C_FLAGS) $(DEBUG_FLAGS) double_legal.o -o double_legal

# Release object files
%.o: %.cpp
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) -c $<

# Debug object files
multiple_functions_debug.o: multiple_functions.cpp
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) -c multiple_functions.cpp

do_print_debug.o: do_print.cpp
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) -c do_print.cpp

double_legal_debug.o: double_legal.cpp
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) -c double_legal.cpp

clean:
	rm -rf *.o *.exe *.out
	rm -rf multiple_functions
	rm -rf do_print
	rm -rf legal_foo_function
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
	rm -rf useless
	rm -rf double_legal
	rm -rf double
	rm -rf quiz
