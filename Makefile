CXX = g++
CXXFLAGS = -g -Wall
OBJ = main.o compute.o

all: square

square: $(OBJ)
	$(CXX) $(CXXFLAGS) -o square $(OBJ)

clean:
	$(RM) square *.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

compute.o: compute.cpp compute.h
	$(CXX) $(CXXFLAGS) -c compute.cpp