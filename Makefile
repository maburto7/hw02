# please write Makefile here

# please write Makefile here

# Compiler
CXX=g++

# Object files used by both problem1 and problem2
OBJS=matrix.o gen_number.o post_process.o print_menu.o

//All rule executable
all: problem1 problem2

//Problem2 executable
problem2: problem2_main.cpp $(OBJS)
	$(CXX) problem2_main.cpp -o $@ $(OBJS)

//Problem 1 executable
problem1: problem1_main.cpp $(OBJS)
	$(CXX) problem1_main.cpp -o $@ $(OBJS)

//object files
matrix.o: matrix.cpp matrix.h
	$(CXX) -c matrix.cpp

gen_number.o: gen_number.cpp gen_number.h
	$(CXX) -c gen_number.cpp

post_process.o: post_process.cpp post_process.h
	$(CXX) -c post_process.cpp

print_menu.o: print_menu.cpp print_menu.h
	$(CXX) -c print_menu.cpp

//Clean
clean:
	rm -f problem1 problem2 *.o

# Create a tarball of the source files
tar:
	tar cfv hw02.tar matrix.h matrix.cpp gen_number.h gen_number.cpp post_process.h post_process.cpp print_menu.h print_menu.cpp problem1_main.cpp problem2_main.cpp
