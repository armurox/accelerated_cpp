CC := g++
C_FLAGS := -std=c++23  -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror -pedantic-errors -I./headers/ -I./headers/plog/include
DEBUG_FLAGS := -O0 -ggdb
RELEASE_FLAGS := -O2 -DNDEBUG
.PHONY: clean all

# Build all for release
all: calculator

# Individual release builds

calculator: calculator.o compute.o io.o
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $^ -o $@

height: height.o compute.o io.o
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $^ -o $@

# Release object files
%.o: %.cpp
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) -c $^

clean:
	rm -rf *.o *.exe *.out
	rm -rf calculator
	rm -rf height
