CXX = g++
CXXFLAGS = -Wall -std=c++11
OBJECTS = main.o
HFILES = insertsort.hpp quicksort.hpp
TARGET = main.out

%.o : %.cpp $(HFILES) Makefile
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TARGET) : $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)

.PHONY : all clean

all : $(TARGET)

clean :
	$(RM) $(TARGET) *.o core