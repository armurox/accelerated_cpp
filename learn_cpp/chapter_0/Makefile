CC := g++
C_FLAGS := -std=c++23  -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror -pedantic-errors
DEBUG_FLAGS := -O0 -ggdb
RELEASE_FLAGS := -O2 -DNDEBUG
.PHONY: clean all

# Build all for release
all: example HelloWorld broccoli PrintStandard

# Individual release builds

example: example.o
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $< -o $@

HelloWorld: HelloWorld.o
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $< -o $@

broccoli: broccoli.o
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $< -o $@

PrintStandard: PrintStandard.o
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) $< -o $@


# Debug builds
example_debug: example_debug.o
	$(CC) $(C_FLAGS) $(DEBUG_FLAGS) example.o -o example

HelloWorld_debug: HelloWorld_debug.o
	$(CC) $(C_FLAGS) $(DEBUG_FLAGS) HelloWorld.o -o HelloWorld

broccoli_debug: broccoli_debug.o
	$(CC) $(C_FLAGS) $(DEBUG_FLAGS) broccoli.o -o broccoli

# Release object files
%.o: %.cpp
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) -c $<

# Debug object files
example_debug.o: example.cpp
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) -c example.cpp

HelloWorld_debug.o: HelloWorld.cpp
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) -c HelloWorld.cpp

broccoli_debug.o: broccoli.cpp
	$(CC) $(C_FLAGS) $(RELEASE_FLAGS) -c broccoli.cpp

clean:
	rm -rf *.o *.exe *.out
	rm -rf example
	rm -rf HelloWorld
	rm -rf broccoli
	rm -rf *.dSYM
