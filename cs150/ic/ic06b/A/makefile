EXE = cecho
CXX = @g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror -O0 -ggdb3 -fsanitize=signed-integer-overflow -fsanitize=undefined -Wno-unused-parameter -Wno-unused-variable -Wshadow
LIBS = $(EXE)
SRC = $(EXE).cpp
OBJS = $(EXE).o

$(EXE): $(OBJS) makefile
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# 1. input from stdin, output to stdout
run: $(EXE)
	./$(EXE)

# 2. input from alice-txt, output to stdout
read-alice: $(EXE)
	./$(EXE)

# 3. input from alice.txt, output to toc.txt
write-toc: $(EXE)
	./$(EXE)


# Remove object files from folder
clean:
	rm -f core $(EXE) *.o
